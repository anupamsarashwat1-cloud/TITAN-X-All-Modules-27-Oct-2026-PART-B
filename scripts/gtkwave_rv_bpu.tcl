
set signals [list   "tb_fresh_rv_bpu.clk"   "tb_fresh_rv_bpu.rst_n"   "tb_fresh_rv_bpu.fetch_pc\[63:0\]"   "tb_fresh_rv_bpu.fetch_valid"   "tb_fresh_rv_bpu.pred_taken"   "tb_fresh_rv_bpu.pred_target\[63:0\]"   "tb_fresh_rv_bpu.pred_valid"   "tb_fresh_rv_bpu.ex_pc\[63:0\]"   "tb_fresh_rv_bpu.ex_is_branch"   "tb_fresh_rv_bpu.ex_taken"   "tb_fresh_rv_bpu.ex_target\[63:0\]"   "tb_fresh_rv_bpu.ex_valid" ]
gtkwave::addSignalsFromList $signals
gtkwave::/Time/Zoom/Zoom_Full
