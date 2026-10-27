set nfacs [gtkwave::getNumFacs]
set facs [list]
lappend facs "tb_fresh_rv_mmu.clk"
lappend facs "tb_fresh_rv_mmu.rst_n"
lappend facs "tb_fresh_rv_mmu.priv_mode\[1:0\]"
lappend facs "tb_fresh_rv_mmu.satp\[63:0\]"
lappend facs "tb_fresh_rv_mmu.va_req\[63:0\]"
lappend facs "tb_fresh_rv_mmu.req_valid"
lappend facs "tb_fresh_rv_mmu.req_r"
lappend facs "tb_fresh_rv_mmu.req_w"
lappend facs "tb_fresh_rv_mmu.pa_out\[39:0\]"
lappend facs "tb_fresh_rv_mmu.trans_valid"
lappend facs "tb_fresh_rv_mmu.trans_busy"
lappend facs "tb_fresh_rv_mmu.page_fault"
lappend facs "tb_fresh_rv_mmu.ptw_arvalid"
lappend facs "tb_fresh_rv_mmu.ptw_arready"
lappend facs "tb_fresh_rv_mmu.ptw_araddr\[39:0\]"
lappend facs "tb_fresh_rv_mmu.ptw_rvalid"
lappend facs "tb_fresh_rv_mmu.sfence_vma"
gtkwave::addSignalsFromList $facs
gtkwave::setZoomFactor -3
