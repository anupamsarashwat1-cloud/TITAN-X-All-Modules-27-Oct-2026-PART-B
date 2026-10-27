//      // verilator_coverage annotation
        // SPDX-License-Identifier: Apache-2.0
        // SMVDU-Titan-X SoC — RISC-V Instruction Fetch Stage (RV64I)
        //
        // Single-outstanding AXI-Lite fetch FSM with redirect-safe teardown:
        // on a redirect the unit first drains any orphaned transaction belonging
        // to the abandoned stream (an unaccepted AR, or an R beat already owed)
        // before issuing the redirected fetch. Without that drain the stale
        // instruction would be paired with the NEW pc_out — silent execution of
        // the wrong instruction at the wrong architectural address.
        `timescale 1ns/1ps
        `include "params.vh"
        
        module rv_fetch #(
            parameter RESET_PC = `RESET_PC
        ) (
 002039     input  wire        clk,
%000001     input  wire        rst_n,
            // Hazard/control
%000000     input  wire        stall,
%000000     input  wire        flush,
%000000     input  wire        branch_taken,
%000002     input  wire [63:0] branch_target,
            // Instruction memory (AXI-Lite AR/R)
%000002     output reg  [63:0] imem_addr,
 000667     output reg         imem_arvalid,
%000001     input  wire        imem_arready,
 000056     input  wire [31:0] imem_rdata,
%000001     input  wire        imem_rvalid,
 000667     output wire        imem_rready,
%000000     input  wire [1:0]  imem_rresp,
            // To decode stage
%000002     output reg  [63:0] pc_out,
 000056     output reg  [31:0] instr_out,
 000666     output reg         valid_out
        );
%000002     reg [63:0] pc;
        
            // Fetch FSM
            localparam F_REQ   = 2'd1;
            localparam F_WAIT  = 2'd2;
            localparam F_FLUSH = 2'd3;   // draining an orphaned transaction
 000667     reg [1:0] fstate;
 000666     reg       pending_r;         // AR accepted; matching R beat still owed
        
            // Ready for the R beat while waiting for data OR while swallowing an
            // orphan after a redirect — and never during a global stall (a
            // compliant slave holds rvalid/rdata stable until we accept).
            assign imem_rready = (fstate == F_WAIT || fstate == F_FLUSH) && !stall;
        
%000000     wire redirect = flush || branch_taken;
        
            // Transaction-completion pulses. r_fire doubles as "the R beat is being
            // consumed THIS edge" (rready is high by construction in both wait
            // states), which is what makes the redirect classification below exact.
 000667     wire ar_fire = imem_arvalid && imem_arready;
%000001     wire r_fire  = !stall && imem_rvalid;
        
 001020     always @(posedge clk or negedge rst_n) begin
 000020         if (!rst_n) begin
 000020             pc           <= RESET_PC;
 000020             imem_addr    <= RESET_PC;
 000020             imem_arvalid <= 1'b0;
 000020             pc_out       <= 64'h0;
 000020             instr_out    <= 32'h0000_0013; // NOP
 000020             valid_out    <= 1'b0;
 000020             fstate       <= F_REQ;
 000020             pending_r    <= 1'b0;
 001000         end else begin
 001000             case (fstate)
 000334                 F_REQ: begin
                            // Redirect windows are not just F_WAIT's problem: a
                            // branch resolving in the cycle RIGHT AFTER a delivery
                            // finds us here, with the sequential next address about
                            // to be (or just being) requested. Honoring it only in
                            // F_WAIT let one wrong-path instruction through whenever
                            // resolution landed in this window. Nothing is
                            // outstanding in F_REQ (pending_r cleared on entry), so
                            // the fix is simply aiming the next fetch at the target.
                            // Redirect outranks stall: the wrong-path beat is dead
                            // either way once the front-end is flushed.
%000000                     if (redirect) begin
%000000                         valid_out    <= 1'b0;
%000000                         pc           <= branch_target;
%000000                         imem_addr    <= branch_target;
%000000                         imem_arvalid <= 1'b1;
%000000                         fstate       <= F_WAIT;
%000000                     end else if (!stall) begin
                            // Refill-gap valid discipline. valid_out was set for
                            // exactly the one delivery cycle; it must drop so decode
                            // cannot re-latch the SAME instruction once per refill
                            // cycle (the every-instruction-executes-thrice bug).
                            // BUT the drop is conditional on actual consumption:
                            // if the pipe stalled during the delivery cycle, decode
                            // froze before taking the beat — clearing valid here
                            // made the instruction evaporate the moment the stall
                            // released (every other store/load follower vanished).
                            // Producer rule: hold VALID until the consumer takes it.
 000334                         valid_out    <= 1'b0;
 000334                         imem_addr    <= pc;
 000334                         imem_arvalid <= 1'b1;
 000334                         fstate       <= F_WAIT;
                            end
                            // else: hold {pc_out, instr_out, valid_out} intact —
                            // decode is frozen and will consume on release.
                        end
 000666                 F_WAIT: begin
                            // Track AR completion for the outstanding request
 000333                     if (ar_fire) begin
 000333                         imem_arvalid <= 1'b0;
 000333                         pending_r    <= 1'b1;
                            end
%000000                     if (redirect) begin
%000000                         valid_out <= 1'b0;
%000000                         pc        <= branch_target;
                                // An orphan survives this edge if an AR is still
                                // unaccepted (its address must stay stable — AXI
                                // forbids swapping ARADDR under held ARVALID) or a
                                // fetched beat is still owed after this edge's
                                // consumption. Only a truly clean line may issue
                                // the redirected fetch immediately; anything else
                                // drains through F_FLUSH first. This closes the
                                // redirect-vs-AR-acceptance same-edge race where
                                // the orphan beat would be paired with the new PC.
%000000                         if ((imem_arvalid && !ar_fire) ||
                                    ((pending_r || ar_fire) && !r_fire))
%000000                             fstate <= F_FLUSH;
%000000                         else begin
                                    // Beat (if any) consumed this very edge —
                                    // refetch the target immediately.
%000000                             pending_r    <= 1'b0;
%000000                             imem_addr    <= branch_target;
%000000                             imem_arvalid <= 1'b1;
                                end
 000333                     end else if (!stall && pending_r && imem_rvalid) begin
 000333                         pc_out    <= pc;
 000333                         instr_out <= imem_rdata;
 000333                         valid_out <= (imem_rresp == 2'b00);
 000333                         pc        <= pc + 64'd4;
 000333                         pending_r <= 1'b0;
 000333                         fstate    <= F_REQ;
                            end
                        end
%000000                 F_FLUSH: begin
%000000                     valid_out <= 1'b0;
                            // Latest target wins if another redirect arrives mid-drain.
%000000                     if (redirect)
%000000                         pc    <= branch_target;
%000000                     if (imem_arvalid) begin
                                // Old request still waiting for its AR handshake:
                                // hold address/arvalid stable until accepted.
%000000                         if (ar_fire) begin
%000000                             imem_arvalid <= 1'b0;
%000000                             pending_r    <= 1'b1;
                                end
%000000                     end else if (pending_r) begin
%000000                         if (r_fire)
%000000                             pending_r <= 1'b0;    // orphan swallowed
%000000                     end else begin
%000000                         imem_addr    <= pc;
%000000                         imem_arvalid <= 1'b1;
%000000                         fstate       <= F_WAIT;
                            end
                        end
%000000                 default: fstate <= F_REQ;
                    endcase
                end
            end
        endmodule
        
