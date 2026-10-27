// SPDX-License-Identifier: Apache-2.0
// SMVDU TITAN-X — Integration Test: Security Chain (self-checking rewrite)
// DRBG: APB BFM drives instantiate/generate/reseed; entropy forced by TB
//       (TB plays the TRNG role until the real TRNG is integrated).
// secure_boot: FSM observed through boot_pass/boot_fail and its APB status.
// Every test checks exact register values or state transitions.
`timescale 1ns/1ps

`include "tb_bfms.vh"

module tb_integ_security_chain;

    `include "tb_macros.vh"

    reg clk;
    reg rst_n;
    `TB_HARNESS(2_000_000)

    `TB_SCOREBOARD

    // ---------------- shared APB bus ----------------
    wire [31:0] paddr, pwdata;
    wire        psel, penable, pwrite;
    wire [31:0] prdata_drbg, prdata_boot;
    wire        drbg_irq;
    // Block selects decode the REGION nibble (bits [31:28]): 0x1 -> DRBG,
    // 0x2 -> secure_boot. (The original decoded bits [11:8], which are 0x0
    // for every 0x1000_xxxx/0x2000_xxxx address — neither engine was ever
    // selected and all reads returned the mux default zero.)
    wire        psel_drbg = psel && (paddr[31:28] == 4'h1);
    wire        psel_boot = psel && (paddr[31:28] == 4'h2);
    wire [31:0] prdata_mux = psel_drbg ? prdata_drbg :
                            psel_boot ? prdata_boot : 32'h0;

    // ---------------- DRBG ----------------
    reg [255:0] entropy =
        256'h0123_4567_89AB_CDEF_FEDC_BA98_7654_3210_A5A5_5A5A_DEAD_BEEF_CAFE_BABE;
    reg         trng_valid;

    apb_master_bfm u_apb (
        .clk(clk), .rst_n(rst_n),
        .paddr(paddr), .psel(psel), .penable(penable), .pwrite(pwrite),
        .pwdata(pwdata), .prdata(prdata_mux), .pready(1'b1), .pslverr(1'b0)
    );

    drbg u_drbg (
        .clk(clk), .rst_n(rst_n),
        .paddr(paddr), .psel(psel_drbg), .penable(penable), .pwrite(pwrite),
        .pwdata(pwdata), .prdata(prdata_drbg), .pready(), .pslverr(),
        .trng_entropy(entropy), .trng_valid(trng_valid), .trng_ready(),
        .drbg_irq(drbg_irq)
    );

    // ---------------- secure_boot ----------------
    wire        boot_pass, boot_fail;
    wire        envm_req;
    reg         envm_valid;

    secure_boot u_boot (
        .clk(clk), .rst_n(rst_n),
        .paddr(paddr), .psel(psel_boot), .penable(penable), .pwrite(pwrite),
        .pwdata(pwdata), .prdata(prdata_boot), .pready(), .pslverr(),
        .envm_addr(), .envm_req(envm_req), .envm_rdata(32'h0),
        .envm_valid(envm_valid),
        .boot_pass(boot_pass), .boot_fail(boot_fail)
    );

    // feed eNVM read-valids while the boot engine reads
    always @(posedge clk) envm_valid <= envm_req;

    initial begin
        $dumpfile("tb_integ_security_chain.vcd");
        $dumpvars(0, tb_integ_security_chain);
    end

    // ---------------- tests ----------------
    reg [31:0] rd;
    reg [1:0]  apb_resp;
    integer guard;

    task apb_w(input [31:0] a, input [31:0] d);
        begin u_apb.apb_write(a, d, apb_resp); end
    endtask

    task apb_r(input [31:0] a);
        begin u_apb.apb_read(a, rd, apb_resp); end
    endtask

    initial begin
        repeat (30) @(posedge clk);

        // S1: clean initial state
        apb_r(32'h1000_0004);
        `EXPECT_EQ(rd[1:0], 2'b00, "DRBG idle busy=0 done=0")

        // S2: instantiate with known entropy -> done + irq
        apb_w(32'h1000_0000, 32'h0000_0001);   // CTRL.instantiate
        trng_valid = 1'b1;
        guard = 0;
        while (u_drbg.stat_reg[1] !== 1'b1 && guard < 50) begin @(posedge clk); guard = guard+1; end
        trng_valid = 1'b0;
        `EXPECT_TRUE(u_drbg.stat_reg[1] === 1'b1, "instantiate sets DONE")
        `EXPECT_TRUE(drbg_irq === 1'b1, "drbg_irq reflects DONE")
        `EXPECT_EQ(u_drbg.reseed_counter, 32'd1, "reseed counter=1")
        `EXPECT_EQ(u_drbg.Key, ~entropy, "Key=~entropy")

        // S3: first GENERATE returns original V words (V increments after capture)
        apb_r(32'h1000_0004);                  // clears done
        apb_w(32'h1000_0000, 32'h0000_0004);   // CTRL.generate
        guard = 0;
        while (u_drbg.stat_reg[1] !== 1'b1 && guard < 50) begin @(posedge clk); guard = guard+1; end
        `EXPECT_TRUE(u_drbg.stat_reg[1] === 1'b1, "generate sets DONE")
        apb_r(32'h1000_0010);
        `EXPECT_EQ(rd, entropy[31:0], "gen out[0]==V[31:0]")
        apb_r(32'h1000_002c);
        `EXPECT_EQ(rd, entropy[255:224], "gen out[7]==V[255:224]")
        `EXPECT_EQ(u_drbg.V, entropy + 256'h1, "V incremented")

        // S4: second generate returns incremented words — determinism check
        apb_r(32'h1000_0004);
        apb_w(32'h1000_0000, 32'h0000_0004);
        guard = 0;
        while (u_drbg.stat_reg[1] !== 1'b1 && guard < 50) begin @(posedge clk); guard = guard+1; end
        apb_r(32'h1000_0010);
        `EXPECT_EQ(rd, entropy[31:0] + 32'h1, "second gen out[0]==V+1")

        // S5: reseed path re-sets done and resets counter
        apb_r(32'h1000_0004);
        apb_w(32'h1000_0000, 32'h0000_0002);   // CTRL.reseed
        trng_valid = 1'b1;
        guard = 0;
        while (u_drbg.stat_reg[1] !== 1'b1 && guard < 50) begin @(posedge clk); guard = guard+1; end
        trng_valid = 1'b0;
        `EXPECT_TRUE(u_drbg.stat_reg[1] === 1'b1, "reseed sets DONE")
        `EXPECT_EQ(u_drbg.reseed_counter, 32'd1, "reseed resets counter")

        // S6: secure boot reaches SUCCESS with fed eNVM valids (mock verifier)
        guard = 0;
        while (boot_pass !== 1'b1 && guard < 50000) begin @(posedge clk); guard = guard+1; end
        `EXPECT_TRUE(boot_pass === 1'b1, "secure_boot asserts boot_pass")
        `EXPECT_TRUE(boot_fail === 1'b0, "secure_boot never asserts boot_fail")
        if (boot_pass === 1'b1) begin
            apb_r(32'h2000_0000);
            `EXPECT_EQ(rd[2:0], 3'd4, "boot APB status==SUCCESS")
        end

        `TB_REPORT("SEC_CHAIN")
    end

endmodule
