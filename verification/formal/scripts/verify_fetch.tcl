read_verilog -Iincludes -D FORMAL -sv \
    frontend/rv_fetch/rv_fetch.v \
    verification/formal/sva/rv_fetch_formal.sv

prep -top rv_fetch_formal -nordff
async2sync
dffunmap
write_smt2 -wires verification/formal/proofs/rv_fetch.smt2
