set nfacs [gtkwave::getNumFacs]
set facs [list]
lappend facs "tb_fresh_clint.clk"
lappend facs "tb_fresh_clint.rst_n"
lappend facs "tb_fresh_clint.psel"
lappend facs "tb_fresh_clint.penable"
lappend facs "tb_fresh_clint.pwrite"
lappend facs "tb_fresh_clint.paddr\[15:0\]"
lappend facs "tb_fresh_clint.pwdata\[31:0\]"
lappend facs "tb_fresh_clint.prdata\[31:0\]"
lappend facs "tb_fresh_clint.pready"
lappend facs "tb_fresh_clint.msip\[4:0\]"
lappend facs "tb_fresh_clint.mtip\[4:0\]"
gtkwave::addSignalsFromList $facs
gtkwave::setZoomFactor -3
