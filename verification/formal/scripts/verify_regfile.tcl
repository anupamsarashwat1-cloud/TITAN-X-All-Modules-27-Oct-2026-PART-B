read_verilog -Iincludes -D FORMAL -sv \
    backend/rv_regfile/rv_regfile.v \
    verification/formal/sva/rv_regfile_formal.sv

prep -top rv_regfile_formal -nordff
async2sync
dffunmap
write_smt2 -wires verification/formal/proofs/rv_regfile.smt2
