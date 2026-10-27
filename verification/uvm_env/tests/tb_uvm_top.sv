// SPDX-License-Identifier: Apache-2.0
// SMVDU TITAN-X UVM Top-Level Testbench
`timescale 1ns/1ps

module tb_uvm_top;

    reg clk;
    reg rst_n;

    // Clock generator: 100MHz (10ns period)
    always #5 clk = ~clk;

    // AXI4 Master Interface from UVM Environment
    wire        m_awvalid;
    wire        m_awready;
    wire [39:0] m_awaddr;
    wire [3:0]  m_awid;
    wire [7:0]  m_awlen;
    wire [2:0]  m_awsize;
    wire [1:0]  m_awburst;

    wire        m_wvalid;
    wire        m_wready;
    wire [63:0] m_wdata;
    wire [7:0]  m_wstrb;
    wire        m_wlast;

    wire        m_bvalid;
    wire        m_bready;
    wire [1:0]  m_bresp;
    wire [3:0]  m_bid;

    wire        m_arvalid;
    wire        m_arready;
    wire [39:0] m_araddr;
    wire [3:0]  m_arid;
    wire [7:0]  m_arlen;
    wire [2:0]  m_arsize;
    wire [1:0]  m_arburst;

    wire        m_rvalid;
    wire        m_rready;
    wire [63:0] m_rdata;
    wire [1:0]  m_rresp;
    wire        m_rlast;
    wire [3:0]  m_rid;

    // Crossbar Slave Ports
    localparam NM = 4;
    localparam NS = 4;
    localparam AW = 40;
    localparam DW = 64;
    localparam IDW = 4;

    wire [NM-1:0]        all_m_awvalid;
    wire [NM-1:0]        all_m_awready;
    wire [(NM*AW)-1:0]   all_m_awaddr;
    wire [(NM*IDW)-1:0]  all_m_awid;

    wire [NM-1:0]        all_m_wvalid;
    wire [NM-1:0]        all_m_wready;
    wire [(NM*DW)-1:0]   all_m_wdata;
    wire [(NM*DW/8)-1:0] all_m_wstrb;
    wire [NM-1:0]        all_m_wlast;

    wire [NM-1:0]        all_m_bvalid;
    wire [NM-1:0]        all_m_bready;
    wire [(NM*2)-1:0]    all_m_bresp;
    wire [(NM*IDW)-1:0]  all_m_bid;

    wire [NM-1:0]        all_m_arvalid;
    wire [NM-1:0]        all_m_arready;
    wire [(NM*AW)-1:0]   all_m_araddr;
    wire [(NM*IDW)-1:0]  all_m_arid;

    wire [NM-1:0]        all_m_rvalid;
    wire [NM-1:0]        all_m_rready;
    wire [(NM*DW)-1:0]   all_m_rdata;
    wire [(NM*2)-1:0]    all_m_rresp;
    wire [NM-1:0]        all_m_rlast;
    wire [(NM*IDW)-1:0]  all_m_rid;

    wire [NS-1:0]        s_awvalid;
    reg  [NS-1:0]        s_awready;
    wire [(NS*AW)-1:0]   s_awaddr;
    wire [(NS*IDW)-1:0]  s_awid;

    wire [NS-1:0]        s_wvalid;
    reg  [NS-1:0]        s_wready;
    wire [(NS*DW)-1:0]   s_wdata;
    wire [(NS*DW/8)-1:0] s_wstrb;
    wire [NS-1:0]        s_wlast;

    reg  [NS-1:0]        s_bvalid;
    wire [NS-1:0]        s_bready;
    reg  [(NS*2)-1:0]    s_bresp;
    reg  [(NS*IDW)-1:0]  s_bid;

    wire [NS-1:0]        s_arvalid;
    reg  [NS-1:0]        s_arready;
    wire [(NS*AW)-1:0]   s_araddr;
    wire [(NS*IDW)-1:0]  s_arid;

    reg  [NS-1:0]        s_rvalid;
    wire [NS-1:0]        s_rready;
    reg  [(NS*DW)-1:0]   s_rdata;
    reg  [(NS*2)-1:0]    s_rresp;
    reg  [NS-1:0]        s_rlast;
    reg  [(NS*IDW)-1:0]  s_rid;

    // Connect UVM Master to Port 0 of Crossbar
    assign all_m_awvalid = {3'b0, m_awvalid};
    assign m_awready     = all_m_awready[0];
    assign all_m_awaddr  = {120'h0, m_awaddr};
    assign all_m_awid    = {12'h0, m_awid};

    assign all_m_wvalid  = {3'b0, m_wvalid};
    assign m_wready      = all_m_wready[0];
    assign all_m_wdata   = {192'h0, m_wdata};
    assign all_m_wstrb   = {24'h0, m_wstrb};
    assign all_m_wlast   = {3'b0, m_wlast};

    assign m_bvalid      = all_m_bvalid[0];
    assign all_m_bready  = {3'b111, m_bready};
    assign m_bresp       = all_m_bresp[1:0];
    assign m_bid         = all_m_bid[3:0];

    assign all_m_arvalid = {3'b0, m_arvalid};
    assign m_arready     = all_m_arready[0];
    assign all_m_araddr  = {120'h0, m_araddr};
    assign all_m_arid    = {12'h0, m_arid};

    assign m_rvalid      = all_m_rvalid[0];
    assign all_m_rready  = {3'b111, m_rready};
    assign m_rdata       = all_m_rdata[63:0];
    assign m_rresp       = all_m_rresp[1:0];
    assign m_rlast       = all_m_rlast[0];
    assign m_rid         = all_m_rid[3:0];

    // Instantiate UVM Environment
    titan_x_env u_env (
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

    // Instantiate AXI4 Crossbar DUT
    axi4_crossbar #(
        .NM(NM), .NS(NS), .AW(AW), .DW(DW), .IDW(IDW)
    ) u_crossbar (
        .clk       (clk),
        .rst_n     (rst_n),
        .m_awvalid (all_m_awvalid),
        .m_awready (all_m_awready),
        .m_awaddr  (all_m_awaddr),
        .m_awid    (all_m_awid),
        .m_wvalid  (all_m_wvalid),
        .m_wready  (all_m_wready),
        .m_wdata   (all_m_wdata),
        .m_wstrb   (all_m_wstrb),
        .m_wlast   (all_m_wlast),
        .m_bvalid  (all_m_bvalid),
        .m_bready  (all_m_bready),
        .m_bresp   (all_m_bresp),
        .m_bid     (all_m_bid),
        .m_arvalid (all_m_arvalid),
        .m_arready (all_m_arready),
        .m_araddr  (all_m_araddr),
        .m_arid    (all_m_arid),
        .m_rvalid  (all_m_rvalid),
        .m_rready  (all_m_rready),
        .m_rdata   (all_m_rdata),
        .m_rresp   (all_m_rresp),
        .m_rlast   (all_m_rlast),
        .m_rid     (all_m_rid),
        .s_awvalid (s_awvalid),
        .s_awready (s_awready),
        .s_awaddr  (s_awaddr),
        .s_awid    (s_awid),
        .s_wvalid  (s_wvalid),
        .s_wready  (s_wready),
        .s_wdata   (s_wdata),
        .s_wstrb   (s_wstrb),
        .s_wlast   (s_wlast),
        .s_bvalid  (s_bvalid),
        .s_bready  (s_bready),
        .s_bresp   (s_bresp),
        .s_bid     (s_bid),
        .s_arvalid (s_arvalid),
        .s_arready (s_arready),
        .s_araddr  (s_araddr),
        .s_arid    (s_arid),
        .s_rvalid  (s_rvalid),
        .s_rready  (s_rready),
        .s_rdata   (s_rdata),
        .s_rresp   (s_rresp),
        .s_rlast   (s_rlast),
        .s_rid     (s_rid)
    );

    // Emulated Multi-Port Slave Memory Responders (DDR4 on S0, L2 on S3)
    reg [63:0] ram_s0 [0:1023];
    reg [63:0] ram_s3 [0:1023];
    reg [9:0]  s0_awaddr_reg;
    reg [3:0]  s0_awid_reg;
    reg        s0_aw_latch;
    reg [9:0]  s3_awaddr_reg;
    reg [3:0]  s3_awid_reg;
    reg        s3_aw_latch;
    integer s_idx;

    initial begin
        for (s_idx = 0; s_idx < 1024; s_idx = s_idx + 1) begin
            ram_s0[s_idx] = 64'h0;
            ram_s3[s_idx] = 64'h0;
        end
        s0_awaddr_reg = 10'h0;
        s0_awid_reg   = 4'h0;
        s0_aw_latch   = 1'b0;
        s3_awaddr_reg = 10'h0;
        s3_awid_reg   = 4'h0;
        s3_aw_latch   = 1'b0;
    end

    // Slave Response Logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            s_awready <= {NS{1'b1}};
            s_wready  <= {NS{1'b1}};
            s_arready <= {NS{1'b1}};
            s_bvalid  <= {NS{1'b0}};
            s_bresp   <= {(NS*2){1'b0}};
            s_bid     <= {(NS*IDW){1'b0}};
            s_rvalid  <= {NS{1'b0}};
            s_rdata   <= {(NS*DW){1'b0}};
            s_rresp   <= {(NS*2){1'b0}};
            s_rlast   <= {NS{1'b0}};
            s_rid     <= {(NS*IDW){1'b0}};
            s0_aw_latch <= 1'b0;
            s3_aw_latch <= 1'b0;
        end else begin
            // ---------------------------------------------
            // Slave 0 (DDR4 RAM at 0x8000_0000)
            // ---------------------------------------------
            // Latch AW
            if (s_awvalid[0] && s_awready[0]) begin
                s0_awaddr_reg <= s_awaddr[12:3];
                s0_awid_reg   <= s_awid[3:0];
                s0_aw_latch   <= 1'b1;
            end

            // Process W and emit B
            if (s_wvalid[0] && s_wready[0]) begin
                ram_s0[s0_aw_latch ? s0_awaddr_reg : s_awaddr[12:3]] <= s_wdata[63:0];
                s_bvalid[0]  <= 1'b1;
                s_bresp[1:0] <= 2'b00; // OKAY
                s_bid[3:0]   <= s0_aw_latch ? s0_awid_reg : s_awid[3:0];
                s0_aw_latch  <= 1'b0;
            end else if (s_bvalid[0] && s_bready[0]) begin
                s_bvalid[0]  <= 1'b0;
            end

            // Process AR and emit R
            if (s_arvalid[0] && s_arready[0]) begin
                s_rvalid[0]   <= 1'b1;
                s_rdata[63:0] <= ram_s0[s_araddr[12:3]];
                s_rresp[1:0]  <= 2'b00;
                s_rlast[0]    <= 1'b1;
                s_rid[3:0]    <= s_arid[3:0];
            end else if (s_rvalid[0] && s_rready[0]) begin
                s_rvalid[0]   <= 1'b0;
                s_rlast[0]    <= 1'b0;
            end

            // ---------------------------------------------
            // Slave 3 (L2 Cache at 0x0000_0000)
            // ---------------------------------------------
            if (s_awvalid[3] && s_awready[3]) begin
                s3_awaddr_reg <= s_awaddr[3*AW+3 +: 10];
                s3_awid_reg   <= s_awid[3*IDW +: 4];
                s3_aw_latch   <= 1'b1;
            end

            if (s_wvalid[3] && s_wready[3]) begin
                ram_s3[s3_aw_latch ? s3_awaddr_reg : s_awaddr[3*AW+3 +: 10]] <= s_wdata[3*DW +: 64];
                s_bvalid[3]  <= 1'b1;
                s_bresp[7:6] <= 2'b00;
                s_bid[15:12] <= s3_aw_latch ? s3_awid_reg : s_awid[3*IDW +: 4];
                s3_aw_latch  <= 1'b0;
            end else if (s_bvalid[3] && s_bready[3]) begin
                s_bvalid[3]  <= 1'b0;
            end

            if (s_arvalid[3] && s_arready[3]) begin
                s_rvalid[3]         <= 1'b1;
                s_rdata[3*DW +: 64] <= ram_s3[s_araddr[3*AW+3 +: 10]];
                s_rresp[7:6]        <= 2'b00;
                s_rlast[3]          <= 1'b1;
                s_rid[15:12]        <= s_arid[3*IDW +: 4];
            end else if (s_rvalid[3] && s_rready[3]) begin
                s_rvalid[3]         <= 1'b0;
                s_rlast[3]          <= 1'b0;
            end
        end
    end

    // Test Sequence Execution
    initial begin
        clk   = 1'b0;
        rst_n = 1'b0;

        $dumpfile("verification_waves/uvm_titan_x.vcd");
        $dumpvars(0, tb_uvm_top);

        $display("\n==============================================");
        $display("   TITAN-X UVM CONSTRAINED-RANDOM TESTBENCH   ");
        $display("==============================================");

        // Apply Reset
        #20;
        @(posedge clk);
        rst_n = 1'b1;
        $display("[UVM TEST] System Reset Deasserted at %0t", $time);

        // Run 100 Constrained-Random Transactions through UVM environment
        u_env.run_random_sequence(100);

        #50;
        u_env.report_all();

        if (u_env.u_scoreboard.mismatch_count == 0 &&
            u_env.u_monitor.protocol_err_count == 0) begin
            $display("==============================================");
            $display(">>> ALL UVM CONSTRAINED-RANDOM TESTS PASSED <<<");
            $display("==============================================\n");
            $finish(0);
        end else begin
            $display("==============================================");
            $display(">>> UVM CONSTRAINED-RANDOM TESTS FAILED <<<");
            $display("==============================================\n");
            $fatal(1);
        end
    end

endmodule
