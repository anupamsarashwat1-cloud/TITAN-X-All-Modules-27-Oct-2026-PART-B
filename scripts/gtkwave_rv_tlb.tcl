set signals [list \
  "tb_fresh_rv_tlb.clk" \
  "tb_fresh_rv_tlb.rst_n" \
  "tb_fresh_rv_tlb.req_valid" \
  "tb_fresh_rv_tlb.va_in\[38:0\]" \
  "tb_fresh_rv_tlb.asid_in\[15:0\]" \
  "tb_fresh_rv_tlb.hit" \
  "tb_fresh_rv_tlb.pa_out\[37:0\]" \
  "tb_fresh_rv_tlb.page_fault" \
  "tb_fresh_rv_tlb.fill_valid" \
  "tb_fresh_rv_tlb.fill_va\[38:0\]" \
  "tb_fresh_rv_tlb.fill_pa\[37:0\]" \
  "tb_fresh_rv_tlb.sfence_vma" \
]
gtkwave::addSignalsFromList $signals
gtkwave::/Time/Zoom/Zoom_Full
