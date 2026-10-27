
set signals [list   "tb_fresh_rv_regfile.clk"   "tb_fresh_rv_regfile.rst_n"   "tb_fresh_rv_regfile.wr_en"   "tb_fresh_rv_regfile.wr_addr\[4:0\]"   "tb_fresh_rv_regfile.wr_data\[63:0\]"   "tb_fresh_rv_regfile.rd_addr1\[4:0\]"   "tb_fresh_rv_regfile.rd_data1\[63:0\]"   "tb_fresh_rv_regfile.rd_addr2\[4:0\]"   "tb_fresh_rv_regfile.rd_data2\[63:0\]" ]
gtkwave::addSignalsFromList $signals
gtkwave::/Time/Zoom/Zoom_Full
