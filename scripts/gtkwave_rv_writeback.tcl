
set signals [list   "tb_fresh_rv_writeback.clk"   "tb_fresh_rv_writeback.rst_n"   "tb_fresh_rv_writeback.valid_in"   "tb_fresh_rv_writeback.reg_write"   "tb_fresh_rv_writeback.rd_in\[4:0\]"   "tb_fresh_rv_writeback.result\[63:0\]"   "tb_fresh_rv_writeback.wb_rd\[4:0\]"   "tb_fresh_rv_writeback.wb_data\[63:0\]"   "tb_fresh_rv_writeback.wb_we"   "tb_fresh_rv_writeback.fwd_wb_valid" ]
gtkwave::addSignalsFromList $signals
gtkwave::/Time/Zoom/Zoom_Full
