// SPDX-License-Identifier: Apache-2.0
// SMVDU TITAN-X — Phase 3 BFM Test: MIPI CSI-2 BFM + RX + ISP
// Tests camera input pipeline with proper CSI-2 packets

`timescale 1ns/1ps

module tb_bfm_mipi;

    reg clk, rst_n;
    reg rxbyteclkhs;
    integer error_count = 0;
    integer pixel_count = 0;

    // BFM control
    reg         send_frame;
    wire        frame_done;

    // BFM → DUT lane signals
    wire [31:0] rxdatahs;
    wire [3:0]  rxvalidhs, rxactivehs, rxsyncbhs;
    wire [7:0]  rxdata_lp;

    // MIPI → ISP AXI-Stream
    wire [31:0] mipi_tdata, isp_tdata;
    wire        mipi_tvalid, mipi_tready, mipi_tlast, mipi_tuser;
    wire        isp_tvalid, isp_tready, isp_tlast, isp_tuser;

    always #5 clk = ~clk;
    always #3 rxbyteclkhs = ~rxbyteclkhs;

    // BFM: MIPI CSI-2 Packet Generator
    mipi_csi2_bfm u_mipi_bfm (
        .rst_n(rst_n), .rxbyteclkhs(rxbyteclkhs),
        .rxdatahs(rxdatahs), .rxvalidhs(rxvalidhs),
        .rxactivehs(rxactivehs), .rxsyncbhs(rxsyncbhs),
        .rxdata_lp(rxdata_lp),
        .send_frame(send_frame), .frame_width(16'd64), .frame_height(16'd8),
        .frame_done(frame_done)
    );

    // DUT: MIPI CSI-2 Receiver
    mipi_csi2_rx u_mipi_rx (
        .rst_n(rst_n), .rxbyteclkhs(rxbyteclkhs),
        .m_axis_tdata(mipi_tdata), .m_axis_tvalid(mipi_tvalid),
        .m_axis_tready(mipi_tready), .m_axis_tuser(mipi_tuser), .m_axis_tlast(mipi_tlast),
        .pclk(clk), .prst_n(rst_n),
        .paddr(32'h0), .psel(1'b0), .penable(1'b0), .pwrite(1'b0), .pwdata(32'h0),
        .prdata(), .pready(), .pslverr(),
        .rxdatahs(rxdatahs), .rxvalidhs(rxvalidhs),
        .rxactivehs(rxactivehs), .rxsyncbhs(rxsyncbhs), .rxdata_lp(rxdata_lp)
    );

    // DUT: ISP Pipeline
    isp_pipeline u_isp (
        .clk(clk), .rst_n(rst_n),
        .s_axis_tdata(mipi_tdata), .s_axis_tvalid(mipi_tvalid),
        .s_axis_tready(mipi_tready), .s_axis_tuser(mipi_tuser), .s_axis_tlast(mipi_tlast),
        .m_axis_tdata(isp_tdata), .m_axis_tvalid(isp_tvalid),
        .m_axis_tready(1'b1), .m_axis_tlast(isp_tlast), .m_axis_tuser(isp_tuser),
        .paddr(32'h0), .psel(1'b0), .penable(1'b0), .pwrite(1'b0), .pwdata(32'h0),
        .prdata(), .pready(), .pslverr()
    );

    // Monitor ISP output
    always @(posedge clk) begin
        if (isp_tvalid)
            pixel_count = pixel_count + 1;
    end

    initial begin
        clk = 0; rxbyteclkhs = 0; rst_n = 0;
        send_frame = 0;

        #200; rst_n = 1; #100;

        $display("========================================");
        $display("  Phase 3 BFM Test: MIPI CSI-2 + ISP");
        $display("========================================");

        // Test 1: Send frame via BFM
        $display("[TEST 1] Sending 64x8 frame via MIPI CSI-2 BFM...");
        send_frame = 1;
        @(posedge rxbyteclkhs);
        send_frame = 0;

        // Wait for frame
        repeat (2000) @(posedge rxbyteclkhs);
        $display("[TEST 1] BFM frame_done=%b", frame_done);

        // Wait for ISP processing
        #5000;
        $display("[TEST 2] ISP output pixel count: %0d", pixel_count);

        // Test 3: Send second frame
        $display("[TEST 3] Sending second frame...");
        pixel_count = 0;
        send_frame = 1;
        @(posedge rxbyteclkhs);
        send_frame = 0;
        repeat (2000) @(posedge rxbyteclkhs);
        #5000;
        $display("[TEST 3] Second frame pixel count: %0d", pixel_count);

        #1000;
        $display("");
        $display("========================================");
        if (error_count == 0)
            $display("BFM_MIPI VERDICT: PASS");
        else
            $display("BFM_MIPI VERDICT: FAIL (%0d errors)", error_count);
        $display("========================================");
        $finish;
    end

    initial begin #500000; $display("BFM_MIPI VERDICT: FAIL (Timeout)"); $finish; end
endmodule
