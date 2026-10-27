set signals [list \
  "tb_fresh_rv_pmp.clk" \
  "tb_fresh_rv_pmp.rst_n" \
  "tb_fresh_rv_pmp.check_en" \
  "tb_fresh_rv_pmp.priv_mode\[1:0\]" \
  "tb_fresh_rv_pmp.paddr\[37:0\]" \
  "tb_fresh_rv_pmp.check_r" \
  "tb_fresh_rv_pmp.check_w" \
  "tb_fresh_rv_pmp.check_x" \
  "tb_fresh_rv_pmp.pmpcfg0\[63:0\]" \
  "tb_fresh_rv_pmp.pmp_fault" \
]
gtkwave::addSignalsFromList $signals
gtkwave::/Time/Zoom/Zoom_Full
