`timescale 1ns/1ps
`include "params.vh"

module l2_snoop_filter_formal (
    input  wire        clk,
    input  wire        rst_n,
    input  wire        req_valid,
    input  wire [39:0] req_addr,
    input  wire [1:0]  req_type,
    input  wire [1:0]  req_core,
    output wire [3:0]  snoop_valid,
    output wire [39:0] snoop_addr,
    output wire [1:0]  snoop_type,
    input  wire [3:0]  snoop_ack,
    input  wire [3:0]  snoop_data_valid,
    output wire        resp_valid,
    output wire        resp_hit,
    output wire        resp_dirty,
    output wire [1:0]  resp_owner
);

    l2_snoop_filter dut (
        .clk              (clk),
        .rst_n            (rst_n),
        .req_valid        (req_valid),
        .req_addr         (req_addr),
        .req_type         (req_type),
        .req_core         (req_core),
        .snoop_valid      (snoop_valid),
        .snoop_addr       (snoop_addr),
        .snoop_type       (snoop_type),
        .snoop_ack        (snoop_ack),
        .snoop_data_valid (snoop_data_valid),
        .resp_valid       (resp_valid),
        .resp_hit         (resp_hit),
        .resp_dirty       (resp_dirty),
        .resp_owner       (resp_owner)
    );

`ifdef FORMAL
    reg [2:0] rst_cnt = 0;
    always @(posedge clk) begin
        if (rst_cnt < 3)
            rst_cnt <= rst_cnt + 1;
    end

    always @* begin
        if (rst_cnt < 2)
            assume(!rst_n);
        else
            assume(rst_n);
    end

    // SVA Assertions
    always @(posedge clk) begin
        if (rst_cnt >= 2 && rst_n) begin
            // Lemma 1: Coherence Safety - A miss in directory can NEVER report dirty
            if (resp_valid && !resp_hit)
                assert(!resp_dirty);

            // Lemma 2: Coherence Safety - Dirty line must always be a valid directory hit
            if (resp_valid && resp_dirty)
                assert(resp_hit);

            // Lemma 3: Reset safety
            if (!rst_n) begin
                assert(snoop_valid == 4'h0);
                assert(!resp_valid);
            end
        end
    end
`endif

endmodule
