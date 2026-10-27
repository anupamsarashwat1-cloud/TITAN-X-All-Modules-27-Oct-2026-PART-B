
set signals [list   "tb_fresh_rv_csr.clk"   "tb_fresh_rv_csr.rst_n"   "tb_fresh_rv_csr.csr_raddr\[11:0\]"   "tb_fresh_rv_csr.csr_rdata\[63:0\]"   "tb_fresh_rv_csr.csr_we"   "tb_fresh_rv_csr.csr_waddr\[11:0\]"   "tb_fresh_rv_csr.csr_wdata\[63:0\]"   "tb_fresh_rv_csr.trap_we"   "tb_fresh_rv_csr.trap_pc\[63:0\]"   "tb_fresh_rv_csr.trap_cause\[63:0\]"   "tb_fresh_rv_csr.mret_we"   "tb_fresh_rv_csr.irq_pending" ]
gtkwave::addSignalsFromList $signals
gtkwave::/Time/Zoom/Zoom_Full
