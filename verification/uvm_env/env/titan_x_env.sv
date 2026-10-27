// SPDX-License-Identifier: Apache-2.0
// SMVDU TITAN-X UVM Verification Environment
`timescale 1ns/1ps

module titan_x_env (
    input wire clk,
    input wire rst_n,

    // AXI4 Interface connected to DUT / Interconnect
    output wire        m_awvalid,
    input  wire        m_awready,
    output wire [39:0] m_awaddr,
    output wire [3:0]  m_awid,
    output wire [7:0]  m_awlen,
    output wire [2:0]  m_awsize,
    output wire [1:0]  m_awburst,

    output wire        m_wvalid,
    input  wire        m_wready,
    output wire [63:0] m_wdata,
    output wire [7:0]  m_wstrb,
    output wire        m_wlast,

    input  wire        m_bvalid,
    output wire        m_bready,
    input  wire [1:0]  m_bresp,
    input  wire [3:0]  m_bid,

    output wire        m_arvalid,
    input  wire        m_arready,
    output wire [39:0] m_araddr,
    output wire [3:0]  m_arid,
    output wire [7:0]  m_arlen,
    output wire [2:0]  m_arsize,
    output wire [1:0]  m_arburst,

    input  wire        m_rvalid,
    output wire        m_rready,
    input  wire [63:0] m_rdata,
    input  wire [1:0]  m_rresp,
    input  wire        m_rlast,
    input  wire [3:0]  m_rid
);

    import uvm_types_pkg::*;

    // Instantiate AXI Driver
    axi_driver u_driver (
        .clk       (clk),
        .rst_n     (rst_n),
        .m_awvalid (m_awvalid),
        .m_awready (m_awready),
        .m_awaddr  (m_awaddr),
        .m_awid    (m_awid),
        .m_awlen   (m_awlen),
        .m_awsize  (m_awsize),
        .m_awburst (m_awburst),
        .m_wvalid  (m_wvalid),
        .m_wready  (m_wready),
        .m_wdata   (m_wdata),
        .m_wstrb   (m_wstrb),
        .m_wlast   (m_wlast),
        .m_bvalid  (m_bvalid),
        .m_bready  (m_bready),
        .m_bresp   (m_bresp),
        .m_bid     (m_bid),
        .m_arvalid (m_arvalid),
        .m_arready (m_arready),
        .m_araddr  (m_araddr),
        .m_arid    (m_arid),
        .m_arlen   (m_arlen),
        .m_arsize  (m_arsize),
        .m_arburst (m_arburst),
        .m_rvalid  (m_rvalid),
        .m_rready  (m_rready),
        .m_rdata   (m_rdata),
        .m_rresp   (m_rresp),
        .m_rlast   (m_rlast),
        .m_rid     (m_rid)
    );

    // Instantiate AXI Monitor
    axi_monitor u_monitor (
        .clk       (clk),
        .rst_n     (rst_n),
        .awvalid   (m_awvalid),
        .awready   (m_awready),
        .awaddr    (m_awaddr),
        .awid      (m_awid),
        .wvalid    (m_wvalid),
        .wready    (m_wready),
        .wdata     (m_wdata),
        .wstrb     (m_wstrb),
        .wlast     (m_wlast),
        .bvalid    (m_bvalid),
        .bready    (m_bready),
        .bresp     (m_bresp),
        .bid       (m_bid),
        .arvalid   (m_arvalid),
        .arready   (m_arready),
        .araddr    (m_araddr),
        .arid      (m_arid),
        .rvalid    (m_rvalid),
        .rready    (m_rready),
        .rdata     (m_rdata),
        .rresp     (m_rresp),
        .rlast     (m_rlast),
        .rid       (m_rid)
    );

    // Instantiate Scoreboard
    titan_x_scoreboard u_scoreboard ();

    // PRNG for Constrained-Random generation
    integer seed = 32'hCAFE_BABE;

    function [31:0] get_rand32();
        begin
            seed = seed * 1103515245 + 12345;
            get_rand32 = seed;
        end
    endfunction

    function [63:0] get_rand64();
        begin
            get_rand64 = {get_rand32(), get_rand32()};
        end
    endfunction

    // Task: Run Constrained-Random AXI Test Sequence
    task automatic run_random_sequence(input integer num_iterations);
        axi_seq_item_t item;
        bit [1:0]      bresp;
        bit [63:0]     rdata;
        bit [1:0]      rresp;
        bit            match;
        integer        i;
        bit [39:0]     target_addr;
        bit [63:0]     target_data;
        bit [7:0]      target_strb;
        begin
            $display("\n[UVM ENV] Starting Constrained-Random Stimulus Run (%0d iterations)...", num_iterations);

            for (i = 0; i < num_iterations; i = i + 1) begin
                // Pick target aperture: DDR4 RAM (0x8000_0000) or SRAM (0x0000_0000)
                if (get_rand32() % 2 == 0)
                    target_addr = APERTURE_DDR4_BASE + ((get_rand32() % 128) << 3);
                else
                    target_addr = APERTURE_L2_BASE + ((get_rand32() % 128) << 3);

                target_data = get_rand64();
                target_strb = 8'hFF;

                // Step 1: Write item
                item.addr      = target_addr;
                item.data      = target_data;
                item.strb      = target_strb;
                item.size      = 3'b011; // 8 bytes
                item.burst     = 2'b01;  // INCR
                item.id        = i[3:0];
                item.is_write  = 1'b1;

                u_driver.drive_write(item, bresp);
                u_scoreboard.write_expected(target_addr, target_data, target_strb);

                // Step 2: Read item back
                item.is_write = 1'b0;
                u_driver.drive_read(item, rdata, rresp);
                u_scoreboard.check_read(target_addr, rdata, match);

                if ((i + 1) % 50 == 0) begin
                    $display("[UVM ENV] Progress: %0d / %0d transactions completed cleanly", i + 1, num_iterations);
                end
            end

            $display("[UVM ENV] Completed all %0d transactions successfully.", num_iterations);
        end
    endtask

    task report_all();
        begin
            u_monitor.report_telemetry();
            u_scoreboard.report_summary();
        end
    endtask

endmodule
