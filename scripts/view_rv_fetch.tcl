set nfacs [gtkwave::getNumFacs]
set facs [list]
lappend facs "tb_fresh_rv_fetch.clk"
lappend facs "tb_fresh_rv_fetch.rst_n"
lappend facs "tb_fresh_rv_fetch.stall"
lappend facs "tb_fresh_rv_fetch.flush"
lappend facs "tb_fresh_rv_fetch.branch_taken"
lappend facs "tb_fresh_rv_fetch.branch_target\[63:0\]"
lappend facs "tb_fresh_rv_fetch.imem_addr\[63:0\]"
lappend facs "tb_fresh_rv_fetch.imem_arvalid"
lappend facs "tb_fresh_rv_fetch.imem_arready"
lappend facs "tb_fresh_rv_fetch.imem_rdata\[31:0\]"
lappend facs "tb_fresh_rv_fetch.imem_rvalid"
lappend facs "tb_fresh_rv_fetch.imem_rready"
lappend facs "tb_fresh_rv_fetch.pc_out\[63:0\]"
lappend facs "tb_fresh_rv_fetch.instr_out\[31:0\]"
lappend facs "tb_fresh_rv_fetch.valid_out"
gtkwave::addSignalsFromList $facs
gtkwave::setZoomFactor -3
