// SPDX-License-Identifier: Apache-2.0
// SMVDU TITAN-X — Integration Test: Memory Hierarchy (self-checking rewrite)
// Chain: AXI BFM → axi4_crossbar → ddr_ctrl_top → ddr_scheduler → ddr_phy_if
//        → ddr4_sdram_bfm (in-sim DRAM model)
// Every test compares data against expected values. No activity-based passes.
`timescale 1ns/1ps

`include "tb_bfms.vh"

module tb_integ_memory_hierarchy;

    `include "tb_macros.vh"

    reg clk;
    reg rst_n;
    `TB_HARNESS(6_000_000)   // generous wall: DDR init alone is 400 us at 10 ns clk

    `TB_SCOREBOARD

    // ---------------- parameters & wires ----------------
    localparam AW = 40, DW = 64, IDW = 4, NS = 9;

    wire         awvalid, awready, wvalid, wready, wlast;
    wire         bvalid, bready, arvalid, arready, rvalid, rready, rlast;
    wire [1:0]   bresp, rresp;
    wire [AW-1:0] awaddr, araddr;
    wire [DW-1:0] wdata, rdata;
    wire [DW/8-1:0] wstrb;

    // crossbar slave side (flattened, NS=9)
    wire [NS-1:0]        sx_awvalid, sx_wvalid, sx_wlast;
    wire [NS-1:0]        sx_bvalid, sx_arvalid, sx_rvalid, sx_rready, sx_rlast;
    wire [(NS*AW)-1:0]   sx_awaddr, sx_araddr;
    wire [(NS*DW)-1:0]   sx_wdata, sx_rdata;
    wire [(NS*(DW/8))-1:0] sx_wstrb;
    wire [(NS*2)-1:0]    sx_bresp, sx_rresp;
    wire [(NS*IDW)-1:0]  sx_awid, sx_bid, sx_arid, sx_rid;
    // driven by slaves:
    wire [NS-1:0]        sx_awready, sx_wready, sx_bready, sx_arready;

    // DDR pins
    wire ck_p, ck_n, cke, cs_n, ras_n, cas_n, we_n;
    wire [2:0] ba;  wire [1:0] bg;  wire [15:0] addr16;  wire [7:0] dm;
    wire [63:0] dq;  wire [7:0] dqs_p, dqs_n;

    // ---------------- BFMs & DUT chain ----------------
    axi_master_bfm #(.AW(AW), .DW(DW), .IDW(IDW)) u_axi (
        .clk(clk), .rst_n(rst_n),
        .m_awvalid(awvalid), .m_awready(awready), .m_awaddr(awaddr), .m_awid(),
        .m_wvalid(wvalid), .m_wready(wready), .m_wdata(wdata),
        .m_wstrb(wstrb), .m_wlast(wlast),
        .m_bvalid(bvalid), .m_bready(bready), .m_bresp(bresp), .m_bid(),
        .m_arvalid(arvalid), .m_arready(arready), .m_araddr(araddr), .m_arid(),
        .m_rvalid(rvalid), .m_rready(rready), .m_rdata(rdata),
        .m_rresp(rresp), .m_rlast(rlast), .m_rid()
    );

    axi4_crossbar #(.NM(1), .NS(NS)) u_xbar (
        .clk(clk), .rst_n(rst_n),
        .m_awvalid(awvalid), .m_awready(awready), .m_awaddr(awaddr),
        .m_awid({IDW{1'b0}}),
        .m_wvalid(wvalid), .m_wready(wready), .m_wdata(wdata),
        .m_wstrb(wstrb), .m_wlast(wlast),
        .m_bvalid(bvalid), .m_bready(bready), .m_bresp(bresp), .m_bid(),
        .m_arvalid(arvalid), .m_arready(arready), .m_araddr(araddr),
        .m_arid({IDW{1'b0}}),
        .m_rvalid(rvalid), .m_rready(rready), .m_rdata(rdata),
        .m_rresp(rresp), .m_rlast(rlast), .m_rid(),
        .s_awvalid(sx_awvalid), .s_awready(sx_awready),
        .s_awaddr(sx_awaddr), .s_awid(sx_awid),
        .s_wvalid(sx_wvalid), .s_wready(sx_wready),
        .s_wdata(sx_wdata), .s_wstrb(sx_wstrb), .s_wlast(sx_wlast),
        .s_bvalid(sx_bvalid), .s_bready(sx_bready),
        .s_bresp(sx_bresp), .s_bid(sx_bid),
        .s_arvalid(sx_arvalid), .s_arready(sx_arready),
        .s_araddr(sx_araddr), .s_arid(sx_arid),
        .s_rvalid(sx_rvalid), .s_rready(sx_rready),
        .s_rdata(sx_rdata), .s_rresp(sx_rresp),
        .s_rlast(sx_rlast), .s_rid(sx_rid)
    );

    // slave 0 = DDR region ([39:31]==9'h001); slaves 1..8 tied off
    genvar s;
    generate for (s = 1; s < NS; s = s + 1) begin : g_tie
        assign sx_awready[s] = 1'b1;
        assign sx_wready[s]  = 1'b1;
        assign sx_bready[s]  = 1'b1;
        assign sx_bvalid[s]  = 1'b0;
        assign sx_bid[s*IDW +: IDW] = {IDW{1'b0}};
        assign sx_bresp[s*2 +: 2]   = 2'b00;
        assign sx_arready[s] = 1'b1;
        assign sx_rvalid[s]  = 1'b0;
        assign sx_rdata[s*DW +: DW] = {DW{1'b0}};
        assign sx_rresp[s*2 +: 2]   = 2'b00;
        assign sx_rlast[s]   = 1'b0;
        assign sx_rid[s*IDW +: IDW] = {IDW{1'b0}};
    end endgenerate

    ddr_ctrl_top u_ddr (
        .clk(clk), .rst_n(rst_n),
        .s_awvalid(sx_awvalid[0]), .s_awready(sx_awready[0]),
        .s_awaddr(sx_awaddr[0*AW +: AW]), .s_awid(sx_awid[0*IDW +: IDW]),
        .s_awlen(8'h00), .s_awsize(3'd3),
        .s_wvalid(sx_wvalid[0]), .s_wready(sx_wready[0]),
        .s_wdata(sx_wdata[0*DW +: DW]),
        .s_wstrb(sx_wstrb[0*(DW/8) +: (DW/8)]), .s_wlast(sx_wlast[0]),
        .s_bvalid(sx_bvalid[0]), .s_bready(sx_bready[0]),
        .s_bresp(sx_bresp[0*2 +: 2]), .s_bid(sx_bid[0*IDW +: IDW]),
        .s_arvalid(sx_arvalid[0]), .s_arready(sx_arready[0]),
        .s_araddr(sx_araddr[0*AW +: AW]), .s_arid(sx_arid[0*IDW +: IDW]),
        .s_arlen(8'h00),
        .s_rvalid(sx_rvalid[0]), .s_rready(sx_rready[0]),
        .s_rdata(sx_rdata[0*DW +: DW]),
        .s_rresp(sx_rresp[0*2 +: 2]), .s_rlast(sx_rlast[0]),
        .s_rid(sx_rid[0*IDW +: IDW]),
        .ddr_ck_p(ck_p), .ddr_ck_n(ck_n), .ddr_cke(cke), .ddr_cs_n(cs_n),
        .ddr_ras_n(ras_n), .ddr_cas_n(cas_n), .ddr_we_n(we_n),
        .ddr_ba(ba), .ddr_bg(bg), .ddr_addr(addr16), .ddr_dm(dm),
        .ddr_dq(dq), .ddr_dqs_p(dqs_p), .ddr_dqs_n(dqs_n)
    );

    ddr4_sdram_bfm #(.ROWS(1024), .COLS(64)) u_dram (
        .ddr_ck_p(ck_p), .ddr_ck_n(ck_n), .ddr_cke(cke),
        .ddr_cs_n(cs_n), .ddr_ras_n(ras_n), .ddr_cas_n(cas_n),
        .ddr_we_n(we_n),
        .ddr_act_n(1'b0), .ddr_reset_n(1'b1), .ddr_odt(1'b0),
        .ddr_addr(addr16), .ddr_ba(ba), .ddr_bg(bg),
        .ddr_dq(dq), .ddr_dqs_p(dqs_p), .ddr_dqs_n(dqs_n)
    );

    initial begin
        $dumpfile("tb_integ_memory_hierarchy.vcd");
        $dumpvars(0, tb_integ_memory_hierarchy);
    end

    // ---------------- test sequence ----------------
    reg [1:0]  resp;
    reg [63:0] rd;
    integer t;

    task wr_check(input [39:0] a, input [63:0] d);
        begin
            u_axi.axi_write(a, d, resp);
            tb_checks = tb_checks + 1;
            if (resp !== 2'b00) begin
                tb_errors = tb_errors + 1;
                $display("[FAIL] write @%h resp=%b (%0t)", a, resp, $time);
            end
        end
    endtask

    task rd_expect(input [39:0] a, input [63:0] exp);
        begin
            u_axi.axi_read(a, rd, resp);
            `EXPECT_EQ(resp, 2'b00, "read resp OKAY")
            `EXPECT_KNOWN(rd, 64, "readback bits known")
            `EXPECT_EQ(rd, exp, "readback value")
        end
    endtask

    initial begin
        // wait out DDR controller init (INIT_CYCLES=40000)
        t = 0;
        while (u_ddr.init_done !== 1'b1 && t < 100000) begin
            @(posedge clk); t = t + 1;
        end
        `EXPECT_TRUE(u_ddr.init_done === 1'b1, "DDR init completes")
        repeat (20) @(posedge clk);

        // T1: single write + readback
        wr_check(40'h00_8000_0100, 64'hDEAD_BEEF_CAFE_BABE);
        rd_expect (40'h00_8000_0100, 64'hDEAD_BEEF_CAFE_BABE);

        // T2: second location keeps first intact
        wr_check(40'h00_8000_0200, 64'h1234_5678_9ABC_DEF0);
        rd_expect (40'h00_8000_0100, 64'hDEAD_BEEF_CAFE_BABE);
        rd_expect (40'h00_8000_0200, 64'h1234_5678_9ABC_DEF0);

        // T3: bank-group aliasing regression — addresses differing only in
        // bits [16:15] must NOT collide (bg tied 0 in current RTL)
        wr_check(40'h00_8000_0100, 64'hAAAA_AAAA_AAAA_AAAA);
        wr_check(40'h00_8000_8100, 64'hBBBB_BBBB_BBBB_BBBB);
        rd_expect (40'h00_8000_0100, 64'hAAAA_AAAA_AAAA_AAAA);
        rd_expect (40'h00_8000_8100, 64'hBBBB_BBBB_BBBB_BBBB);

        // T4: bit patterns — all-ones and LSB-of-upper-word
        wr_check(40'h00_8000_0300, 64'hFFFF_FFFF_FFFF_FFFF);
        wr_check(40'h00_8000_0308, 64'h0000_0000_0000_0001);
        rd_expect (40'h00_8000_0300, 64'hFFFF_FFFF_FFFF_FFFF);
        rd_expect (40'h00_8000_0308, 64'h0000_0000_0000_0001);

        `TB_REPORT("MEM_HIER")
    end

endmodule
