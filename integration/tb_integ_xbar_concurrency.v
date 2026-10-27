// SPDX-License-Identifier: Apache-2.0
// SMVDU TITAN-X — Integration Test: Crossbar Multi-Master Concurrency
// Three AXI masters hammer two slaves simultaneously (same-slave contention
// included). Every location is verified against a writer-indexed expected
// function afterwards — crosstalk, lost beats, or hangs all fail loudly.
// This is the scenario the Iteration-3 self-clearing-grant crossbar wedged on.
`timescale 1ns/1ps

`include "tb_bfms.vh"

module tb_integ_xbar_concurrency;

    `include "tb_macros.vh"

    reg clk;
    reg rst_n;
    `TB_HARNESS(2_000_000)

    `TB_SCOREBOARD

    localparam AW = 40, DW = 64, IDW = 4, NM = 3, NS = 2;

    // ---------------- master-side flattened buses ----------------
    wire [NM-1:0]        m_awvalid, m_awready, m_wvalid, m_wready, m_wlast;
    wire [NM-1:0]        m_bvalid, m_arvalid, m_arready;
    wire [NM-1:0]        m_rvalid, m_rlast;
    wire [(NM*AW)-1:0]   m_awaddr, m_araddr;
    wire [(NM*DW)-1:0]   m_wdata, m_rdata;
    wire [(NM*(DW/8))-1:0] m_wstrb;
    wire [(NM*2)-1:0]    m_bresp, m_rresp;
    wire [(NM*IDW)-1:0]  m_awid, m_bid, m_arid, m_rid;
    // True master-side readiness (the BFM drives these) fed back into the
    // crossbar — tying the fabric's ready inputs to 1 would let owner-FIFO
    // entries pop even when the real master wasn't listening.
    wire [NM-1:0]        m_bready_c, m_rready_c;

    // ---------------- slave-side flattened buses ----------------
    wire [NS-1:0]        s_awvalid, s_awready, s_wvalid, s_wready, s_wlast;
    wire [NS-1:0]        s_bvalid, s_bready, s_arvalid, s_arready;
    wire [NS-1:0]        s_rvalid, s_rready, s_rlast;
    wire [(NS*AW)-1:0]   s_awaddr, s_araddr;
    wire [(NS*DW)-1:0]   s_wdata, s_rdata;
    wire [(NS*(DW/8))-1:0] s_wstrb;
    wire [(NS*2)-1:0]    s_bresp, s_rresp;
    wire [(NS*IDW)-1:0]  s_awid, s_bid, s_arid, s_rid;

    axi4_crossbar #(.NM(NM), .NS(NS), .AW(AW), .DW(DW), .IDW(IDW)) u_xbar (
        .clk(clk), .rst_n(rst_n),
        .m_awvalid(m_awvalid), .m_awready(m_awready), .m_awaddr(m_awaddr),
        .m_awid(m_awid),
        .m_wvalid(m_wvalid), .m_wready(m_wready), .m_wdata(m_wdata),
        .m_wstrb(m_wstrb), .m_wlast(m_wlast),
        .m_bvalid(m_bvalid), .m_bready(m_bready_c), .m_bresp(m_bresp),
        .m_bid(m_bid),
        .m_arvalid(m_arvalid), .m_arready(m_arready), .m_araddr(m_araddr),
        .m_arid(m_arid),
        .m_rvalid(m_rvalid), .m_rready(m_rready_c), .m_rdata(m_rdata),
        .m_rresp(m_rresp), .m_rlast(m_rlast), .m_rid(m_rid),
        .s_awvalid(s_awvalid), .s_awready(s_awready), .s_awaddr(s_awaddr),
        .s_awid(s_awid),
        .s_wvalid(s_wvalid), .s_wready(s_wready), .s_wdata(s_wdata),
        .s_wstrb(s_wstrb), .s_wlast(s_wlast),
        .s_bvalid(s_bvalid), .s_bready(s_bready), .s_bresp(s_bresp),
        .s_bid(s_bid),
        .s_arvalid(s_arvalid), .s_arready(s_arready), .s_araddr(s_araddr),
        .s_arid(s_arid),
        .s_rvalid(s_rvalid), .s_rready(s_rready), .s_rdata(s_rdata),
        .s_rresp(s_rresp), .s_rlast(s_rlast), .s_rid(s_rid)
    );

    // ---------------- slaves ----------------
    // S0 ← 0x8000_xxxx region, S1 ← 0x4000_xxxx (matches crossbar decode).
    genvar sv;
    generate for (sv = 0; sv < NS; sv = sv + 1) begin : g_slv
        localparam [39:0] SLV_BASE = (sv == 0) ? 40'h00_8000_0000
                                               : 40'h00_4000_0000;
        axi_mem_slave_bfm #(.AW(AW), .DW(DW), .DEPTH(4096),
                            .BASE(SLV_BASE)) u_slv (
            .clk(clk), .rst_n(rst_n),
            .s_awvalid(s_awvalid[sv]), .s_awready(s_awready[sv]),
            .s_awaddr(s_awaddr[sv*AW +: AW]),
            .s_wvalid(s_wvalid[sv]), .s_wready(s_wready[sv]),
            .s_wdata(s_wdata[sv*DW +: DW]),
            .s_wstrb(s_wstrb[sv*(DW/8) +: (DW/8)]), .s_wlast(s_wlast[sv]),
            .s_bvalid(s_bvalid[sv]), .s_bready(s_bready[sv]),
            .s_bresp(s_bresp[sv*2 +: 2]),
            .s_arvalid(s_arvalid[sv]), .s_arready(s_arready[sv]),
            .s_araddr(s_araddr[sv*AW +: AW]),
            .s_rvalid(s_rvalid[sv]), .s_rready(s_rready[sv]),
            .s_rdata(s_rdata[sv*DW +: DW]),
            .s_rresp(s_rresp[sv*2 +: 2]), .s_rlast(s_rlast[sv])
        );
    end endgenerate

    // ---------------- masters ----------------
    genvar mv;
    generate for (mv = 0; mv < NM; mv = mv + 1) begin : g_mst
        axi_master_bfm #(.AW(AW), .DW(DW), .IDW(IDW)) u_m (
            .clk(clk), .rst_n(rst_n),
            .m_awvalid(m_awvalid[mv]), .m_awready(m_awready[mv]),
            .m_awaddr(m_awaddr[mv*AW +: AW]), .m_awid(),
            .m_wvalid(m_wvalid[mv]), .m_wready(m_wready[mv]),
            .m_wdata(m_wdata[mv*DW +: DW]),
            .m_wstrb(m_wstrb[mv*(DW/8) +: (DW/8)]), .m_wlast(m_wlast[mv]),
            .m_bvalid(m_bvalid[mv]), .m_bready(m_bready_c[mv]),
            .m_bresp(m_bresp[mv*2 +: 2]), .m_bid(),
            .m_arvalid(m_arvalid[mv]), .m_arready(m_arready[mv]),
            .m_araddr(m_araddr[mv*AW +: AW]), .m_arid(),
            .m_rvalid(m_rvalid[mv]), .m_rready(m_rready_c[mv]),
            .m_rdata(m_rdata[mv*DW +: DW]),
            .m_rresp(m_rresp[mv*2 +: 2]), .m_rlast(m_rlast[mv]), .m_rid()
        );
    end endgenerate

    // ---------------- traffic & scoreboard ----------------
    localparam integer NLOC = 12;

    function [63:0] exp_data(input [1:0] m, input integer idx);
        exp_data = {60'h0, m} ^ (64'hA5A5_1234_5678_9ABC +
                                  idx * 64'h0100_0000_0000_0001);
    endfunction

    // AUTOMATIC: these run concurrently from three fork branches; static
    // tasks share one activation record, and overlapping calls clobbered
    // each other's address/data arguments — whole transfers vanished while
    // still reporting OKAY (the original "lost write" mystery).
    task automatic m_write(input integer u, input [39:0] a, input [63:0] d);
        reg [1:0] r;
        begin
            if (u == 0)      g_mst[0].u_m.axi_write(a, d, r);
            else if (u == 1) g_mst[1].u_m.axi_write(a, d, r);
            else             g_mst[2].u_m.axi_write(a, d, r);
            tb_checks = tb_checks + 1;
            if (r !== 2'b00) begin
                tb_errors = tb_errors + 1;
                $display("[FAIL] m%0d write @%h resp=%b", u, a, r);
            end
        end
    endtask

    task automatic m_read_expect(input integer u, input [39:0] a, input [63:0] e);
        reg [1:0] r;
        reg [63:0] d;
        begin
            if (u == 0)      g_mst[0].u_m.axi_read(a, d, r);
            else if (u == 1) g_mst[1].u_m.axi_read(a, d, r);
            else             g_mst[2].u_m.axi_read(a, d, r);
            `EXPECT_EQ(r, 2'b00, "concurrent read resp OKAY")
            `EXPECT_KNOWN(d, 64, "concurrent readback known")
            `EXPECT_EQ(d, e, "concurrent readback value")
        end
    endtask

    integer k0, k1, k2, v;

    // ---------------- forensics ----------------
`ifdef TB_XBAR_TRACE
    always @(posedge clk) begin
        if ($time >= 100 && $time <= 2900) begin
            if (u_xbar.aw_hs[0]) $display("[XT] %0t S0.AW m=%0d a=%h",
                $time, u_xbar.aw_sel[0], s_awaddr[0*AW +: AW]);
            if (u_xbar.wl_hs[0]) $display("[XT] %0t S0.WL m=%0d d=%h",
                $time, u_xbar.w_sel[0], s_wdata[0*DW +: DW]);
            if (u_xbar.aw_hs[1]) $display("[XT] %0t S1.AW m=%0d a=%h",
                $time, u_xbar.aw_sel[1], s_awaddr[1*AW +: AW]);
            if (u_xbar.wl_hs[1]) $display("[XT] %0t S1.WL m=%0d d=%h",
                $time, u_xbar.w_sel[1], s_wdata[1*DW +: DW]);
            if (s_bvalid[0] && s_bready[0]) $display("[XT] %0t S0.B", $time);
            if (s_bvalid[1] && s_bready[1]) $display("[XT] %0t S1.B", $time);
            $display("[XT] %0t bv=%b%b%b br=%b%b%b bc0=%0d bo0=%0d",
                     $time,
                     m_bvalid[2], m_bvalid[1], m_bvalid[0],
                     g_mst[2].u_m.m_bready, g_mst[1].u_m.m_bready,
                     g_mst[0].u_m.m_bready,
                     u_xbar.b_cnt[0], u_xbar.b_own[0][u_xbar.b_rp[0]]);
        end
    end
`endif

    // Ground truth: scan the BFM arrays directly and list every cell that
    // doesn't hold its writer-indexed expected value.
    integer qz;
    reg [63:0] gotz, expz;
    task audit_mem;
        begin
            for (qz = 0; qz < NLOC; qz = qz + 1) begin
                expz = exp_data(2'd0, qz); gotz = g_slv[0].u_slv.mem[32+qz];
                if (gotz !== expz)
                    $display("[AUDIT] s0 r1 k=%0d got=%h exp=%h", qz, gotz, expz);
                expz = exp_data(2'd1, qz); gotz = g_slv[0].u_slv.mem[64+qz];
                if (gotz !== expz)
                    $display("[AUDIT] s0 r2 k=%0d got=%h exp=%h", qz, gotz, expz);
                expz = exp_data(2'd2, qz); gotz = g_slv[1].u_slv.mem[32+qz];
                if (gotz !== expz)
                    $display("[AUDIT] s1 r1 k=%0d got=%h exp=%h", qz, gotz, expz);
            end
            if (g_slv[0].u_slv.mem[96] !== 64'hDEAD_D00D_DEAD_D00D)
                $display("[AUDIT] s0 xtra got=%h", g_slv[0].u_slv.mem[96]);
        end
    endtask

    initial begin
        $dumpfile("tb_integ_xbar_concurrency.vcd");
        $dumpvars(0, tb_integ_xbar_concurrency);

        repeat (10) @(posedge clk);

        // Phase A: three writers, three streams in parallel — masters 0,1
        // contend on slave 0 while master 2 works slave 1 alone.
        fork
            begin : stream0
                for (k0 = 0; k0 < NLOC; k0 = k0 + 1) begin
                    m_write(0, 40'h00_8000_0100 + k0 * 8, exp_data(2'd0, k0));
                    @(posedge clk);
                end
            end
            begin : stream1
                for (k1 = 0; k1 < NLOC; k1 = k1 + 1) begin
                    m_write(1, 40'h00_8000_0200 + k1 * 8, exp_data(2'd1, k1));
                    @(posedge clk);
                end
            end
            begin : stream2
                for (k2 = 0; k2 < NLOC; k2 = k2 + 1) begin
                    m_write(2, 40'h00_4000_0100 + k2 * 8, exp_data(2'd2, k2));
                    @(posedge clk);
                end
            end
        join
        $display("[INFO] phase A (parallel writes) complete");

        // Phase B: verify every location through a DIFFERENT master than
        // wrote it — catches routing/crosstalk errors, not just lost data.
        for (v = 0; v < NLOC; v = v + 1) begin
            m_read_expect(1, 40'h00_8000_0100 + v * 8, exp_data(2'd0, v));
            m_read_expect(0, 40'h00_8000_0200 + v * 8, exp_data(2'd1, v));
            m_read_expect(2, 40'h00_4000_0100 + v * 8, exp_data(2'd2, v));
        end
        $display("[INFO] phase B (cross-master verification) complete");

        // Phase C: simultaneous read+write+read mixing both slaves
        fork
            m_write(0, 40'h00_8000_0300, 64'hDEAD_D00D_DEAD_D00D);
            m_read_expect(1, 40'h00_8000_0100, exp_data(2'd0, 0));
            m_read_expect(2, 40'h00_4000_0100, exp_data(2'd2, 0));
        join
        m_read_expect(1, 40'h00_8000_0300, 64'hDEAD_D00D_DEAD_D00D);

        audit_mem;
        `TB_REPORT("XBAR_CONC")
    end

endmodule
