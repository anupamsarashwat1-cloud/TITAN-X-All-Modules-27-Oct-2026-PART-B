set nfacs [gtkwave::getNumFacs]
set facs [list]
lappend facs "tb_fresh_rv_monitor_core.clk"
lappend facs "tb_fresh_rv_monitor_core.rst_n"
lappend facs "tb_fresh_rv_monitor_core.dut.fe_pc\[63:0\]"
lappend facs "tb_fresh_rv_monitor_core.dut.fe_instr\[31:0\]"
lappend facs "tb_fresh_rv_monitor_core.imem_araddr\[39:0\]"
lappend facs "tb_fresh_rv_monitor_core.imem_arvalid"
lappend facs "tb_fresh_rv_monitor_core.imem_rvalid"
lappend facs "tb_fresh_rv_monitor_core.dmem_awvalid"
lappend facs "tb_fresh_rv_monitor_core.dmem_awaddr\[39:0\]"
lappend facs "tb_fresh_rv_monitor_core.dmem_wvalid"
lappend facs "tb_fresh_rv_monitor_core.dmem_wdata\[63:0\]"
lappend facs "tb_fresh_rv_monitor_core.dmem_arvalid"
lappend facs "tb_fresh_rv_monitor_core.dmem_araddr\[39:0\]"
lappend facs "tb_fresh_rv_monitor_core.dut.stall"
lappend facs "tb_fresh_rv_monitor_core.dut.branch_taken"
lappend facs "tb_fresh_rv_monitor_core.dut.branch_target\[63:0\]"
lappend facs "tb_fresh_rv_monitor_core.halt_req"
lappend facs "tb_fresh_rv_monitor_core.hart_halted"
lappend facs "tb_fresh_rv_monitor_core.hart_running"
gtkwave::addSignalsFromList $facs
gtkwave::setZoomFactor -16
