read_verilog -Iincludes -D FORMAL -sv \
    memory/l2_snoop_filter/l2_snoop_filter.v \
    verification/formal/sva/l2_snoop_filter_formal.sv

prep -top l2_snoop_filter_formal -nordff
async2sync
dffunmap
write_smt2 -wires verification/formal/proofs/l2_snoop_filter.smt2
