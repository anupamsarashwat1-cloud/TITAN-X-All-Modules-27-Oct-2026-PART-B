
set signals [list   "tb_fresh_rv_fpu.clk"   "tb_fresh_rv_fpu.rst_n"   "tb_fresh_rv_fpu.valid_in"   "tb_fresh_rv_fpu.fop\[4:0\]"   "tb_fresh_rv_fpu.fmt\[1:0\]"   "tb_fresh_rv_fpu.fp_src1\[63:0\]"   "tb_fresh_rv_fpu.fp_src2\[63:0\]"   "tb_fresh_rv_fpu.fp_result\[63:0\]"   "tb_fresh_rv_fpu.int_result\[63:0\]"   "tb_fresh_rv_fpu.fpu_done"   "tb_fresh_rv_fpu.result_valid" ]
gtkwave::addSignalsFromList $signals
gtkwave::/Time/Zoom/Zoom_Full
