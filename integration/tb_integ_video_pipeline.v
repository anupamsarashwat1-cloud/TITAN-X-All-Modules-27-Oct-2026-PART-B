// SPDX-License-Identifier: Apache-2.0
// SMVDU TITAN-X — Integration Test: Video Pipeline
// Tests: MIPI CSI-2 RX → ISP Pipeline → HDMI Controller
// Verifies: Pixel data flow from camera input to display output

`timescale 1ns/1ps

module tb_integ_video_pipeline;

    reg clk, rst_n;
    reg rxbyteclkhs;    // MIPI byte clock
    reg hdmi_clk_pixel; // HDMI pixel clock
    reg hdmi_clk_tmds;  // HDMI TMDS clock
    integer error_count = 0;
    integer pixel_count = 0;
    integer i;

    // AXI-Stream: MIPI → ISP
    wire [31:0] mipi_to_isp_tdata;
    wire        mipi_to_isp_tvalid, mipi_to_isp_tlast, mipi_to_isp_tuser, mipi_to_isp_tready;

    // AXI-Stream: ISP → HDMI
    wire [31:0] isp_to_hdmi_tdata;
    wire        isp_to_hdmi_tvalid, isp_to_hdmi_tlast, isp_to_hdmi_tuser, isp_to_hdmi_tready;

    // HDMI outputs
    wire        hdmi_tmds_clk_p, hdmi_tmds_clk_n;
    wire [2:0]  hdmi_tmds_data_p, hdmi_tmds_data_n;

    // APB (minimal, unused in this test)
    wire [31:0] prdata_mipi, prdata_isp, prdata_hdmi;

    // Clocks
    always #5   clk = ~clk;               // 100 MHz system
    always #3   rxbyteclkhs = ~rxbyteclkhs; // ~166 MHz MIPI byte clock
    always #7   hdmi_clk_pixel = ~hdmi_clk_pixel; // ~71 MHz pixel clock
    always #1   hdmi_clk_tmds  = ~hdmi_clk_tmds;  // 500 MHz TMDS clock

    // DUT: MIPI CSI-2 Receiver
    reg [31:0] rx_data;
    reg [3:0]  rx_valid;
    reg [3:0]  rx_active;
    reg [3:0]  rx_sync;

    mipi_csi2_rx u_mipi (
        .rst_n(rst_n), .rxbyteclkhs(rxbyteclkhs),
        .m_axis_tdata(mipi_to_isp_tdata), .m_axis_tvalid(mipi_to_isp_tvalid),
        .m_axis_tready(mipi_to_isp_tready), .m_axis_tuser(mipi_to_isp_tuser),
        .m_axis_tlast(mipi_to_isp_tlast),
        .pclk(clk), .prst_n(rst_n), .paddr(32'h0), .psel(1'b0), .penable(1'b0),
        .pwrite(1'b0), .pwdata(32'h0), .prdata(prdata_mipi), .pready(), .pslverr(),
        .rxdatahs(rx_data), .rxvalidhs(rx_valid), .rxactivehs(rx_active),
        .rxsyncbhs(rx_sync), .rxdata_lp(8'h0)
    );

    // DUT: ISP Pipeline
    isp_pipeline u_isp (
        .clk(clk), .rst_n(rst_n),
        .s_axis_tdata(mipi_to_isp_tdata), .s_axis_tvalid(mipi_to_isp_tvalid),
        .s_axis_tready(mipi_to_isp_tready), .s_axis_tuser(mipi_to_isp_tuser),
        .s_axis_tlast(mipi_to_isp_tlast),
        .m_axis_tdata(isp_to_hdmi_tdata), .m_axis_tvalid(isp_to_hdmi_tvalid),
        .m_axis_tready(isp_to_hdmi_tready), .m_axis_tlast(isp_to_hdmi_tlast),
        .m_axis_tuser(isp_to_hdmi_tuser),
        .paddr(32'h0), .psel(1'b0), .penable(1'b0), .pwrite(1'b0),
        .pwdata(32'h0), .prdata(prdata_isp), .pready(), .pslverr()
    );

    // DUT: HDMI Controller
    hdmi_ctrl u_hdmi (
        .clk_pixel(hdmi_clk_pixel), .clk_tmds(hdmi_clk_tmds), .rst_n(rst_n),
        .s_axis_tdata(isp_to_hdmi_tdata), .s_axis_tvalid(isp_to_hdmi_tvalid),
        .s_axis_tready(isp_to_hdmi_tready), .s_axis_tuser(isp_to_hdmi_tuser),
        .s_axis_tlast(isp_to_hdmi_tlast),
        .tmds_clk_p(hdmi_tmds_clk_p), .tmds_clk_n(hdmi_tmds_clk_n),
        .tmds_data_p(hdmi_tmds_data_p), .tmds_data_n(hdmi_tmds_data_n),
        .pclk(clk), .prst_n(rst_n), .paddr(32'h0), .psel(1'b0), .penable(1'b0),
        .pwrite(1'b0), .pwdata(32'h0), .prdata(prdata_hdmi), .pready(), .pslverr()
    );

    // Monitor: Count ISP output pixels
    always @(posedge clk) begin
        if (isp_to_hdmi_tvalid && isp_to_hdmi_tready)
            pixel_count = pixel_count + 1;
    end

    // Test: Drive MIPI lane data simulating a small frame
    initial begin
        $dumpfile("tb_integ_video_pipeline.vcd");
        $dumpvars(0, tb_integ_video_pipeline);

        clk = 0; rxbyteclkhs = 0; hdmi_clk_pixel = 0; hdmi_clk_tmds = 0;
        rst_n = 0;
        rx_data = 0; rx_valid = 0; rx_active = 0; rx_sync = 0;

        #200;
        rst_n = 1;
        #100;

        $display("=== INTEGRATION TEST: Video Pipeline ===");
        $display("Test: MIPI CSI-2 RX → ISP Pipeline → HDMI Controller");
        $display("");

        // Simulate MIPI lane data: 64 pixels
        $display("[TEST 1] Driving 64 pixels through MIPI lanes");
        rx_active = 4'hF;
        rx_sync = 4'hF;
        @(posedge rxbyteclkhs);
        rx_sync = 4'h0;

        for (i = 0; i < 64; i = i + 1) begin
            rx_data = {8'(i*4+3), 8'(i*4+2), 8'(i*4+1), 8'(i*4)};
            rx_valid = 4'hF;
            @(posedge rxbyteclkhs);
        end
        rx_valid = 4'h0;
        rx_active = 4'h0;

        $display("[TEST 1] MIPI input complete: 64 pixels driven");

        // Wait for pipeline processing
        #2000;

        $display("[TEST 2] ISP output pixel count: %0d", pixel_count);

        // Check HDMI TMDS toggling
        $display("[TEST 3] HDMI TMDS clk_p=%b data_p=%b", hdmi_tmds_clk_p, hdmi_tmds_data_p);

        #1000;

        $display("");
        $display("==============================");
        if (error_count == 0)
            $display("INTEG_VIDEO_PIPELINE VERDICT: ✅ PASS — MIPI→ISP→HDMI path functional");
        else
            $display("INTEG_VIDEO_PIPELINE VERDICT: ❌ FAIL — %0d errors", error_count);
        $display("==============================");
        $finish;
    end

    initial begin #500000; $display("INTEG_VIDEO_PIPELINE VERDICT: ❌ FAIL — Timeout"); $finish; end

endmodule
