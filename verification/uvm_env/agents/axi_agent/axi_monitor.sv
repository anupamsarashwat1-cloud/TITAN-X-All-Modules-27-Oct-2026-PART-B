// SPDX-License-Identifier: Apache-2.0
// SMVDU TITAN-X AXI4 TLM Protocol Monitor
`timescale 1ns/1ps

module axi_monitor (
    input wire        clk,
    input wire        rst_n,

    // Monitored AXI4 signals
    input wire        awvalid,
    input wire        awready,
    input wire [39:0] awaddr,
    input wire [3:0]  awid,

    input wire        wvalid,
    input wire        wready,
    input wire [63:0] wdata,
    input wire [7:0]  wstrb,
    input wire        wlast,

    input wire        bvalid,
    input wire        bready,
    input wire [1:0]  bresp,
    input wire [3:0]  bid,

    input wire        arvalid,
    input wire        arready,
    input wire [39:0] araddr,
    input wire [3:0]  arid,

    input wire        rvalid,
    input wire        rready,
    input wire [63:0] rdata,
    input wire [1:0]  rresp,
    input wire        rlast,
    input wire [3:0]  rid
);

    import uvm_types_pkg::*;

    // Telemetry counters
    integer write_tx_count = 0;
    integer read_tx_count  = 0;
    integer protocol_err_count = 0;

    // Protocol check registers for stability
    reg past_awvalid = 0;
    reg [39:0] past_awaddr = 0;
    reg past_arvalid = 0;
    reg [39:0] past_araddr = 0;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            write_tx_count     <= 0;
            read_tx_count      <= 0;
            protocol_err_count <= 0;
            past_awvalid       <= 0;
            past_arvalid       <= 0;
        end else begin
            // Track AW handshakes
            if (awvalid && awready) begin
                // Check address alignment for 64-bit transactions
                if (awaddr[2:0] != 3'b000) begin
                    $display("[AXI_MONITOR WARNING] %0t Unaligned AW address: 0x%0h", $time, awaddr);
                end
            end

            // Track write completion on B handshake
            if (bvalid && bready) begin
                write_tx_count <= write_tx_count + 1;
                if (bresp == 2'b10) begin // SLVERR
                    $display("[AXI_MONITOR] %0t Slave Error (SLVERR) on Write ID %0d", $time, bid);
                end else if (bresp == 2'b11) begin // DECERR
                    $display("[AXI_MONITOR] %0t Decode Error (DECERR) on Write ID %0d", $time, bid);
                end
            end

            // Track AR handshakes
            if (arvalid && arready) begin
                if (araddr[2:0] != 3'b000) begin
                    $display("[AXI_MONITOR WARNING] %0t Unaligned AR address: 0x%0h", $time, araddr);
                end
            end

            // Track read completion on R handshake
            if (rvalid && rready && rlast) begin
                read_tx_count <= read_tx_count + 1;
                if (rresp == 2'b10) begin
                    $display("[AXI_MONITOR] %0t Slave Error (SLVERR) on Read ID %0d", $time, rid);
                end else if (rresp == 2'b11) begin
                    $display("[AXI_MONITOR] %0t Decode Error (DECERR) on Read ID %0d", $time, rid);
                end
            end

            // Check AXI4 Rule: Valid cannot be deasserted without Ready
            if (past_awvalid && !awready && !awvalid) begin
                $display("[AXI_MONITOR ERROR] %0t AWVALID deasserted before AWREADY handshake!", $time);
                protocol_err_count <= protocol_err_count + 1;
            end
            if (past_arvalid && !arready && !arvalid) begin
                $display("[AXI_MONITOR ERROR] %0t ARVALID deasserted before ARREADY handshake!", $time);
                protocol_err_count <= protocol_err_count + 1;
            end

            past_awvalid <= awvalid && !awready;
            past_arvalid <= arvalid && !arready;
        end
    end

    task report_telemetry();
        begin
            $display("--- [AXI_MONITOR TELEMETRY REPORT] ---");
            $display("Total Write Transactions Observed: %0d", write_tx_count);
            $display("Total Read Transactions Observed:  %0d", read_tx_count);
            $display("Total Protocol Errors Detected:    %0d", protocol_err_count);
            $display("--------------------------------------");
        end
    endtask

endmodule
