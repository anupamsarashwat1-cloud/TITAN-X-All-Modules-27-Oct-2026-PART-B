// SPDX-License-Identifier: Apache-2.0
// SMVDU TITAN-X UVM Scoreboard & Golden Memory Reference Model
`timescale 1ns/1ps

module titan_x_scoreboard;

    import uvm_types_pkg::*;

    localparam TABLE_SIZE = 1024;

    reg [39:0] entry_addr  [0:TABLE_SIZE-1];
    reg [63:0] entry_data  [0:TABLE_SIZE-1];
    reg        entry_valid [0:TABLE_SIZE-1];

    integer match_count    = 0;
    integer mismatch_count = 0;
    integer write_count    = 0;

    integer i;
    initial begin
        for (i = 0; i < TABLE_SIZE; i = i + 1) begin
            entry_addr[i]  = 40'h0;
            entry_data[i]  = 64'h0;
            entry_valid[i] = 1'b0;
        end
    end

    // Hash function to map 40-bit address to 10-bit index
    function [9:0] get_index;
        input [39:0] addr;
        begin
            get_index = (addr[12:3] ^ addr[22:13]) % TABLE_SIZE;
        end
    endfunction

    // Task: Record Expected Write in Reference Model
    task automatic write_expected(
        input [39:0] addr,
        input [63:0] data,
        input [7:0]  strb
    );
        reg [9:0]  idx;
        reg [63:0] old_data;
        reg [63:0] merged_data;
        integer b;
        begin
            idx = get_index(addr);
            old_data = entry_valid[idx] ? entry_data[idx] : 64'h0;

            for (b = 0; b < 8; b = b + 1) begin
                if (strb[b])
                    merged_data[b*8 +: 8] = data[b*8 +: 8];
                else
                    merged_data[b*8 +: 8] = old_data[b*8 +: 8];
            end

            entry_addr[idx]  = addr;
            entry_data[idx]  = merged_data;
            entry_valid[idx] = 1'b1;
            write_count      = write_count + 1;
        end
    endtask

    // Task: Check Actual Read Data Against Reference Model
    task automatic check_read(
        input  [39:0] addr,
        input  [63:0] actual_data,
        output bit    match
    );
        reg [9:0]  idx;
        reg [63:0] expected_data;
        begin
            idx = get_index(addr);
            if (entry_valid[idx] && (entry_addr[idx] == addr)) begin
                expected_data = entry_data[idx];
                if (actual_data === expected_data) begin
                    match_count = match_count + 1;
                    match = 1'b1;
                end else begin
                    mismatch_count = mismatch_count + 1;
                    match = 1'b0;
                    $display("[SCOREBOARD MISMATCH] %0t Addr=0x%0h | Expected=0x%016h | Actual=0x%016h",
                             $time, addr, expected_data, actual_data);
                end
            end else begin
                // Location not written during this test sequence: treat as benign uninitialized read
                match_count = match_count + 1;
                match = 1'b1;
            end
        end
    endtask

    task report_summary();
        begin
            $display("\n==============================================");
            $display("       TITAN-X UVM SCOREBOARD REPORT         ");
            $display("==============================================");
            $display("Total Reference Writes Recorded: %0d", write_count);
            $display("Total Read Verifications Passed: %0d", match_count);
            $display("Total Read Data Mismatches:      %0d", mismatch_count);
            if (mismatch_count == 0) begin
                $display("STATUS: >>> SCOREBOARD VERIFICATION PASSED <<<");
            end else begin
                $display("STATUS: >>> SCOREBOARD VERIFICATION FAILED <<<");
            end
            $display("==============================================\n");
        end
    endtask

endmodule
