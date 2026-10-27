set nfacs [gtkwave::getNumFacs]
set facs [list]
lappend facs "tb_fresh_rv_icache.clk"
lappend facs "tb_fresh_rv_icache.rst_n"
lappend facs "tb_fresh_rv_icache.cpu_addr\[39:0\]"
lappend facs "tb_fresh_rv_icache.cpu_req"
lappend facs "tb_fresh_rv_icache.cpu_rdata\[31:0\]"
lappend facs "tb_fresh_rv_icache.cpu_valid"
lappend facs "tb_fresh_rv_icache.cpu_stall"
lappend facs "tb_fresh_rv_icache.invalidate"
lappend facs "tb_fresh_rv_icache.m_arvalid"
lappend facs "tb_fresh_rv_icache.m_arready"
lappend facs "tb_fresh_rv_icache.m_araddr\[39:0\]"
lappend facs "tb_fresh_rv_icache.m_rvalid"
lappend facs "tb_fresh_rv_icache.m_rready"
lappend facs "tb_fresh_rv_icache.m_rdata\[63:0\]"
lappend facs "tb_fresh_rv_icache.m_rlast"
gtkwave::addSignalsFromList $facs
gtkwave::setZoomFactor -3
