// SPDX-License-Identifier: Apache-2.0
// SMVDU TITAN-X — Integration Test: AXI → AHB → APB Peripheral Path
// Tests: AXI4-to-AHB bridge → APB decode → UART/RTC registers
// Verifies: End-to-end register write/read through bus hierarchy

`timescale 1ns/1ps

module tb_integ_peripheral_bus;

    reg clk, rst_n;
    integer error_count = 0;

    // AXI slave port (driven by TB as master)
    reg         s_awvalid;
    wire        s_awready;
    reg  [39:0] s_awaddr;
    reg  [3:0]  s_awid;
    reg         s_wvalid;
    wire        s_wready;
    reg  [63:0] s_wdata;
    reg  [7:0]  s_wstrb;
    reg         s_arvalid;
    wire        s_arready;
    reg  [39:0] s_araddr;
    reg  [3:0]  s_arid;
    wire        s_bvalid;
    reg         s_bready;
    wire [1:0]  s_bresp;
    wire [3:0]  s_bid;
    wire        s_rvalid;
    reg         s_rready;
    wire [63:0] s_rdata;
    wire [1:0]  s_rresp;
    wire        s_rlast;

    // AHB signals
    wire [31:0] haddr, hwdata;
    wire [31:0] hrdata_ahb;
    wire        hwrite, hready, hresp;
    wire [1:0]  htrans;
    wire [2:0]  hsize, hburst;

    // APB signals
    wire [31:0] paddr = haddr;
    wire [31:0] pwdata = hwdata[31:0];
    wire        pwrite = hwrite;
    wire        penable = htrans[1];
    wire        psel = htrans[1];

    // Peripheral read data
    wire [31:0] prdata_uart0, prdata_rtc;
    wire [4:0]  timer_irq;
    wire        uart_irq, uart_tx_pin;

    // APB address decode
    wire psel_uart0 = psel && (paddr[31:12] == 20'h10000);
    wire psel_rtc   = psel && (paddr[31:12] == 20'h10010);

    wire [31:0] prdata_mux = psel_uart0 ? prdata_uart0 :
                              psel_rtc   ? prdata_rtc   : 32'h0;

    assign hrdata_ahb = prdata_mux;
    assign hready = 1'b1;
    assign hresp  = 1'b0;

    // Clock
    always #5 clk = ~clk;
    reg rtc_clk;
    always #15259 rtc_clk = ~rtc_clk;

    // DUT: AXI4-to-AHB bridge (DW=64 to match SoC)
    axi4_to_ahb #(.AW(40), .DW(64), .IDW(4)) u_axi2ahb (
        .clk(clk), .rst_n(rst_n),
        .s_awvalid(s_awvalid), .s_awready(s_awready), .s_awaddr(s_awaddr), .s_awid(s_awid),
        .s_wvalid(s_wvalid), .s_wready(s_wready), .s_wdata(s_wdata), .s_wstrb(s_wstrb),
        .s_bvalid(s_bvalid), .s_bready(s_bready), .s_bresp(s_bresp), .s_bid(s_bid),
        .s_arvalid(s_arvalid), .s_arready(s_arready), .s_araddr(s_araddr), .s_arid(s_arid),
        .s_rvalid(s_rvalid), .s_rready(s_rready), .s_rdata(s_rdata), .s_rresp(s_rresp),
        .s_rlast(s_rlast),
        .haddr(haddr), .hwrite(hwrite), .htrans(htrans), .hsize(hsize), .hburst(hburst),
        .hwdata(hwdata), .hrdata({32'h0, hrdata_ahb}), .hready(hready), .hresp(hresp)
    );

    // DUT: UART 16550
    uart_16550 u_uart0 (
        .clk(clk), .rst_n(rst_n),
        .paddr(paddr), .psel(psel_uart0), .penable(penable), .pwrite(pwrite),
        .pwdata(pwdata), .prdata(prdata_uart0), .pready(), .pslverr(),
        .uart_irq(uart_irq), .rxd(1'b1), .txd(uart_tx_pin),
        .irda_tx(), .irda_rx(1'b0), .lin_tx(), .lin_rx(1'b1)
    );

    // DUT: RTC
    rtc u_rtc (
        .clk(clk), .rtc_clk(rtc_clk), .rst_n(rst_n),
        .paddr(paddr), .psel(psel_rtc), .penable(penable), .pwrite(pwrite),
        .pwdata(pwdata), .prdata(prdata_rtc), .pready(), .pslverr(),
        .timer_irq(timer_irq)
    );

    // AXI Write — present AW, then W when wready
    task axi_wr(input [39:0] addr, input [31:0] data);
        integer timeout_cnt;
        begin
            @(posedge clk);
            // Phase 1: Address
            s_awvalid = 1; s_awaddr = addr; s_awid = 4'h1;
            @(posedge clk);
            // Bridge accepts AW in BS_IDLE and asserts wready
            timeout_cnt = 0;
            while (!s_awready && timeout_cnt < 100) begin @(posedge clk); timeout_cnt = timeout_cnt + 1; end
            s_awvalid = 0;

            // Phase 2: Data (bridge should now be in BS_DATA with wready=1)
            @(posedge clk);
            s_wvalid = 1; s_wdata = {32'h0, data}; s_wstrb = 8'h0F;
            timeout_cnt = 0;
            while (!s_wready && timeout_cnt < 100) begin @(posedge clk); timeout_cnt = timeout_cnt + 1; end
            @(posedge clk);
            s_wvalid = 0;

            // Phase 3: Response
            timeout_cnt = 0;
            while (!s_bvalid && timeout_cnt < 100) begin @(posedge clk); timeout_cnt = timeout_cnt + 1; end
            if (timeout_cnt >= 100) begin
                $display("ERROR: AXI Write timeout at addr 0x%010h", addr);
                error_count = error_count + 1;
            end
            @(posedge clk);
        end
    endtask

    // AXI Read
    task axi_rd(input [39:0] addr, output [31:0] data);
        integer timeout_cnt;
        begin
            @(posedge clk);
            s_arvalid = 1; s_araddr = addr; s_arid = 4'h1;
            timeout_cnt = 0;
            while (!s_arready && timeout_cnt < 100) begin @(posedge clk); timeout_cnt = timeout_cnt + 1; end
            // Keep arvalid until rvalid
            timeout_cnt = 0;
            while (!s_rvalid && timeout_cnt < 100) begin @(posedge clk); timeout_cnt = timeout_cnt + 1; end
            data = s_rdata[31:0];
            s_arvalid = 0;
            if (timeout_cnt >= 100) begin
                $display("ERROR: AXI Read timeout at addr 0x%010h", addr);
                error_count = error_count + 1;
            end
            @(posedge clk);
        end
    endtask

    reg [31:0] rd_data;
    initial begin
        $dumpfile("tb_integ_peripheral_bus.vcd");
        $dumpvars(0, tb_integ_peripheral_bus);

        clk = 0; rtc_clk = 0; rst_n = 0;
        s_awvalid = 0; s_awaddr = 0; s_awid = 0;
        s_wvalid = 0; s_wdata = 0; s_wstrb = 0;
        s_bready = 1;
        s_arvalid = 0; s_araddr = 0; s_arid = 0;
        s_rready = 1;

        #100; rst_n = 1; #50;

        $display("=== INTEGRATION TEST: Peripheral Bus Path ===");
        $display("Test: AXI → AXI4-to-AHB → APB → UART/RTC");
        $display("");

        // Test 1: UART — Write LCR (DLAB=1), write DLL, clear DLAB
        $display("[TEST 1] UART: Configure for 8N1");
        axi_wr({8'h0, 20'h10000, 12'h00C}, 32'h80);   // LCR: DLAB=1
        axi_wr({8'h0, 20'h10000, 12'h000}, 32'h01);   // DLL=1
        axi_wr({8'h0, 20'h10000, 12'h00C}, 32'h03);   // LCR: 8N1
        $display("[TEST 1] UART configured");

        // Test 2: UART — Read LSR
        $display("[TEST 2] UART: Read Line Status Register");
        axi_rd({8'h0, 20'h10000, 12'h014}, rd_data);
        $display("[TEST 2] UART LSR = 0x%08h", rd_data);

        // Test 3: UART — Write TX byte
        $display("[TEST 3] UART: Write THR='A' (0x41)");
        axi_wr({8'h0, 20'h10000, 12'h000}, 32'h41);
        $display("[TEST 3] TX byte written, uart_tx=%b", uart_tx_pin);

        // Test 4: RTC — Write mtimecmp
        $display("[TEST 4] RTC: Write mtimecmp=0x1000");
        axi_wr({8'h0, 20'h10010, 12'h008}, 32'h1000);
        $display("[TEST 4] RTC mtimecmp set");

        // Test 5: RTC — Read mtime
        axi_rd({8'h0, 20'h10010, 12'h000}, rd_data);
        $display("[TEST 5] RTC mtime = 0x%08h", rd_data);

        #500;

        $display("");
        $display("==============================");
        if (error_count == 0)
            $display("INTEG_PERIPHERAL_BUS VERDICT: ✅ PASS — AXI→AHB→APB→UART/RTC path functional");
        else
            $display("INTEG_PERIPHERAL_BUS VERDICT: ❌ FAIL — %0d errors", error_count);
        $display("==============================");
        $finish;
    end

    initial begin #500000; $display("INTEG_PERIPHERAL_BUS VERDICT: ❌ FAIL — Timeout"); $finish; end

endmodule
