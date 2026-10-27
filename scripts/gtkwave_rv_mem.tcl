
set signals [list   "tb_fresh_rv_mem.clk"   "tb_fresh_rv_mem.rst_n"   "tb_fresh_rv_mem.valid_in"   "tb_fresh_rv_mem.mem_read"   "tb_fresh_rv_mem.mem_write"   "tb_fresh_rv_mem.alu_result\[63:0\]"   "tb_fresh_rv_mem.rs2_data\[63:0\]"   "tb_fresh_rv_mem.dmem_wdata\[63:0\]"   "tb_fresh_rv_mem.dmem_wstrb\[7:0\]"   "tb_fresh_rv_mem.dmem_rdata\[63:0\]"   "tb_fresh_rv_mem.result\[63:0\]"   "tb_fresh_rv_mem.mem_stall" ]
gtkwave::addSignalsFromList $signals
gtkwave::/Time/Zoom/Zoom_Full
