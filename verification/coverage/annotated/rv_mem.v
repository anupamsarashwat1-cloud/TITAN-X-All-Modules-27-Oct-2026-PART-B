//      // verilator_coverage annotation
        // SPDX-License-Identifier: Apache-2.0
        // SMVDU-TITAN-X SoC — RV64I Memory Access Stage
        `timescale 1ns/1ps
        module rv_mem (
 002039     input  wire        clk,
%000001     input  wire        rst_n,
%000000     input  wire        flush,
            // From execute
%000000     input  wire [63:0] alu_result,
%000000     input  wire [63:0] rs2_data,
%000000     input  wire [4:0]  rd_in,
 000054     input  wire [2:0]  funct3,
%000000     input  wire [6:0]  opcode,
%000000     input  wire        mem_read,
%000000     input  wire        mem_write,
%000001     input  wire        reg_write,
 000664     input  wire        valid_in,
            // Data memory AXI4-Lite master
%000000     output reg         dmem_awvalid,
%000001     input  wire        dmem_awready,
%000000     output reg  [39:0] dmem_awaddr,
%000000     output reg         dmem_wvalid,
%000001     input  wire        dmem_wready,
%000000     output reg  [63:0] dmem_wdata,
%000000     output reg  [7:0]  dmem_wstrb,
%000000     input  wire        dmem_bvalid,
%000000     output reg         dmem_bready,
%000000     output reg         dmem_arvalid,
%000001     input  wire        dmem_arready,
%000000     output reg  [39:0] dmem_araddr,
%000000     input  wire        dmem_rvalid,
%000000     output reg         dmem_rready,
%000000     input  wire [63:0] dmem_rdata,
%000000     input  wire [1:0]  dmem_rresp,
            // To writeback
%000000     output reg  [63:0] result,
%000000     output reg  [4:0]  rd_out,
%000001     output reg         reg_write_out,
 000664     output reg         valid_out,
            // Forwarding output
%000000     output wire [63:0] fwd_mem_data,
%000000     output wire [4:0]  fwd_mem_rd,
 000664     output wire        fwd_mem_valid,
            // Stall request
%000000     output wire        mem_stall
        );
            localparam MS_IDLE  = 2'd0;
            localparam MS_ADDR  = 2'd1;
            localparam MS_DATA  = 2'd2;
            localparam MS_DONE  = 2'd3;
%000000     reg [1:0] mstate;
%000000     reg [63:0] load_data;
%000000     reg        mem_active;
        
            assign mem_stall  = mem_active && (mstate != MS_DONE);
            assign fwd_mem_data  = result;
            assign fwd_mem_rd    = rd_out;
            // Suppress forwarding while a memory transaction is in flight: 'result'
            // still holds the PREVIOUS instruction's value until the transfer
            // completes, and advertising it here would feed a dependent in execute
            // with stale data for the whole bus latency.
            assign fwd_mem_valid = valid_out && reg_write_out && !mem_active;
        
            // Load data sign-extension
%000000     function [63:0] extend_load;
                input [63:0] raw;
                input [2:0]  f3;
%000000         case (f3)
%000000             3'b000: extend_load = {{56{raw[7]}},  raw[7:0]};   // LB
%000000             3'b001: extend_load = {{48{raw[15]}}, raw[15:0]};  // LH
%000000             3'b010: extend_load = {{32{raw[31]}}, raw[31:0]};  // LW
%000000             3'b011: extend_load = raw;                          // LD
%000000             3'b100: extend_load = {56'h0, raw[7:0]};           // LBU
%000000             3'b101: extend_load = {48'h0, raw[15:0]};          // LHU
%000000             3'b110: extend_load = {32'h0, raw[31:0]};          // LWU
%000000             default:extend_load = raw;
                endcase
            endfunction
        
            // Write strobe from funct3
%000000     function [7:0] wstrb_from_f3;
                input [2:0] f3;
%000000         case (f3)
%000000             3'b000: wstrb_from_f3 = 8'b0000_0001; // SB
%000000             3'b001: wstrb_from_f3 = 8'b0000_0011; // SH
%000000             3'b010: wstrb_from_f3 = 8'b0000_1111; // SW
%000000             3'b011: wstrb_from_f3 = 8'b1111_1111; // SD
%000000             default:wstrb_from_f3 = 8'b1111_1111;
                endcase
            endfunction
        
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             dmem_awvalid  <= 1'b0;  dmem_awaddr  <= 40'h0;
 000020             dmem_wvalid   <= 1'b0;  dmem_wdata   <= 64'h0;  dmem_wstrb <= 8'h0;
 000020             dmem_bready   <= 1'b0;
 000020             dmem_arvalid  <= 1'b0;  dmem_araddr  <= 40'h0;
 000020             dmem_rready   <= 1'b0;
 000020             result        <= 64'h0;
 000020             rd_out        <= 5'h0;
 000020             reg_write_out <= 1'b0;
 000020             valid_out     <= 1'b0;
 000020             load_data     <= 64'h0;
 000020             mem_active    <= 1'b0;
 000020             mstate        <= MS_IDLE;
 001000         end else if (flush) begin
%000000             dmem_awvalid  <= 1'b0;  dmem_awaddr  <= 40'h0;
%000000             dmem_wvalid   <= 1'b0;  dmem_wdata   <= 64'h0;  dmem_wstrb <= 8'h0;
%000000             dmem_bready   <= 1'b0;
%000000             dmem_arvalid  <= 1'b0;  dmem_araddr  <= 40'h0;
%000000             dmem_rready   <= 1'b0;
%000000             result        <= 64'h0;
%000000             rd_out        <= 5'h0;
%000000             reg_write_out <= 1'b0;
%000000             valid_out     <= 1'b0;
%000000             load_data     <= 64'h0;
%000000             mem_active    <= 1'b0;
%000000             mstate        <= MS_IDLE;
 001000         end else begin
 001000             case (mstate)
 001000                 MS_IDLE: begin
%000000                     if (valid_in && mem_write) begin
%000000                         dmem_awvalid <= 1'b1;
%000000                         dmem_awaddr  <= alu_result[39:0];
%000000                         dmem_wvalid  <= 1'b1;
                                // Data rides the SAME lane as its strobe: the slave
                                // merges window byte j from bus lane j. Shifting the
                                // strobe without the data wrote the wrong slice of
                                // rs2 into the addressed lane.
%000000                         dmem_wdata   <= rs2_data
%000000                                         << {alu_result[2:0], 3'b000};
                                // Strobes ride the byte lane selected by address
                                // bits [2:0]. Lane-0-always made every non-offset-0
                                // sub-word store land up to 7 bytes early (an sb@+14
                                // rewrote byte 0 of the window instead).
%000000                         dmem_wstrb   <= wstrb_from_f3(funct3)
%000000                                         << alu_result[2:0];
%000000                         dmem_bready  <= 1'b1;
%000000                         mem_active   <= 1'b1;
%000000                         mstate       <= MS_DATA;
%000000                         rd_out        <= rd_in;
%000000                         reg_write_out <= reg_write;
%000000                         result        <= alu_result;
                                // Nothing retires while the transaction flies:
                                // holding the previous completer's valid here made
                                // WB latch a ghost {rd, stale result} pair one
                                // cycle before the real writeback.
%000000                         valid_out    <= 1'b0;
 001000                     end else if (valid_in && mem_read) begin
%000000                         dmem_arvalid <= 1'b1;
%000000                         dmem_araddr  <= alu_result[39:0];
%000000                         dmem_rready  <= 1'b1;
%000000                         mem_active   <= 1'b1;
%000000                         mstate       <= MS_DATA;
%000000                         rd_out        <= rd_in;
%000000                         reg_write_out <= reg_write;
%000000                         valid_out    <= 1'b0;   // same ghost-write guard
 001000                     end else begin
 001000                         result        <= alu_result;
 001000                         rd_out        <= rd_in;
 001000                         reg_write_out <= reg_write;
 001000                         valid_out     <= valid_in;
 001000                         mem_active    <= 1'b0;
                            end
                        end
%000000                 MS_DATA: begin
%000000                     if (dmem_awready) dmem_awvalid <= 1'b0;
%000000                     if (dmem_wready)  dmem_wvalid  <= 1'b0;
%000000                     if (dmem_arready) dmem_arvalid <= 1'b0;
%000000                     if (dmem_bvalid) begin
%000000                         dmem_bready  <= 1'b0;
%000000                         valid_out    <= 1'b1;
%000000                         mem_active   <= 1'b0;
%000000                         mstate       <= MS_IDLE;
                            end
%000000                     if (dmem_rvalid) begin
%000000                         load_data    <= dmem_rdata;
                                // Mirror of the store-side lane shift: the slave
                                // returns the whole doubleword, so the addressed
                                // lane sits at bits [8*araddr[2:0] +: size].
%000000                         result       <= extend_load(
%000000                             dmem_rdata >> {dmem_araddr[2:0], 3'b000},
%000000                             funct3);
%000000                         dmem_rready  <= 1'b0;
%000000                         valid_out    <= 1'b1;
%000000                         mem_active   <= 1'b0;
%000000                         mstate       <= MS_IDLE;
                            end
                        end
%000000                 default: mstate <= MS_IDLE;
                    endcase
                end
            end
        endmodule
        
