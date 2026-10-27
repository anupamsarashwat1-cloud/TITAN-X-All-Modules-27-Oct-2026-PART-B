//      // verilator_coverage annotation
        // SPDX-License-Identifier: Apache-2.0
        // SMVDU-TITAN-X SoC — RV64I Decode + Register File Stage
        `timescale 1ns/1ps
        // Shared ISA constants — single source of truth shared with execute/top.
        // (isa_constants.vh was a drifted 4-bit localparam duplicate; retired.)
        // Included at file scope, matching every other consumer of this header.
        `include "isa_pkg.vh"
        
        module rv_decode (
 002039     input  wire        clk,
%000001     input  wire        rst_n,
%000000     input  wire        stall,
%000000     input  wire        flush,
            // From fetch
%000002     input  wire [63:0] pc_in,
 000056     input  wire [31:0] instr_in,
 000666     input  wire        valid_in,
            // Writeback feedback
%000000     input  wire [4:0]  wb_rd,
%000000     input  wire [63:0] wb_data,
 000609     input  wire        wb_we,
            // To execute
%000002     output reg  [63:0] pc_out,
%000000     output reg  [63:0] rs1_data,
%000000     output reg  [63:0] rs2_data,
%000000     output reg  [63:0] imm,
%000000     output reg  [4:0]  rd,
%000000     output reg  [4:0]  rs1_addr,
%000000     output reg  [4:0]  rs2_addr,
 000055     output reg  [2:0]  funct3,
%000000     output reg  [6:0]  funct7,
%000000     output reg  [6:0]  opcode,
%000000     output reg  [4:0]  alu_op,
%000000     output reg         mem_read,
%000000     output reg         mem_write,
%000001     output reg         reg_write,
%000000     output reg         branch,
%000000     output reg         jal,
%000000     output reg         jalr,
            // SYSTEM (Zicsr + privileged simples, Phase 5 Step 5.4)
%000000     output reg         is_csr,
%000000     output reg  [1:0]  csr_op,      // f3[1:0]: 01 W, 10 S, 11 C
%000000     output reg         is_ecall,
%000000     output reg         is_ebreak,
%000000     output reg         is_mret,
 000665     output reg         valid_out
        );
%000000     wire [6:0] op   = instr_in[6:0];
%000000     wire [4:0] r_rs1 = instr_in[19:15];
%000000     wire [4:0] r_rs2 = instr_in[24:20];
%000000     wire [4:0] r_rd  = instr_in[11:7];
 000055     wire [2:0] f3   = instr_in[14:12];
%000000     wire [6:0] f7   = instr_in[31:25];
        
            // Immediate decode (combinational)
%000000     reg [63:0] imm_comb;
%000000     reg [4:0]  alu_op_comb;
%000000     reg        mem_r_comb, mem_w_comb, reg_w_comb, br_comb, jal_comb, jalr_comb;
%000000     reg        csr_comb, ec_comb, eb_comb, mret_comb;
%000000     reg [1:0]  csrop_comb;
        
%000001     always @(*) begin
%000001         imm_comb    = 64'h0;
%000001         alu_op_comb = `ALU_ADD;
%000001         mem_r_comb  = 1'b0;
%000001         mem_w_comb  = 1'b0;
%000001         reg_w_comb  = 1'b0;
%000001         br_comb     = 1'b0;
%000001         jal_comb    = 1'b0;
%000001         jalr_comb   = 1'b0;
%000001         csr_comb    = 1'b0;
%000001         ec_comb     = 1'b0;
%000001         eb_comb     = 1'b0;
%000001         mret_comb   = 1'b0;
%000001         csrop_comb  = 2'b00;
        
%000001         case (op)
%000000             `OP_LUI: begin
%000000                 imm_comb    = {{32{instr_in[31]}}, instr_in[31:12], 12'h0};
%000000                 alu_op_comb = `ALU_LUI;
%000000                 reg_w_comb  = 1'b1;
                    end
%000000             `OP_AUIPC: begin
%000000                 imm_comb    = {{32{instr_in[31]}}, instr_in[31:12], 12'h0};
%000000                 alu_op_comb = `ALU_AUIPC;
%000000                 reg_w_comb  = 1'b1;
                    end
%000000             `OP_JAL: begin
                        // Width check: 51 sign bits + 1 + 8 + 1 + 10 + 1 = 64.
                        // (Was 43 sign bits — a 63-bit concat silently
                        // zero-extended, corrupting every jal target.)
%000000                 imm_comb    = {{51{instr_in[31]}}, instr_in[19:12],
%000000                                instr_in[20], instr_in[30:21], 1'b0};
%000000                 alu_op_comb = `ALU_ADD;
%000000                 reg_w_comb  = 1'b1;
%000000                 jal_comb    = 1'b1;
                    end
%000000             `OP_JALR: begin
%000000                 imm_comb    = {{52{instr_in[31]}}, instr_in[31:20]};
%000000                 alu_op_comb = `ALU_ADD;
%000000                 reg_w_comb  = 1'b1;
%000000                 jalr_comb   = 1'b1;
                    end
%000000             `OP_BRANCH: begin
%000000                 imm_comb    = {{51{instr_in[31]}}, instr_in[31], instr_in[7],
%000000                                instr_in[30:25], instr_in[11:8], 1'b0};
%000000                 br_comb     = 1'b1;
%000000                 case (f3)
%000000                     3'b000: alu_op_comb = `ALU_SUB;  // BEQ
%000000                     3'b001: alu_op_comb = `ALU_SUB;  // BNE
%000000                     3'b100: alu_op_comb = `ALU_SLT;  // BLT
%000000                     3'b101: alu_op_comb = `ALU_SLT;  // BGE
%000000                     3'b110: alu_op_comb = `ALU_SLTU; // BLTU
%000000                     3'b111: alu_op_comb = `ALU_SLTU; // BGEU
%000000                     default: alu_op_comb = `ALU_SUB;
                        endcase
                    end
%000000             `OP_LOAD: begin
%000000                 imm_comb   = {{52{instr_in[31]}}, instr_in[31:20]};
%000000                 mem_r_comb = 1'b1;
%000000                 reg_w_comb = 1'b1;
                    end
%000000             `OP_STORE: begin
%000000                 imm_comb   = {{52{instr_in[31]}}, instr_in[31:25], instr_in[11:7]};
%000000                 mem_w_comb = 1'b1;
                    end
 000433             `OP_IMM, `OP_IMM64: begin
 000433                 imm_comb   = {{52{instr_in[31]}}, instr_in[31:20]};
 000433                 reg_w_comb = 1'b1;
 000433                 case (f3)
 000271                     3'b000: alu_op_comb = `ALU_ADD;
%000000                     3'b010: alu_op_comb = `ALU_SLT;
%000000                     3'b011: alu_op_comb = `ALU_SLTU;
%000000                     3'b100: alu_op_comb = `ALU_XOR;
%000000                     3'b110: alu_op_comb = `ALU_OR;
%000000                     3'b111: alu_op_comb = `ALU_AND;
 000081                     3'b001: alu_op_comb = `ALU_SLL;
 000081                     3'b101: alu_op_comb = (f7[5]) ? `ALU_SRA : `ALU_SRL;
%000000                     default: alu_op_comb = `ALU_ADD;
                        endcase
                    end
 000587             `OP_REG, `OP_REG64: begin
 000587                 reg_w_comb = 1'b1;
 000587                 if (f7 == 7'b0000001) begin
                            // M-extension. Dispatched on the FULL funct7: the old
                            // {f7[5],f3} table ignored f7[0], so every MUL/DIV
                            // decoded as its base-op twin (MUL executed as ADD,
                            // DIV as XOR).
%000000                     case (f3)
%000000                         3'b000: alu_op_comb = `ALU_MUL;
%000000                         3'b001: alu_op_comb = `ALU_MULH;
%000000                         3'b010: alu_op_comb = `ALU_MULHSU;
%000000                         3'b011: alu_op_comb = `ALU_MULHU;
%000000                         3'b100: alu_op_comb = `ALU_DIV;
%000000                         3'b101: alu_op_comb = `ALU_DIVU;
%000000                         3'b110: alu_op_comb = `ALU_REM;
%000000                         3'b111: alu_op_comb = `ALU_REMU;
%000000                         default: alu_op_comb = `ALU_ADD;
                            endcase
                        end else
 000587                 case ({f7[5], f3})
 000252                     4'b0000: alu_op_comb = `ALU_ADD;
 000084                     4'b1000: alu_op_comb = `ALU_SUB;
%000000                     4'b0010: alu_op_comb = `ALU_SLT;
%000000                     4'b0011: alu_op_comb = `ALU_SLTU;
 000084                     4'b0100: alu_op_comb = `ALU_XOR;
 000084                     4'b0110: alu_op_comb = `ALU_OR;
 000083                     4'b0111: alu_op_comb = `ALU_AND;
%000000                     4'b0001: alu_op_comb = `ALU_SLL;
%000000                     4'b0101: alu_op_comb = `ALU_SRL;
%000000                     4'b1101: alu_op_comb = `ALU_SRA;
%000000                     default: alu_op_comb = `ALU_ADD;
                        endcase
                    end
%000000             `OP_SYSTEM: begin
                        // Zicsr + privileged simples. The CSR address rides the
                        // imm field (no extra datapath). funct3[2] marks the
                        // immediate forms: rs1 field is a zimm VALUE, not an
                        // index — Block 3 substitutes {59'b0, r_rs1}.
%000000                 if (f3 == 3'b000) begin
%000000                     case (instr_in[31:20])
%000000                         12'h000: ec_comb   = 1'b1;    // ECALL
%000000                         12'h001: eb_comb   = 1'b1;    // EBREAK
%000000                         12'h302: mret_comb = 1'b1;    // MRET
%000000                         default: ;                    // unrecognized SYSTEM
                                                              // -> execute raises
                                                              // illegal-instruction
                            endcase
%000000                 end else begin
%000000                     csr_comb   = 1'b1;
%000000                     csrop_comb = f3[1:0];
%000000                     imm_comb   = {52'h0, instr_in[31:20]};
%000000                     reg_w_comb = 1'b1;            // rd <- old value (x0 discards)
                        end
                    end
%000001             default: begin end
                endcase
            end
        
%000000     wire zimm_form = (op == `OP_SYSTEM) && f3[2];
        
            // Register file: dedicated module (unit-tested under backend/rv_regfile),
            // written from the writeback stage through the wb_* feedback port.
%000000     wire [63:0] rf_rs1_data, rf_rs2_data;
            rv_regfile u_rf (
                .clk      (clk),
                .rst_n    (rst_n),
                .rd_addr1 (r_rs1),   .rd_data1 (rf_rs1_data),
                .rd_addr2 (r_rs2),   .rd_data2 (rf_rs2_data),
                .wr_en    (wb_we),
                .wr_addr  (wb_rd),
                .wr_data  (wb_data)
            );
        
%000000     wire flush_buf1, flush_buf2, flush_buf3, flush_buf4, flush_buf5;
            BUFX4 u_buf1 (.A(flush), .Y(flush_buf1)); // for pc_out
            BUFX4 u_buf2 (.A(flush), .Y(flush_buf2)); // for imm
            BUFX4 u_buf3 (.A(flush), .Y(flush_buf3)); // for rs1_data
            BUFX4 u_buf4 (.A(flush), .Y(flush_buf4)); // for rs2_data
            BUFX4 u_buf5 (.A(flush), .Y(flush_buf5)); // for control bits
        
            // Pipeline register - Block 1: pc_out
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             pc_out    <= 64'h0;
%000000         end else if (flush_buf1) begin
%000000             pc_out    <= 64'h0;
%000000         end else if (!stall) begin
 001000             pc_out    <= pc_in;
                end
            end
        
            // Pipeline register - Block 2: imm
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             imm       <= 64'h0;
%000000         end else if (flush_buf2) begin
%000000             imm       <= 64'h0;
%000000         end else if (!stall) begin
 001000             imm       <= imm_comb;
                end
            end
        
            // Pipeline register - Block 3: rs1_data
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             rs1_data  <= 64'h0;
%000000         end else if (flush_buf3) begin
%000000             rs1_data  <= 64'h0;
%000000         end else if (!stall) begin
 001000             rs1_data  <= (wb_we && wb_rd == r_rs1 && r_rs1 != 5'h0) ?
 001000                          wb_data :
 001000                          zimm_form ? {59'b0, r_rs1} :   // CSRR*I: field is a value
 001000                          rf_rs1_data;
                end
            end
        
            // Pipeline register - Block 4: rs2_data
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             rs2_data  <= 64'h0;
%000000         end else if (flush_buf4) begin
%000000             rs2_data  <= 64'h0;
%000000         end else if (!stall) begin
 001000             rs2_data  <= (wb_we && wb_rd == r_rs2 && r_rs2 != 5'h0) ?
 001000                          wb_data : rf_rs2_data;
                end
            end
        
            // Pipeline register - Block 5: control signals
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             rd        <= 5'h0;
 000020             rs1_addr  <= 5'h0;
 000020             rs2_addr  <= 5'h0;
 000020             funct3    <= 3'h0;
 000020             funct7    <= 7'h0;
 000020             opcode    <= 7'h0;
 000020             alu_op    <= 5'h0;
 000020             mem_read  <= 1'b0;
 000020             mem_write <= 1'b0;
 000020             reg_write <= 1'b0;
 000020             branch    <= 1'b0;
 000020             jal       <= 1'b0;
 000020             jalr      <= 1'b0;
 000020             is_csr    <= 1'b0;
 000020             csr_op    <= 2'b00;
 000020             is_ecall  <= 1'b0;
 000020             is_ebreak <= 1'b0;
 000020             is_mret   <= 1'b0;
 000020             valid_out <= 1'b0;
%000000         end else if (flush_buf5) begin
%000000             rd        <= 5'h0;
%000000             rs1_addr  <= 5'h0;
%000000             rs2_addr  <= 5'h0;
%000000             funct3    <= 3'h0;
%000000             funct7    <= 7'h0;
%000000             opcode    <= 7'h0;
%000000             alu_op    <= 5'h0;
%000000             mem_read  <= 1'b0;
%000000             mem_write <= 1'b0;
%000000             reg_write <= 1'b0;
%000000             branch    <= 1'b0;
%000000             jal       <= 1'b0;
%000000             jalr      <= 1'b0;
%000000             is_csr    <= 1'b0;
%000000             csr_op    <= 2'b00;
%000000             is_ecall  <= 1'b0;
%000000             is_ebreak <= 1'b0;
%000000             is_mret   <= 1'b0;
%000000             valid_out <= 1'b0;
%000000         end else if (!stall) begin
 001000             rd        <= r_rd;
 001000             rs1_addr  <= r_rs1;
 001000             rs2_addr  <= r_rs2;
 001000             funct3    <= f3;
 001000             funct7    <= f7;
 001000             opcode    <= op;
 001000             alu_op    <= alu_op_comb;
 001000             mem_read  <= mem_r_comb;
 001000             mem_write <= mem_w_comb;
 001000             reg_write <= reg_w_comb;
 001000             branch    <= br_comb;
 001000             jal       <= jal_comb;
 001000             jalr      <= jalr_comb;
 001000             is_csr    <= csr_comb;
 001000             csr_op    <= csrop_comb;
 001000             is_ecall  <= ec_comb;
 001000             is_ebreak <= eb_comb;
 001000             is_mret   <= mret_comb;
 001000             valid_out <= valid_in;
                end
            end
        endmodule
        
