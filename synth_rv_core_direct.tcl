read_verilog -Iincludes -sv \
    includes/stdcell_stubs.v \
    common/BUFX4/buf_macros.v \
    frontend/rv_fetch/rv_fetch.v \
    frontend/rv_decode/rv_decode.v \
    backend/rv_regfile/rv_regfile.v \
    backend/rv_csr/rv_csr.v \
    backend/rv_execute/rv_execute.v \
    backend/rv_mem/rv_mem.v \
    backend/rv_writeback/rv_writeback.v \
    backend/rv_core_top/rv_core_top.v

hierarchy -top rv_core_top
synth -top rv_core_top
stat
