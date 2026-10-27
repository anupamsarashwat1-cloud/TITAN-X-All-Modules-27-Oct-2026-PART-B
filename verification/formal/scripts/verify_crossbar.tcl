read_verilog -Iincludes -D FORMAL -sv \
    interconnect/axi4_crossbar/axi4_crossbar.v \
    verification/formal/sva/axi4_crossbar_formal.sv

prep -top axi4_crossbar_formal -nordff
async2sync
dffunmap
write_smt2 -wires verification/formal/proofs/axi4_crossbar.smt2
