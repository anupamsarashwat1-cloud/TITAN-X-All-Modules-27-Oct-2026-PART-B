//      // verilator_coverage annotation
        // SPDX-License-Identifier: Apache-2.0
        // SMVDU-TITAN-X SoC — Machine-mode CSR file (Zicsr support, Phase 5 Step 5.4)
        //
        // Minimal-but-honest M-mode ISA CSR set:
        //   mstatus misa mie mtvec mscratch mepc mcause mtval mhartid
        //   mcycle/minstret (+ cycle/instret aliases)
        //
        // Contract with the pipeline (see rv_core_top wiring):
        //  - READ is combinational: csr_rdata follows csr_raddr in the same cycle
        //    execute samples it (distance-1 RAW between two CSR ops needs no extra
        //    forwarding because a younger op reaches EX at least one cycle after an
        //    older op's synchronous write lands).
        //  - WRITE is synchronous and single-issue: csr_we pulses only on the cycle
        //    the owning instruction leaves EX (gated upstream by !stall/!flush/
        //    !mul_div_stall), so flushed/stalled instructions never commit state.
        //  - Trap entry: core redirects PC to mtvec and captures mepc/mcause via
        //    trap_we; mret restores via mret_we (mstatus.MPIE->MIE shuffle here).
        //  - Interrupts arrive as mip_* inputs; mip_int raises when pending&enabled.
        //    Consumption (mtvec dispatch) is the core's job — this block only
        //    reports.
        `timescale 1ns/1ps
        `include "params.vh"
        `include "isa_pkg.vh"
        
        module rv_csr (
 002039     input  wire        clk,
%000001     input  wire        rst_n,
            // combinational read port (execute)
%000000     input  wire [11:0] csr_raddr,
%000000     output reg  [63:0] csr_rdata,
            // synchronous write port (execute, one pulse per retiring CSR op)
%000000     input  wire        csr_we,
%000000     input  wire [11:0] csr_waddr,
%000000     input  wire [63:0] csr_wdata,
            // trap entry / return (core-level control, single pulse each)
%000000     input  wire        trap_we,          // capture mepc/mcause/mstatus
%000002     input  wire [63:0] trap_pc,          // PC of the trapping instruction
%000000     input  wire [63:0] trap_cause,
%000000     input  wire        mret_we,          // mstatus MPIE/MIE shuffle
            // machine interrupt pending (from CLINT/PLIC glue; active high)
%000000     input  wire        mip_m_ext,
%000000     input  wire        mip_m_timer,
%000000     input  wire        mip_m_soft,
            // performance: one pulse per retired instruction
 000665     input  wire        retire_pulse,
            // status out for the core/trap logic
%000000     output wire [63:0] mtvec_out,
%000000     output wire [63:0] mepc_out,
%000000     output wire        irq_pending      // enabled machine interrupt waiting
        );
        
            // -------------------------------------------------------
            // Register state
            // -------------------------------------------------------
%000000     reg [63:0] mstatus_q;   // only MIE[3], MPIE[7], MPP[12:11] modeled
%000000     reg [63:0] misa_q;      // WARL: RV64IMC identity, reads back fixed
%000000     reg [63:0] mie_q;       // MSIE[3] MTIE[7] MEIE[11]
%000000     reg [63:0] mtvec_q;     // DIRECT: base only, mode bits [1:0] read 00
%000000     reg [63:0] mscratch_q;
%000000     reg [63:0] mepc_q;
%000000     reg [63:0] mcause_q;
%000000     reg [63:0] mtval_q;
%000000     reg [63:0] mcycle_q, minstret_q;
        
            localparam [63:0] MISA_RV64IMC =
                (64'd2 << 62) | (64'd1 << 12) | (64'd1 << 8) | (64'd1 << 2);
            localparam [63:0] MSTATUS_WR_MASK = (64'd1 << 3) | (64'd1 << 7) |
                                                (64'h3 << 11);
            localparam [63:0] MIE_WR_MASK     = (64'd1 << 3) | (64'd1 << 7) |
                                                (64'd1 << 11);
        
            // -------------------------------------------------------
            // Read decode (combinational). Unimplemented addresses read 0 — the
            // illegal-CSR trap decision lives in execute, not here, so this file
            // stays a pure register bank.
            // -------------------------------------------------------
%000001     always @(*) begin
%000001         case (csr_raddr)
%000000             12'h300:    csr_rdata = mstatus_q;
%000000             12'h301:    csr_rdata = misa_q;
%000000             12'h304:    csr_rdata = mie_q;
%000000             12'h305:    csr_rdata = mtvec_q;
%000000             12'h340:    csr_rdata = mscratch_q;
%000000             12'h341:    csr_rdata = mepc_q;
%000000             12'h342:    csr_rdata = mcause_q;
%000000             12'h343:    csr_rdata = mtval_q;
%000000             12'hF14:    csr_rdata = 64'd0;               // mhartid (single hart view in core 0)
%000000             12'hB00:    csr_rdata = mcycle_q;
%000000             12'hB02:    csr_rdata = minstret_q;
%000000             12'hC00:    csr_rdata = mcycle_q;            // cycle alias
%000000             12'hC02:    csr_rdata = minstret_q;          // instret alias
 001021             default:    csr_rdata = 64'h0;
                endcase
            end
        
            // -------------------------------------------------------
            // Writes (priority: trap > mret > explicit CSR op — a trap taken in
            // the same cycle as an mret's status shuffle would be a design error
            // upstream; ordering here just makes the outcome deterministic).
            // -------------------------------------------------------
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             mstatus_q  <= 64'h0;
 000020             misa_q     <= MISA_RV64IMC;
 000020             mie_q      <= 64'h0;
 000020             mtvec_q    <= 64'h0;
 000020             mscratch_q <= 64'h0;
 000020             mepc_q     <= 64'h0;
 000020             mcause_q   <= 64'h0;
 000020             mtval_q    <= 64'h0;
 000020             mcycle_q   <= 64'h0;
 000020             minstret_q <= 64'h0;
 001000         end else begin
                    // counters run regardless
 001000             mcycle_q   <= mcycle_q + 64'd1;
 000332             if (retire_pulse)
 000332                 minstret_q <= minstret_q + 64'd1;
        
%000000             if (trap_we) begin
%000000                 mepc_q     <= {trap_pc[63:2], 2'b00}; // spec: low two bits clear
%000000                 mcause_q   <= trap_cause;
%000000                 mstatus_q[7] <= mstatus_q[3];         // MPIE <- MIE
%000000                 mstatus_q[3] <= 1'b0;                 // enter handler MIE off
%000000                 mstatus_q[12:11] <= 2'b11;            // MPP <- machine
%000000             end else if (mret_we) begin
%000000                 mstatus_q[3]  <= mstatus_q[7];        // MIE <- MPIE
%000000                 mstatus_q[7]  <= 1'b1;
%000000                 mstatus_q[12:11] <= 2'b00;
 001000             end else if (csr_we) begin
%000000                 case (csr_waddr)
%000000                     12'h300: mstatus_q  <= (mstatus_q  & ~MSTATUS_WR_MASK)
%000000                                            | (csr_wdata & MSTATUS_WR_MASK);
%000000                     12'h301: misa_q     <= misa_q;     // WARL: unchanged
%000000                     12'h304: mie_q      <= csr_wdata & MIE_WR_MASK;
%000000                     12'h305: mtvec_q    <= {csr_wdata[63:2], 2'b00};
%000000                     12'h340: mscratch_q <= csr_wdata;
%000000                     12'h341: mepc_q     <= {csr_wdata[63:2], 2'b00};
%000000                     12'h342: mcause_q   <= csr_wdata;
%000000                     12'h343: mtval_q    <= csr_wdata;
                            // mhartid RO; counters WRITEME-free (spec: no trap on
                            // write attempt at M-level for these, effects none)
%000000                     default: ;                         // incl. counter writes: ignored
                        endcase
                    end
                end
            end
        
            assign mtvec_out = {mtvec_q[63:2], 2'b00};
            assign mepc_out  = {mepc_q[63:2], 2'b00};
        
%000000     wire irq_any =
                (mip_m_ext   & mie_q[11]) |
                (mip_m_timer & mie_q[7])  |
                (mip_m_soft  & mie_q[3]);
            assign irq_pending = irq_any && mstatus_q[3];   // MIE set
        
        endmodule
        
