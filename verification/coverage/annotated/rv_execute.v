//      // verilator_coverage annotation
        // SPDX-License-Identifier: Apache-2.0
        // SMVDU-TITAN-X SoC — RV64GC Execute / ALU Stage
        // Iteration 3: Adds M-extension (MUL/DIV) + A-extension (Atomics)
        // Target: SCL 180nm, 125-200 MHz
        `timescale 1ns/1ps
        `include "params.vh"
        `include "isa_pkg.vh"
        
        module rv_execute (
 002039     input  wire        clk,
%000001     input  wire        rst_n,
%000000     input  wire        stall,
%000000     input  wire        flush,
            // From decode
%000002     input  wire [63:0] pc_in,
%000000     input  wire [63:0] rs1_data,
%000000     input  wire [63:0] rs2_data,
%000000     input  wire [63:0] imm,
%000000     input  wire [4:0]  rd_in,
%000000     input  wire [4:0]  rs1_addr,
%000000     input  wire [4:0]  rs2_addr,
 000055     input  wire [2:0]  funct3,
%000000     input  wire [6:0]  funct7,
%000000     input  wire [6:0]  opcode,
%000000     input  wire [4:0]  alu_op,
%000000     input  wire        mem_read,
%000000     input  wire        mem_write,
%000001     input  wire        reg_write,
%000000     input  wire        branch,
%000000     input  wire        jal,
%000000     input  wire        jalr,
%000000     input  wire        is_amo,      // A-extension: AMO instruction
%000000     input  wire [4:0]  amo_funct5,  // AMO operation code [31:27]
            // SYSTEM stage controls (Phase 5 Step 5.4)
%000000     input  wire        is_csr,
%000000     input  wire [1:0]  csr_op,      // 01 W, 10 S, 11 C
%000000     input  wire        is_ecall,
%000000     input  wire        is_ebreak,
%000000     input  wire        is_mret,
            // machine interrupt pending lines (CLINT/PLIC glue arrives later;
            // passed straight into the CSR file's mip inputs)
%000000     input  wire        irq_m_ext,
%000000     input  wire        irq_m_timer,
%000000     input  wire        irq_m_soft,
 000665     input  wire        valid_in,
            // Forwarding from MEM and WB
%000000     input  wire [63:0] fwd_mem_data,
 000664     input  wire        fwd_mem_valid,
%000000     input  wire [4:0]  fwd_mem_rd,
%000000     input  wire [63:0] fwd_wb_data,
 000609     input  wire        fwd_wb_valid,
%000000     input  wire [4:0]  fwd_wb_rd,
            // FPU result (registered from rv_fpu, arrives same cycle as ex stage)
%000000     input  wire [63:0] fpu_result,
%000000     input  wire        fpu_valid,
%000000     input  wire        fpu_done,
            // To MEM stage
%000000     output reg  [63:0] alu_result,
%000000     output reg  [63:0] rs2_out,
%000000     output reg  [4:0]  rd_out,
 000054     output reg  [2:0]  funct3_out,
%000000     output reg  [6:0]  opcode_out,
%000000     output reg         mem_read_out,
%000000     output reg         mem_write_out,
%000001     output reg         reg_write_out,
%000000     output reg         is_amo_out,
%000000     output reg  [4:0]  amo_funct5_out,
 000664     output reg         valid_out,
            // Stall to fetch/decode (MUL/DIV multi-cycle)
%000000     output wire        mul_div_stall,
            // Branch resolution (back to fetch)
%000000     output reg         branch_taken,
%000002     output reg  [63:0] branch_target,
            // LR/SC reservation (exported to memory stage)
%000000     output reg  [63:0] lr_addr,
%000000     output reg         lr_valid
        );
        
            // -------------------------------------------------------
            // Forwarding MUXes
            // -------------------------------------------------------
            // EX-stage pass-through: the instruction one slot ahead of the consumer
            // sits in our own EX->MEM pipeline registers — its result must forward
            // here or every distance-1 RAW hazard reads stale data. Loads are
            // excluded: during their memory access alu_result holds the ADDRESS,
            // not data; load-use is covered by mem_stall plus the MEM-stage
            // forwarding path instead.
 000664     wire        fwd_ex_valid = valid_out && reg_write_out && !mem_read_out;
%000000     wire [4:0]  fwd_ex_rd    = rd_out;
%000000     wire [63:0] fwd_ex_data  = alu_result;
        
%000000     wire [63:0] src1 = (fwd_ex_valid   && (fwd_ex_rd   == rs1_addr) && (rs1_addr != 5'h0)) ? fwd_ex_data  :
                               (fwd_mem_valid && (fwd_mem_rd == rs1_addr) && (rs1_addr != 5'h0)) ? fwd_mem_data :
                               (fwd_wb_valid  && (fwd_wb_rd  == rs1_addr) && (rs1_addr != 5'h0)) ? fwd_wb_data  :
                               rs1_data;
        
%000000     wire [63:0] src2_reg = (fwd_ex_valid   && (fwd_ex_rd   == rs2_addr) && (rs2_addr != 5'h0)) ? fwd_ex_data  :
                                   (fwd_mem_valid && (fwd_mem_rd == rs2_addr) && (rs2_addr != 5'h0)) ? fwd_mem_data :
                                   (fwd_wb_valid  && (fwd_wb_rd  == rs2_addr) && (rs2_addr != 5'h0)) ? fwd_wb_data  :
                                   rs2_data;
        
            // ALU source B: immediate for I/S/B/U/J, register for R-type
 000056     wire use_imm = (opcode == `OP_IMM)   || (opcode == `OP_IMM64) ||
                           (opcode == `OP_LOAD)  || (opcode == `OP_LOAD_FP) ||
                           (opcode == `OP_STORE) || (opcode == `OP_STORE_FP) ||
                           (opcode == `OP_BRANCH)||
                           (opcode == `OP_JAL)   || (opcode == `OP_JALR)  ||
                           (opcode == `OP_LUI)   || (opcode == `OP_AUIPC);
        
%000000     wire [63:0] src2 = use_imm ? imm : src2_reg;
        
            // RV64I *32 word-ops live ONLY in OP-IMM-32/OP-32: compute on the low
            // word, sign-extend the result to 64 bits, and take shift amounts from
            // [4:0]. Without the narrowing, ADDIW overflow kept garbage in the top
            // half (0x7FFFFFFF+1 yielded 0x0000000080000000, not sign-extended)
            // and W-shifts answered the 64-bit question.
%000000     wire is_wop = (opcode == `OP_IMM64) || (opcode == `OP_REG64);
%000000     wire [5:0] shamt = is_wop ? {1'b0, src2[4:0]} : src2[5:0];
        
            // -------------------------------------------------------
            // Integer ALU (combinational)
            // -------------------------------------------------------
%000000     reg [63:0] alu_res_comb;
%000001     always @(*) begin
%000001         case (alu_op)
 000525             `ALU_ADD:    alu_res_comb = src1 + src2;
 000084             `ALU_SUB:    alu_res_comb = src1 - src2;
%000000             `ALU_SLT:    alu_res_comb = ($signed(src1) < $signed(src2)) ? 64'd1 : 64'd0;
%000000             `ALU_SLTU:   alu_res_comb = (src1 < src2) ? 64'd1 : 64'd0;
 000084             `ALU_XOR:    alu_res_comb = src1 ^ src2;
 000084             `ALU_OR:     alu_res_comb = src1 | src2;
 000082             `ALU_AND:    alu_res_comb = src1 & src2;
                    // W-form right-shifts must shift the ISOLATED 32-bit operand:
                    // shifting the full 64-bit register slides dirty upper bits
                    // down into the result's low word before the post-hoc narrow,
                    // which answers a different question than SRLW/SRAW. Left
                    // shifts are immune (garbage exits upward past the narrow).
 000081             `ALU_SLL:    alu_res_comb = (is_wop ? {32'b0, src1[31:0]}
 000081                                                 : src1) << shamt;
 000081             `ALU_SRL:    alu_res_comb = (is_wop ? {32'b0, src1[31:0]}
 000081                                                 : src1) >> shamt;
%000000             `ALU_SRA:    alu_res_comb = $signed(is_wop
%000000                                                 ? {{32{src1[31]}}, src1[31:0]}
%000000                                                 : src1) >>> shamt;
%000000             `ALU_LUI:    alu_res_comb = src2;
%000000             `ALU_AUIPC:  alu_res_comb = pc_in + src2;
%000000             `ALU_COPY_B: alu_res_comb = src2;
                    // MUL/DIV: handled in mul_div unit; pass through to avoid latches
%000000             default:     alu_res_comb = src1 + src2;
                endcase
            end
        
            // -------------------------------------------------------
            // M-Extension multicycle engine (CPU-002/CPU-003 fix)
            //
            // Why the old scheme deadlocked: mul_div_stall = div_busy ||
            // (is_mul && valid_in) feeds the GLOBAL stall (rv_core_top), which
            // comes back into this module as `stall` — so decode froze holding
            // the SAME mul presented, valid_in never dropped, and the stall
            // held forever. Even one release cycle would have latched the
            // PREVIOUS product (stage-1 regs updated on the same edge).
            //
            // This scheme, contract by contract:
            //  - rv_core_top feeds us stall_ex (mem_stall||halt) WITHOUT our own
            //    mul_div_stall, so starting is decidable from stable inputs.
            //  - Operands and control are CAPTURED on the start edge; the engine
            //    runs to completion off the captured copies (immune to whatever
            //    sits frozen at the inputs while decode is stalled).
            //  - On completion the result lands in the EX->MEM registers via the
            //    mx_done branches below, and mx_fin latches for ONE drain cycle:
            //    decode is still presenting the finished M-op that cycle (it was
            //    stalled throughout), so mul_div_stall must DROP (letting decode
            //    advance) while the EX->MEM normal path stays suppressed — else
            //    the same instruction would restart or double-deliver.
            //  - Completion is serialized against a load/store on the bus
            //    (!stall in mx_done / MX_MUL exit / MX_DIV stepping): delivering
            //    into EX->MEM while rv_mem owns that beat for a load would
            //    clobber the load address.
            //  - A flush aborts a busy op. Division specials (x/0, signed
            //    overflow) bypass the 64-cycle loop entirely.
            // -------------------------------------------------------
%000000     wire is_mul = (alu_op == `ALU_MUL)  || (alu_op == `ALU_MULH) ||
                          (alu_op == `ALU_MULHSU)|| (alu_op == `ALU_MULHU);
%000000     wire is_div = (alu_op == `ALU_DIV)  || (alu_op == `ALU_DIVU) ||
                          (alu_op == `ALU_REM)  || (alu_op == `ALU_REMU);
%000000     wire is_mext = is_mul || is_div;
        
            localparam MX_IDLE = 2'd0, MX_MUL = 2'd1, MX_DIV = 2'd2;
%000000     reg [1:0]  mx_state;
%000000     reg [63:0] mx_a, mx_b;
%000000     reg [6:0]  mx_opcode_q;
%000000     reg [4:0]  mx_aluop_q, mx_rd_q;
%000000     reg [2:0]  mx_f3_q;
%000000     reg        mx_rw_q, mx_v_q;
%000000     reg        mx_fin;      // finished op still presented; drain-cycle latch
        
            // NOTE: `stall` here is stall_ex (memory/halt only) — see header note.
%000000     wire mx_raw_start = is_mext && valid_in && !stall && !flush && !mx_fin &&
                                (mx_state == MX_IDLE);
            assign mul_div_stall = (mx_state != MX_IDLE) || mx_raw_start;
        
            // Result-ready / result-delivered-this-edge qualifiers.
%000000     wire mx_ready = (mx_state == MX_MUL) || d_special || d_last;
%000000     wire mx_done  = mx_ready && !stall;
        
            // ---- start-edge operand prep ----
            // W forms operate on the SIGN-EXTENDED low words (captured below), so
            // e.g. DIVW sees exactly the word semantics. Overflow detection is
            // width-aware: sext32(INT32_MIN) is 64'hFFFF_FFFF_8000_0000, NOT the
            // 64-bit INT64_MIN pattern — a naive combined detector would also
            // swallow the legal 64-bit (-2^31)/(-1) = +2^31 and return garbage.
%000000     wire        mxw       = (opcode == `OP_REG64);
%000000     wire [63:0] eff_a     = mxw ? {{32{src1[31]}}, src1[31:0]} : src1;
%000000     wire [63:0] eff_b     = mxw ? {{32{src2[31]}}, src2[31:0]} : src2;
%000000     wire        signed_op = (alu_op == `ALU_DIV) || (alu_op == `ALU_REM);
%000000     wire        a_neg     = eff_a[63];
 000056     wire        b_zero    = (eff_b == 64'h0);
%000000     wire        b_m1      = (eff_b == 64'hFFFF_FFFF_FFFF_FFFF);
%000000     wire        ovf       = signed_op && !b_zero && b_m1 &&
                                    (mxw ? (eff_a[31:0] == 32'h8000_0000)
                                         : (eff_a == 64'h8000_0000_0000_0000));
        
            // ---- divider working regs (restoring radix-2 over |a|,|b|) ----
%000000     reg [63:0] d_rem, d_quot, d_x, d_y;
%000000     reg [5:0]  d_cnt;
%000000     reg        d_special, d_last, d_neg_q, d_neg_r;
%000000     reg [63:0] d_result_q;
        
%000000     wire [63:0] d_next_rem = {d_rem[62:0], d_x[63]};
%000001     wire        d_sub      = d_next_rem >= d_y;
        
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             mx_state <= MX_IDLE;
 000020             mx_a <= 64'h0;  mx_b <= 64'h0;
 000020             mx_opcode_q <= 7'h0; mx_aluop_q <= 5'h0; mx_rd_q <= 5'h0;
 000020             mx_f3_q <= 3'h0; mx_rw_q <= 1'b0; mx_v_q <= 1'b0;
 000020             mx_fin <= 1'b0;
 000020             d_rem <= 64'h0; d_quot <= 64'h0; d_x <= 64'h0; d_y <= 64'h0;
 000020             d_cnt <= 6'd0; d_special <= 1'b0; d_last <= 1'b0;
 000020             d_neg_q <= 1'b0; d_neg_r <= 1'b0; d_result_q <= 64'h0;
 001000         end else if (flush) begin
%000000             mx_state   <= MX_IDLE;
%000000             d_special  <= 1'b0;
%000000             d_last     <= 1'b0;
%000000             mx_fin     <= 1'b0;
 001000         end else begin
                    // One-shot: raise on the delivery edge, drop on the drain
                    // advance. Mutually exclusive conditions (mx_done implies
                    // mul_div_stall; the clear implies its absence).
%000000             if (mx_done)                              mx_fin <= 1'b1;
%000000             else if (!stall && !mul_div_stall)        mx_fin <= 1'b0;
        
 001000             case (mx_state)
 001000               MX_IDLE: if (mx_raw_start) begin
                          // W forms capture the sign-extended words, not the raw
                          // 64-bit registers: word divide/rem are NOT modular,
                          // unlike MULW whose low word survives full-width math.
%000000                   mx_a <= eff_a;  mx_b <= eff_b;
%000000                   mx_opcode_q <= opcode;  mx_aluop_q <= alu_op;
%000000                   mx_rd_q <= rd_in;  mx_f3_q <= funct3;
%000000                   mx_rw_q <= reg_write;  mx_v_q <= valid_in;
%000000                   if (is_div) begin
%000000                       d_cnt     <= 6'd0;
%000000                       d_special <= b_zero || ovf;
%000000                       d_last    <= 1'b0;
%000000                       d_neg_q   <= signed_op && !b_zero && (a_neg != eff_b[63]);
%000000                       d_neg_r   <= (alu_op == `ALU_REM) && a_neg && !b_zero;
%000000                       if (b_zero) begin
                                  // DIV/DIVW -> -1 ; DIVU/DIVUW -> 2^N-1 ;
                                  // REM/REMU (and W twins) -> dividend (sign
                                  // included, not abs). BOTH remainder ops must
                                  // take this arm — testing ALU_REM alone made
                                  // REMU x/0 return the all-ones quotient.
%000000                           d_result_q <= ((alu_op == `ALU_REM) ||
%000000                                          (alu_op == `ALU_REMU))
%000000                                         ? eff_a : 64'hFFFF_FFFF_FFFF_FFFF;
%000000                       end else if (ovf) begin
                                  // INT_MIN / -1 -> INT_MIN ; INT_MIN % -1 -> 0
%000000                           d_result_q <= (alu_op == `ALU_REM)
%000000                                         ? 64'h0 : eff_a;
%000000                       end else begin
%000000                           d_x <= (signed_op && a_neg) ? (~eff_a + 64'd1) : eff_a;
%000000                           d_y <= (signed_op && eff_b[63]) ? (~eff_b + 64'd1) : eff_b;
%000000                           d_rem  <= 64'h0;
%000000                           d_quot <= 64'h0;
                              end
%000000                       mx_state <= MX_DIV;
                          end else
%000000                       mx_state <= MX_MUL;
                      end
                      // Hold until the delivery edge: exiting early (e.g. under a
                      // simultaneous mem_stall) would lose the result.
%000000               MX_MUL: if (mx_done) mx_state <= MX_IDLE;
%000000               MX_DIV: if (!stall) begin
%000000                   if (d_special || d_last) begin
%000000                       d_special <= 1'b0;
%000000                       d_last    <= 1'b0;
%000000                       mx_state  <= MX_IDLE;
%000000                   end else begin
%000000                       d_x <= {d_x[62:0], 1'b0};
%000000                       if (d_sub) begin
%000000                           d_rem  <= d_next_rem - d_y;
%000000                           d_quot <= {d_quot[62:0], 1'b1};
%000000                       end else begin
%000000                           d_rem  <= d_next_rem;
%000000                           d_quot <= {d_quot[62:0], 1'b0};
                              end
%000000                       if (d_cnt == 6'd63) d_last <= 1'b1;
%000000                       else                d_cnt  <= d_cnt + 6'd1;
                          end
                      end
%000000               default: mx_state <= MX_IDLE;
                    endcase
                end
            end
        
            // ---- multiplier datapath (comb over captured operands) ----
%000000     wire signed [127:0] prod_ss = $signed(mx_a) * $signed(mx_b);
%000000     wire        [127:0] prod_su = $signed(mx_a) * $signed({1'b0, mx_b});
%000000     wire        [127:0] prod_uu = mx_a * mx_b;
%000000     reg         [63:0]  mul_r;
%000001     always @(*) begin
%000001         case (mx_aluop_q)
%000000             `ALU_MUL:    mul_r = prod_ss[63:0];
%000000             `ALU_MULH:   mul_r = prod_ss[127:64];
%000000             `ALU_MULHSU: mul_r = prod_su[127:64];
%000000             `ALU_MULHU:  mul_r = prod_uu[127:64];
 001021             default:     mul_r = prod_ss[63:0];
                endcase
            end
        
            // ---- divider final fixups ----
            // q = |a|//|b| sign-corrected (trunc toward zero), r = a - q*b takes
            // the dividend's sign — RISC-V semantics, matches the golden model.
%000000     wire [63:0] quot_raw = d_neg_q ? (~d_quot + 64'd1) : d_quot;
%000000     wire [63:0] rem_raw  = d_neg_r ? (~d_rem  + 64'd1) : d_rem;
%000000     reg  [63:0] div_r;
%000001     always @(*) begin
%000001         case (mx_aluop_q)
%000000             `ALU_DIV:    div_r = quot_raw;
%000000             `ALU_DIVU:   div_r = d_quot;
%000000             `ALU_REM:    div_r = rem_raw;
 001021             default:     div_r = d_rem;          // REMU
                endcase
            end
        
            // W-form results narrow to sext32 of the computed word.
%000000     wire        mxw_q    = (mx_opcode_q == `OP_REG64);
%000000     wire [63:0] mext_final =
                mx_ready
                    ? ((mx_state == MX_MUL)
                          ? (mxw_q ? {{32{prod_ss[31]}}, prod_ss[31:0]} : mul_r)
                       : d_special
                          ? (mxw_q ? {{32{d_result_q[31]}}, d_result_q[31:0]}
                                   : d_result_q)
                          : (mxw_q ? {{32{div_r[31]}}, div_r[31:0]} : div_r))
                    : 64'h0;
        
%000000     wire [63:0] mext_result = mext_final;
        
            // -------------------------------------------------------
            // Zicsr / privileged simples (Step 5.4)
            //
            // rv_csr is instantiated HERE (house style: regfile lives in decode).
            // Read is combinational (result mux below); writes and trap/mret
            // status shuffles pulse ONLY on the instruction's exit from EX — the
            // same edge its beat enters EX->MEM — so stalled, flushed, and
            // engine-held instructions never touch architectural state.
            // Distance-1 CSR RAW needs no forwarding: a younger CSR op reaches
            // EX at least one cycle after the older one's synchronous write.
            // -------------------------------------------------------
%000000     wire sys_present  = valid_in && (opcode == `OP_SYSTEM);
%000000     wire sys_illegal  = sys_present && !is_csr && !is_ecall &&
                                !is_ebreak && !is_mret;
        
 000665     wire ex_exit      = valid_in && !stall && !flush &&
                                !mul_div_stall && !mx_fin;
%000000     wire csr_commit   = ex_exit && is_csr;
%000000     wire mret_commit  = ex_exit && is_mret;
%000000     wire trap_commit  = ex_exit && (is_ecall || is_ebreak || sys_illegal ||
                                            csr_illegal || irq_take);
        
%000000     wire [11:0] csr_a = imm[11:0];
%000000     wire        csr_rmw = (csr_op == 2'b10) || (csr_op == 2'b11);
            // CSRRS/CSRRC with rs1=x0 read only — spec forbids side effects there.
            // Implemented-set decoder (must mirror rv_csr's read decode): access
            // to any other address raises illegal-instruction per the Zicsr spec.
%000000     wire csr_impl = (csr_a == 12'h300) || (csr_a == 12'h301) ||
                            (csr_a == 12'h304) || (csr_a == 12'h305) ||
                            (csr_a == 12'h340) || (csr_a == 12'h341) ||
                            (csr_a == 12'h342) || (csr_a == 12'h343) ||
                            (csr_a == 12'hF14) || (csr_a == 12'hB00) ||
                            (csr_a == 12'hB02) || (csr_a == 12'hC00) ||
                            (csr_a == 12'hC02);
%000000     wire csr_illegal = sys_present && is_csr && !csr_impl;
        
%000000     wire        csr_we_w = csr_commit && !csr_illegal &&
                                   !(csr_rmw && (rs1_addr == 5'h0));
%000000     wire [63:0] csr_wd   = (csr_op == 2'b01) ? src1 :
                                   (csr_op == 2'b10) ? (csr_old | src1) :
                                                       (csr_old & ~src1);
        
            // Interrupt selection (Step 5.6). irq_pend already folds in mie enable
            // and mstatus.MIE inside rv_csr. Priority external > software > timer
            // is our documented choice (spec leaves M-mode priority open). Causes
            // carry the interrupt bit (63) per privileged spec.
%000000     wire irq_sel_ext   = irq_pend && irq_m_ext;
%000000     wire irq_sel_soft  = irq_pend && !irq_m_ext && irq_m_soft;
%000000     wire irq_sel_timer = irq_pend && !irq_m_ext && !irq_m_soft &&
                                 irq_m_timer;
        
%000000     reg [63:0] trap_cause_w;
%000001     always @(*) begin
%000000         if (irq_sel_ext)    trap_cause_w = (64'd1 << 63) | 64'd11;
%000000         else if (irq_sel_soft) trap_cause_w = (64'd1 << 63) | 64'd3;
%000000         else if (irq_sel_timer) trap_cause_w = (64'd1 << 63) | 64'd7;
%000000         else if (sys_illegal || csr_illegal)
%000000                             trap_cause_w = 64'd2;    // illegal instruction
 003061         else if (is_ebreak) trap_cause_w = 64'd3;    // breakpoint
 003061         else                trap_cause_w = 64'd11;   // ecall from M-mode
            end
        
%000000     wire [63:0] csr_old, mtvec_q, mepc_q;
%000000     wire        irq_pend;
            rv_csr u_csr (
                .clk          (clk),
                .rst_n        (rst_n),
                .csr_raddr    (csr_a),
                .csr_rdata    (csr_old),
                .csr_we       (csr_we_w),
                .csr_waddr    (csr_a),
                .csr_wdata    (csr_wd),
                .trap_we      (trap_commit),
                .trap_pc      (pc_in),
                .trap_cause   (trap_cause_w),
                .mret_we      (mret_commit),
                .mip_m_ext    (irq_m_ext),
                .mip_m_timer  (irq_m_timer),
                .mip_m_soft   (irq_m_soft),
                .retire_pulse (ex_exit),
                .mtvec_out    (mtvec_q),
                .mepc_out     (mepc_q),
                .irq_pending  (irq_pend)          // consumed below (Step 5.6)
            );
        
            // -------------------------------------------------------
            // A-Extension: LR/SC Reservation
            // -------------------------------------------------------
            // LR: set reservation; SC: check reservation
            // AMO arithmetic operations handled in memory stage (read-modify-write)
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             lr_addr  <= 64'h0;
 000020             lr_valid <= 1'b0;
%000000         end else if (is_amo && valid_in && (amo_funct5 == `AMO_LR) && !stall) begin
%000000             lr_addr  <= src1;     // LR: address = rs1
%000000             lr_valid <= 1'b1;
 001000         end else if (is_amo && valid_in && (amo_funct5 == `AMO_SC) && !stall) begin
                    // SC clears reservation regardless of success/failure
%000000             lr_valid <= 1'b0;
                end
            end
        
            // -------------------------------------------------------
            // Branch Decision (combinational)
            // -------------------------------------------------------
%000000     wire trap_req_c = valid_in && !stall && !flush &&
                              !mul_div_stall && !mx_fin &&
                              (is_ecall || is_ebreak || sys_illegal || csr_illegal);
%000000     wire mret_req_c = valid_in && !stall && !flush &&
                              !mul_div_stall && !mx_fin && is_mret;
            // Preemption point: the beat leaving EX is redirected to mtvec instead
            // of retiring. Never preempted-beat: an mret (else a pending IRQ would
            // trap straight out of the restore) or an exception beat (exception
            // wins per spec ordering). Everything else — ALU, CSR, loads, stores,
            // even the beat after a multicycle op — is fair game; the killed beat
            // re-executes from its own PC after the handler's mret.
%000000     wire irq_take   = ex_exit &&
                              (irq_sel_ext || irq_sel_soft || irq_sel_timer) &&
                              !mret_req_c && !trap_req_c;
        
%000000     reg branch_comb;
%000001     always @(*) begin
%000001         branch_comb = 1'b0;
%000000         if (branch) begin
%000000             case (funct3)
%000000                 3'b000: branch_comb = (src1 == src2_reg);
%000000                 3'b001: branch_comb = (src1 != src2_reg);
%000000                 3'b100: branch_comb = ($signed(src1) < $signed(src2_reg));
%000000                 3'b101: branch_comb = ($signed(src1) >= $signed(src2_reg));
%000000                 3'b110: branch_comb = (src1 < src2_reg);
%000000                 3'b111: branch_comb = (src1 >= src2_reg);
%000000                 default: branch_comb = 1'b0;
                    endcase
 003061         end else if (jal || jalr || trap_req_c || mret_req_c ||
%000000                      irq_take) begin
                    // Traps, mret, and IRQ preemption reuse the branch redirect
                    // machinery: PC goes to mtvec/mepc, fetch+decode flush exactly
                    // like a taken jump.
%000000             branch_comb = 1'b1;
                end
            end
        
%000002     wire [63:0] branch_tgt =
                jalr       ? ((src1 + imm) & ~64'd1) :
                irq_take   ? mtvec_q :
                trap_req_c ? mtvec_q :
                mret_req_c ? mepc_q  :
                             (pc_in + imm);
        
            // -------------------------------------------------------
            // Result Mux: Integer / M-ext / FPU
            // -------------------------------------------------------
%000000     wire is_fp_op = (opcode == `OP_FP)    || (opcode == `OP_FMADD) ||
                            (opcode == `OP_FMSUB)  || (opcode == `OP_FNMSUB) ||
                            (opcode == `OP_FNMADD);
        
            // Word-op result narrowing: sext32 of the computed low word. W-forms
            // never collide with the jump/FP/M-ext branches above, so ordering
            // here is only about keeping the default integer path last.
%000000     wire [63:0] alu_res_w = {{32{alu_res_comb[31]}}, alu_res_comb[31:0]};
        
%000000     wire [63:0] final_alu_res = (jal || jalr)   ? (pc_in + 64'd4)  :
                                         is_fp_op         ? fpu_result        :
                                         is_mext          ? mext_result        :
                                         is_csr           ? csr_old           :
                                         is_wop           ? alu_res_w          :
                                                            alu_res_comb;
        
            // -------------------------------------------------------
            // Pipeline Register
            // -------------------------------------------------------
%000000     wire flush_ex_1, flush_ex_2, flush_ex_3, flush_ex_4;
            BUFX4 u_buf_flush_ex1 ( .A(flush), .Y(flush_ex_1) );
            BUFX4 u_buf_flush_ex2 ( .A(flush), .Y(flush_ex_2) );
            BUFX4 u_buf_flush_ex3 ( .A(flush), .Y(flush_ex_3) );
            BUFX4 u_buf_flush_ex4 ( .A(flush), .Y(flush_ex_4) );
        
            // Block 1: alu_result
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             alu_result    <= 64'h0;
%000000         end else if (flush_ex_1) begin
%000000             alu_result    <= 64'h0;
 001000         end else if (!stall && !mul_div_stall && !mx_fin) begin
 001000             alu_result    <= final_alu_res;
%000000         end else if (mx_done) begin
%000000             alu_result    <= mext_result;
                end
            end
        
            // Block 2: rs2_out
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             rs2_out       <= 64'h0;
%000000         end else if (flush_ex_2) begin
%000000             rs2_out       <= 64'h0;
%000000         end else if (!stall && !mul_div_stall && !mx_fin) begin
 001000             rs2_out       <= src2_reg;
                end
            end
            
            // Block 3: branch_target
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             branch_target <= 64'h0;
%000000         end else if (flush_ex_3) begin
%000000             branch_target <= 64'h0;
%000000         end else if (!stall && !mul_div_stall && !mx_fin) begin
 001000             branch_target <= branch_tgt;
                end
            end
        
            // Block 4: Control and Branch outputs
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             rd_out        <= 5'h0;
 000020             funct3_out    <= 3'h0;
 000020             opcode_out    <= 7'h0;
 000020             mem_read_out  <= 1'b0;
 000020             mem_write_out <= 1'b0;
 000020             reg_write_out <= 1'b0;
 000020             is_amo_out    <= 1'b0;
 000020             amo_funct5_out<= 5'h0;
 000020             valid_out     <= 1'b0;
 000020             branch_taken  <= 1'b0;
%000000         end else if (flush_ex_4) begin
%000000             rd_out        <= 5'h0;
%000000             funct3_out    <= 3'h0;
%000000             opcode_out    <= 7'h0;
%000000             mem_read_out  <= 1'b0;
%000000             mem_write_out <= 1'b0;
%000000             reg_write_out <= 1'b0;
%000000             is_amo_out    <= 1'b0;
%000000             amo_funct5_out<= 5'h0;
%000000             valid_out     <= 1'b0;
%000000             branch_taken  <= 1'b0;
 001000         end else if (!stall && !mul_div_stall && !mx_fin) begin
 001000             rd_out        <= rd_in;
 001000             funct3_out    <= funct3;
 001000             opcode_out    <= opcode;
                    // An interrupted or trapping beat commits NOTHING — including
                    // no bus side effects: a preempted store must not reach the
                    // interconnect (it re-executes after the handler returns).
 001000             mem_read_out  <= mem_read && !irq_take && !trap_req_c;
 001000             mem_write_out <= mem_write && !irq_take && !trap_req_c;
 001000             reg_write_out <= reg_write && !trap_req_c && !irq_take &&
 001000                              (!is_fp_op || fpu_done);
 001000             is_amo_out    <= is_amo;
 001000             amo_funct5_out<= amo_funct5;
 001000             valid_out     <= valid_in;
 001000             branch_taken  <= branch_comb && valid_in;
%000000         end else if (mx_done) begin
                    // M-ext delivery: replay the CAPTURED instruction's control
                    // fields — decode is frozen presenting this same op, so the
                    // live inputs would work too, but the captured copies are the
                    // contract (and immune to any same-edge weirdness).
%000000             rd_out        <= mx_rd_q;
%000000             funct3_out    <= mx_f3_q;
%000000             opcode_out    <= mx_opcode_q;
%000000             mem_read_out  <= 1'b0;
%000000             mem_write_out <= 1'b0;
%000000             reg_write_out <= mx_rw_q;
%000000             is_amo_out    <= 1'b0;
%000000             amo_funct5_out<= 5'h0;
%000000             valid_out     <= mx_v_q;
%000000             branch_taken  <= 1'b0;
                end
            end
        
        endmodule
        
