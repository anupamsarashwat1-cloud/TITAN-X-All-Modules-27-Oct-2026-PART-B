set nfacs [gtkwave::getNumFacs]
set facs [list]
lappend facs {tb_uvm_top.clk}
lappend facs {tb_uvm_top.rst_n}
lappend facs {tb_uvm_top.m_awvalid}
lappend facs {tb_uvm_top.m_awready}
lappend facs {tb_uvm_top.m_awaddr[39:0]}
lappend facs {tb_uvm_top.m_wvalid}
lappend facs {tb_uvm_top.m_wready}
lappend facs {tb_uvm_top.m_wdata[63:0]}
lappend facs {tb_uvm_top.m_bvalid}
lappend facs {tb_uvm_top.m_bready}
lappend facs {tb_uvm_top.m_arvalid}
lappend facs {tb_uvm_top.m_arready}
lappend facs {tb_uvm_top.m_araddr[39:0]}
lappend facs {tb_uvm_top.m_rvalid}
lappend facs {tb_uvm_top.m_rready}
lappend facs {tb_uvm_top.m_rdata[63:0]}
lappend facs {tb_uvm_top.u_crossbar.m_awvalid[3:0]}
lappend facs {tb_uvm_top.u_crossbar.m_wvalid[3:0]}
lappend facs {tb_uvm_top.u_crossbar.m_arvalid[3:0]}
lappend facs {tb_uvm_top.u_crossbar.m_rvalid[3:0]}
lappend facs {tb_uvm_top.u_env.u_scoreboard.match_count}
lappend facs {tb_uvm_top.u_env.u_scoreboard.mismatch_count}
lappend facs {tb_uvm_top.u_env.u_scoreboard.write_count}
gtkwave::addSignalsFromList $facs
gtkwave::setZoomFactor -15
