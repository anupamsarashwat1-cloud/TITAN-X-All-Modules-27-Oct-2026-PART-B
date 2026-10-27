// SPDX-License-Identifier: Apache-2.0
// SMVDU TITAN-X AXI4 TLM BFM Driver
`timescale 1ns/1ps

module axi_driver (
    input  wire        clk,
    input  wire        rst_n,

    // AXI4 Master Interface
    output reg         m_awvalid,
    input  wire        m_awready,
    output reg  [39:0] m_awaddr,
    output reg  [3:0]  m_awid,
    output reg  [7:0]  m_awlen,
    output reg  [2:0]  m_awsize,
    output reg  [1:0]  m_awburst,

    output reg         m_wvalid,
    input  wire        m_wready,
    output reg  [63:0] m_wdata,
    output reg  [7:0]  m_wstrb,
    output reg         m_wlast,

    input  wire        m_bvalid,
    output reg         m_bready,
    input  wire [1:0]  m_bresp,
    input  wire [3:0]  m_bid,

    output reg         m_arvalid,
    input  wire        m_arready,
    output reg  [39:0] m_araddr,
    output reg  [3:0]  m_arid,
    output reg  [7:0]  m_arlen,
    output reg  [2:0]  m_arsize,
    output reg  [1:0]  m_arburst,

    input  wire        m_rvalid,
    output reg         m_rready,
    input  wire [63:0] m_rdata,
    input  wire [1:0]  m_rresp,
    input  wire        m_rlast,
    input  wire [3:0]  m_rid
);

    import uvm_types_pkg::*;

    initial begin
        m_awvalid = 1'b0;
        m_awaddr  = 40'h0;
        m_awid    = 4'h0;
        m_awlen   = 8'h0;
        m_awsize  = 3'b011; // 8 bytes
        m_awburst = 2'b01;  // INCR
        m_wvalid  = 1'b0;
        m_wdata   = 64'h0;
        m_wstrb   = 8'h0;
        m_wlast   = 1'b0;
        m_bready  = 1'b1;

        m_arvalid = 1'b0;
        m_araddr  = 40'h0;
        m_arid    = 4'h0;
        m_arlen   = 8'h0;
        m_arsize  = 3'b011;
        m_arburst = 2'b01;
        m_rready  = 1'b1;
    end

    // Task: Drive AXI4 Write Transaction
    task automatic drive_write(
        input  axi_seq_item_t item,
        output bit [1:0]      bresp_out
    );
        begin
            @(posedge clk);
            while (!rst_n) @(posedge clk);

            // Step 1: Assert AW Channel
            m_awvalid <= 1'b1;
            m_awaddr  <= item.addr;
            m_awid    <= item.id;
            m_awlen   <= 8'h0;
            m_awsize  <= item.size;
            m_awburst <= item.burst;

            while (!m_awready) @(posedge clk);
            m_awvalid <= 1'b0;

            // Step 2: Assert W Channel
            m_wvalid  <= 1'b1;
            m_wdata   <= item.data;
            m_wstrb   <= item.strb;
            m_wlast   <= 1'b1;

            while (!m_wready) @(posedge clk);
            m_wvalid <= 1'b0;
            m_wlast  <= 1'b0;

            // Step 3: Wait for B Response
            while (!m_bvalid) @(posedge clk);
            bresp_out = m_bresp;
            @(posedge clk);
        end
    endtask

    // Task: Drive AXI4 Read Transaction
    task automatic drive_read(
        input  axi_seq_item_t item,
        output bit [63:0]     rdata_out,
        output bit [1:0]      rresp_out
    );
        begin
            @(posedge clk);
            while (!rst_n) @(posedge clk);

            // Assert AR Channel
            m_arvalid <= 1'b1;
            m_araddr  <= item.addr;
            m_arid    <= item.id;
            m_arlen   <= 8'h0;
            m_arsize  <= item.size;
            m_arburst <= item.burst;

            while (!m_arready) @(posedge clk);
            m_arvalid <= 1'b0;

            // Wait for R Channel Response
            while (!m_rvalid) @(posedge clk);
            rdata_out = m_rdata;
            rresp_out = m_rresp;
            @(posedge clk);
        end
    endtask

endmodule
