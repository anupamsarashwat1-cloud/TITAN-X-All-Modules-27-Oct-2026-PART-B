//      // verilator_coverage annotation
        // SPDX-License-Identifier: Apache-2.0
        // SMVDU-TITAN-X SoC — RV64I Writeback Stage
        `timescale 1ns/1ps
        module rv_writeback (
 002039     input  wire        clk,
%000001     input  wire        rst_n,
%000000     input  wire [63:0] result,
%000000     input  wire [4:0]  rd_in,
%000001     input  wire        reg_write,
 000664     input  wire        valid_in,
            // To register file in decode
%000000     output reg  [63:0] wb_data,
%000000     output reg  [4:0]  wb_rd,
 000609     output reg         wb_we,
            // Forwarding
%000000     output wire [63:0] fwd_wb_data,
%000000     output wire [4:0]  fwd_wb_rd,
 000609     output wire        fwd_wb_valid
        );
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             wb_data <= 64'h0;
 000020             wb_rd   <= 5'h0;
 000020             wb_we   <= 1'b0;
 001000         end else begin
 001000             wb_data <= result;
 001000             wb_rd   <= rd_in;
 001000             wb_we   <= reg_write && valid_in && (rd_in != 5'h0);
                end
            end
        
            assign fwd_wb_data  = wb_data;
            assign fwd_wb_rd    = wb_rd;
            assign fwd_wb_valid = wb_we;
        endmodule
        
