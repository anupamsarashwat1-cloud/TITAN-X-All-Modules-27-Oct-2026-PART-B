
set signals [list   "tb_fresh_rv_execute.clk"   "tb_fresh_rv_execute.rst_n"   "tb_fresh_rv_execute.valid_in"   "tb_fresh_rv_execute.opcode\[6:0\]"   "tb_fresh_rv_execute.alu_op\[4:0\]"   "tb_fresh_rv_execute.rs1_data\[63:0\]"   "tb_fresh_rv_execute.rs2_data\[63:0\]"   "tb_fresh_rv_execute.alu_result\[63:0\]"   "tb_fresh_rv_execute.mul_div_stall"   "tb_fresh_rv_execute.branch_taken"   "tb_fresh_rv_execute.branch_target\[63:0\]" ]
gtkwave::addSignalsFromList $signals
gtkwave::/Time/Zoom/Zoom_Full
