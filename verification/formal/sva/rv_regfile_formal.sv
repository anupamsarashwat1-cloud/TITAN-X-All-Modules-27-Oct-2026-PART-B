`timescale 1ns/1ps

module rv_regfile_formal (
    input  wire        clk,
    input  wire        rst_n,
    input  wire [4:0]  rd_addr1,
    output wire [63:0] rd_data1,
    input  wire [4:0]  rd_addr2,
    output wire [63:0] rd_data2,
    input  wire        wr_en,
    input  wire [4:0]  wr_addr,
    input  wire [63:0] wr_data
);

    // DUT Instantiation
    rv_regfile dut (
        .clk      (clk),
        .rst_n    (rst_n),
        .rd_addr1 (rd_addr1),
        .rd_data1 (rd_data1),
        .rd_addr2 (rd_addr2),
        .rd_data2 (rd_data2),
        .wr_en    (wr_en),
        .wr_addr  (wr_addr),
        .wr_data  (wr_data)
    );

`ifdef FORMAL
    reg [2:0] rst_cnt = 0;
    always @(posedge clk) begin
        if (rst_cnt < 3)
            rst_cnt <= rst_cnt + 1;
    end

    // Force deterministic reset sequence in BMC: cycles 0-1 reset active, cycle 2+ operational
    always @* begin
        if (rst_cnt < 2)
            assume(!rst_n);
        else
            assume(rst_n);
    end

    // SVA Assertions
    always @(posedge clk) begin
        if (rst_cnt >= 2 && rst_n) begin
            // Lemma 1: Port 1 reading x0 must always return 0 (architectural zero)
            if (rd_addr1 == 5'h0)
                assert(rd_data1 == 64'h0);

            // Lemma 2: Port 2 reading x0 must always return 0 (architectural zero)
            if (rd_addr2 == 5'h0)
                assert(rd_data2 == 64'h0);

            // Lemma 3: Write-before-read bypass correctness (Port 1)
            if (wr_en && (wr_addr != 5'h0) && (wr_addr == rd_addr1))
                assert(rd_data1 == wr_data);

            // Lemma 4: Write-before-read bypass correctness (Port 2)
            if (wr_en && (wr_addr != 5'h0) && (wr_addr == rd_addr2))
                assert(rd_data2 == wr_data);
        end
    end
`endif

endmodule
