`timescale 1ns/1ps

module axi4_crossbar_formal #(
    parameter NM  = 4,
    parameter NS  = 4,
    parameter AW  = 40,
    parameter DW  = 64,
    parameter IDW = 4
) (
    input  wire                  clk,
    input  wire                  rst_n,
    // Master Write Address
    input  wire [NM-1:0]         m_awvalid,
    output wire [NM-1:0]         m_awready,
    input  wire [(NM*AW)-1:0]    m_awaddr,
    input  wire [(NM*IDW)-1:0]   m_awid,
    // Master Write Data
    input  wire [NM-1:0]         m_wvalid,
    output wire [NM-1:0]         m_wready,
    input  wire [(NM*DW)-1:0]    m_wdata,
    input  wire [(NM*DW/8)-1:0]  m_wstrb,
    input  wire [NM-1:0]         m_wlast,
    // Master Write Response
    output wire [NM-1:0]         m_bvalid,
    input  wire [NM-1:0]         m_bready,
    output wire [(NM*2)-1:0]     m_bresp,
    output wire [(NM*IDW)-1:0]   m_bid,
    // Master Read Address
    input  wire [NM-1:0]         m_arvalid,
    output wire [NM-1:0]         m_arready,
    input  wire [(NM*AW)-1:0]    m_araddr,
    input  wire [(NM*IDW)-1:0]   m_arid,
    // Master Read Data
    output wire [NM-1:0]         m_rvalid,
    input  wire [NM-1:0]         m_rready,
    output wire [(NM*DW)-1:0]    m_rdata,
    output wire [(NM*2)-1:0]     m_rresp,
    output wire [NM-1:0]         m_rlast,
    output wire [(NM*IDW)-1:0]   m_rid,
    // Slave Ports
    output wire [NS-1:0]         s_awvalid,
    input  wire [NS-1:0]         s_awready,
    output wire [(NS*AW)-1:0]    s_awaddr,
    output wire [(NS*IDW)-1:0]   s_awid,
    output wire [NS-1:0]         s_wvalid,
    input  wire [NS-1:0]         s_wready,
    output wire [(NS*DW)-1:0]    s_wdata,
    output wire [(NS*DW/8)-1:0]  s_wstrb,
    output wire [NS-1:0]         s_wlast,
    input  wire [NS-1:0]         s_bvalid,
    output wire [NS-1:0]         s_bready,
    input  wire [(NS*2)-1:0]     s_bresp,
    input  wire [(NS*IDW)-1:0]   s_bid,
    output wire [NS-1:0]         s_arvalid,
    input  wire [NS-1:0]         s_arready,
    output wire [(NS*AW)-1:0]    s_araddr,
    output wire [(NS*IDW)-1:0]   s_arid,
    input  wire [NS-1:0]         s_rvalid,
    output wire [NS-1:0]         s_rready,
    input  wire [(NS*DW)-1:0]    s_rdata,
    input  wire [(NS*2)-1:0]     s_rresp,
    input  wire [NS-1:0]         s_rlast,
    input  wire [(NS*IDW)-1:0]   s_rid
);

    axi4_crossbar #(
        .NM(NM), .NS(NS), .AW(AW), .DW(DW), .IDW(IDW)
    ) dut (
        .clk(clk), .rst_n(rst_n),
        .m_awvalid(m_awvalid), .m_awready(m_awready), .m_awaddr(m_awaddr), .m_awid(m_awid),
        .m_wvalid(m_wvalid), .m_wready(m_wready), .m_wdata(m_wdata), .m_wstrb(m_wstrb), .m_wlast(m_wlast),
        .m_bvalid(m_bvalid), .m_bready(m_bready), .m_bresp(m_bresp), .m_bid(m_bid),
        .m_arvalid(m_arvalid), .m_arready(m_arready), .m_araddr(m_araddr), .m_arid(m_arid),
        .m_rvalid(m_rvalid), .m_rready(m_rready), .m_rdata(m_rdata), .m_rresp(m_rresp), .m_rlast(m_rlast), .m_rid(m_rid),
        .s_awvalid(s_awvalid), .s_awready(s_awready), .s_awaddr(s_awaddr), .s_awid(s_awid),
        .s_wvalid(s_wvalid), .s_wready(s_wready), .s_wdata(s_wdata), .s_wstrb(s_wstrb), .s_wlast(s_wlast),
        .s_bvalid(s_bvalid), .s_bready(s_bready), .s_bresp(s_bresp), .s_bid(s_bid),
        .s_arvalid(s_arvalid), .s_arready(s_arready), .s_araddr(s_araddr), .s_arid(s_arid),
        .s_rvalid(s_rvalid), .s_rready(s_rready), .s_rdata(s_rdata), .s_rresp(s_rresp), .s_rlast(s_rlast), .s_rid(s_rid)
    );

    function [3:0] decode_slave;
        input [AW-1:0] addr;
        begin
            if      (addr[39:31] == 9'h001)  decode_slave = 4'd0; // DDR
            else if (addr[39:28] == 12'h004) decode_slave = 4'd1; // APB bridge
            else if (addr[39:28] == 12'h001) decode_slave = 4'd2; // BootROM
            else if (addr[39:28] == 12'h000) decode_slave = 4'd3; // L2
            else                             decode_slave = 4'hF;
        end
    endfunction

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

    // SVA Invariants
    always @(posedge clk) begin
        if (rst_cnt >= 2 && rst_n) begin
            // Lemma 1: Quiescence - No request from masters means no slave grant
            if (m_awvalid == {NM{1'b0}})
                assert(s_awvalid == {NS{1'b0}});

            if (m_arvalid == {NM{1'b0}})
                assert(s_arvalid == {NS{1'b0}});

            if (m_wvalid == {NM{1'b0}})
                assert(s_wvalid == {NS{1'b0}});

            // Lemma 2: Response isolation - No slave response means master response must be internal DECERR (2'b11)
            for (integer m = 0; m < NM; m = m + 1) begin
                if (s_bvalid == {NS{1'b0}} && m_bvalid[m])
                    assert(m_bresp[m*2 +: 2] == 2'b11);

                if (s_rvalid == {NS{1'b0}} && m_rvalid[m])
                    assert(m_rresp[m*2 +: 2] == 2'b11);
            end

            // Lemma 3: Routing correctness - any routed slave address must decode to that slave index
            for (integer s = 0; s < NS; s = s + 1) begin
                if (s_awvalid[s]) begin
                    assert(decode_slave(s_awaddr[s*AW +: AW]) == s[3:0]);
                end
                if (s_arvalid[s]) begin
                    assert(decode_slave(s_araddr[s*AW +: AW]) == s[3:0]);
                end
            end
        end
    end
`endif

endmodule
