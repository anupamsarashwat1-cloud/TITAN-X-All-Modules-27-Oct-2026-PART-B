set nfacs [gtkwave::getNumFacs]
set facs [list]
lappend facs "tb_fresh_plic.clk"
lappend facs "tb_fresh_plic.rst_n"
lappend facs "tb_fresh_plic.interrupt_sources\[185:0\]"
lappend facs "tb_fresh_plic.psel"
lappend facs "tb_fresh_plic.penable"
lappend facs "tb_fresh_plic.pwrite"
lappend facs "tb_fresh_plic.paddr\[23:0\]"
lappend facs "tb_fresh_plic.pwdata\[31:0\]"
lappend facs "tb_fresh_plic.prdata\[31:0\]"
lappend facs "tb_fresh_plic.irq_targets\[9:0\]"
gtkwave::addSignalsFromList $facs
gtkwave::setZoomFactor -3
