set nfacs [gtkwave::getNumFacs]
set facs [list]
for {set i 0} {$i < $nfacs} {incr i} {
    set fac [gtkwave::getFacName $i]
    if {[string match "tb_fresh_rv_debug.*" $fac] && ![string match "tb_fresh_rv_debug.dut.*" $fac] && ![string match "*test_name*" $fac] && ![string match "*condition*" $fac] && ![string match "*tests_*" $fac] && ![string match "*b" $fac] && ![string match "*len" $fac] && ![string match "*ir_val*" $fac] && ![string match "*dr_in*" $fac] && ![string match "*dr_out*" $fac]} {
        lappend facs $fac
    }
}
gtkwave::addSignalsFromList $facs
gtkwave::setZoomFactor -20
