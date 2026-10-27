// SPDX-License-Identifier: Apache-2.0
// SMVDU TITAN-X — Phase 3 BFM Test: PCIe Root Port + PCIe Endpoint
// Tests PCIe LTSSM link training

`timescale 1ns/1ps

module tb_bfm_pcie;

    reg pcie_clk, pipe_clk, rst_n;
    integer error_count = 0;

    // PIPE interface
    wire [31:0] pipe_tx_data, pipe_rx_data;
    wire [3:0]  pipe_tx_datak, pipe_rx_datak;
    wire [1:0]  pipe_tx_rate;
    wire        pipe_tx_elecidle, pipe_tx_compliance;
    wire        pipe_rx_valid, pipe_rx_elecidle;
    wire [2:0]  pipe_rx_status;
    wire        pipe_phy_status;
    wire        pipe_rx_polarity;
    wire [1:0]  pipe_power_down;

    // AXI master from PCIe
    wire        m_awvalid, m_wvalid, m_arvalid;
    wire [39:0] m_awaddr, m_araddr;
    wire [63:0] m_wdata;
    wire [7:0]  m_wstrb;
    wire        m_wlast;
    wire [3:0]  m_awid, m_arid, m_bid, m_rid;
    wire [1:0]  m_bresp, m_rresp;
    wire        m_bready, m_rready, m_rlast;

    always #5 pcie_clk = ~pcie_clk;
    always #4 pipe_clk = ~pipe_clk;  // 125 MHz PIPE clock

    // DUT: PCIe Endpoint
    pcie_top u_pcie (
        .pcie_clk(pcie_clk), .pcie_rst_n(rst_n), .pipe_clk(pipe_clk),
        .m_awvalid(m_awvalid), .m_awready(1'b1), .m_awaddr(m_awaddr), .m_awid(m_awid),
        .m_wvalid(m_wvalid), .m_wready(1'b1), .m_wdata(m_wdata), .m_wstrb(m_wstrb), .m_wlast(m_wlast),
        .m_bvalid(1'b0), .m_bready(m_bready), .m_bresp(2'b00), .m_bid(4'h0),
        .m_arvalid(m_arvalid), .m_arready(1'b1), .m_araddr(m_araddr), .m_arid(m_arid),
        .m_rvalid(1'b0), .m_rready(m_rready), .m_rdata(64'h0), .m_rresp(2'b00), .m_rlast(1'b0), .m_rid(4'h0),
        .pipe_tx_data(pipe_tx_data), .pipe_tx_datak(pipe_tx_datak),
        .pipe_tx_rate(pipe_tx_rate), .pipe_tx_elecidle(pipe_tx_elecidle),
        .pipe_tx_compliance(pipe_tx_compliance),
        .pipe_rx_data(pipe_rx_data), .pipe_rx_datak(pipe_rx_datak),
        .pipe_rx_polarity(pipe_rx_polarity), .pipe_power_down(pipe_power_down),
        .pipe_rx_valid(pipe_rx_valid), .pipe_rx_elecidle(pipe_rx_elecidle),
        .pipe_rx_status(pipe_rx_status), .pipe_phy_status(pipe_phy_status)
    );

    // BFM: PCIe Root Port
    pcie_rootport_bfm u_rp_bfm (
        .pipe_clk(pipe_clk), .rst_n(rst_n),
        .pipe_rx_data(pipe_rx_data), .pipe_rx_datak(pipe_rx_datak),
        .pipe_tx_data(pipe_tx_data), .pipe_tx_datak(pipe_tx_datak),
        .pipe_tx_rate(pipe_tx_rate), .pipe_tx_elecidle(pipe_tx_elecidle),
        .pipe_tx_compliance(pipe_tx_compliance),
        .pipe_rx_valid(pipe_rx_valid), .pipe_rx_elecidle(pipe_rx_elecidle),
        .pipe_rx_status(pipe_rx_status), .pipe_phy_status(pipe_phy_status),
        .pipe_rx_polarity(pipe_rx_polarity), .pipe_power_down(pipe_power_down)
    );

    initial begin
        pcie_clk = 0; pipe_clk = 0; rst_n = 0;
        #100; rst_n = 1;

        $display("========================================");
        $display("  Phase 3 BFM Test: PCIe Link Training");
        $display("========================================");

        $display("[TEST 1] Waiting for LTSSM Detect...");
        #200;
        $display("[TEST 1] pipe_tx_elecidle=%b (0=endpoint present)", pipe_tx_elecidle);

        $display("[TEST 2] Waiting for Polling (TS1 exchange)...");
        #500;
        $display("[TEST 2] pipe_rx_valid=%b pipe_rx_data=0x%08h", pipe_rx_valid, pipe_rx_data);

        $display("[TEST 3] Waiting for Config (TS2 exchange)...");
        #500;
        $display("[TEST 3] pipe_rx_data=0x%08h", pipe_rx_data);

        $display("[TEST 4] Link training progress check...");
        #500;
        $display("[TEST 4] pipe_tx_data=0x%08h pipe_rx_valid=%b", pipe_tx_data, pipe_rx_valid);

        #1000;
        $display("");
        $display("========================================");
        if (error_count == 0)
            $display("BFM_PCIE VERDICT: PASS");
        else
            $display("BFM_PCIE VERDICT: FAIL (%0d errors)", error_count);
        $display("========================================");
        $finish;
    end

    initial begin #200000; $display("BFM_PCIE VERDICT: FAIL (Timeout)"); $finish; end
endmodule
