`timescale 1ns/1ps
`include "params.vh"

module rv_fetch_formal (
    input  wire        clk,
    input  wire        rst_n,
    input  wire        stall,
    input  wire        flush,
    input  wire        branch_taken,
    input  wire [63:0] branch_target,
    output wire [63:0] imem_addr,
    output wire        imem_arvalid,
    input  wire        imem_arready,
    input  wire [31:0] imem_rdata,
    input  wire        imem_rvalid,
    output wire        imem_rready,
    input  wire [1:0]  imem_rresp,
    output wire [63:0] pc_out,
    output wire [31:0] instr_out,
    output wire        valid_out
);

    rv_fetch dut (
        .clk           (clk),
        .rst_n         (rst_n),
        .stall         (stall),
        .flush         (flush),
        .branch_taken  (branch_taken),
        .branch_target (branch_target),
        .imem_addr     (imem_addr),
        .imem_arvalid  (imem_arvalid),
        .imem_arready  (imem_arready),
        .imem_rdata    (imem_rdata),
        .imem_rvalid   (imem_rvalid),
        .imem_rready   (imem_rready),
        .imem_rresp    (imem_rresp),
        .pc_out        (pc_out),
        .instr_out     (instr_out),
        .valid_out     (valid_out)
    );

`ifdef FORMAL
    reg [2:0] rst_cnt = 0;
    always @(posedge clk) begin
        if (rst_cnt < 4)
            rst_cnt <= rst_cnt + 1;
    end

    always @* begin
        if (rst_cnt < 2)
            assume(!rst_n);
        else
            assume(rst_n);

        // Branch targets must be halfword/word aligned in RV64I
        assume(branch_target[0] == 1'b0);
    end

    // SVA Assertions
    always @(posedge clk) begin
        if (rst_cnt >= 2 && rst_n) begin
            // Lemma 1: Architectural fetch address must remain aligned
            assert(imem_addr[0] == 1'b0);

            // Lemma 2: Retired pc_out must be aligned when valid
            if (valid_out)
                assert(pc_out[0] == 1'b0);

            // Lemma 3: During reset, imem_arvalid is inactive
            if (!rst_n)
                assert(!imem_arvalid);
        end
    end
`endif

endmodule
