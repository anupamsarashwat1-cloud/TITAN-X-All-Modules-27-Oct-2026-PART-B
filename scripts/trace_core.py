#!/usr/bin/env python3
"""Per-cycle core pipeline trace from tb_rv_core_top.vcd.

Prints one line per posedge for a cycle window: fetch pc/valid, decode
opcode, execute valid, mem AXI activity, and writeback commits — so the
cycle where RTL execution diverges from program order can be pinpointed
against gen_core_test.py's instruction listing.

Usage: python3 scripts/trace_core.py [first_cycle] [last_cycle]
(VCD was dumped with timescale precision 1ps; clk toggles every 3600.)
"""
import sys
from vcdvcd import VCDVCD

VCD = "./tb_rv_core_top.vcd"  # dumpfile() is CWD-relative: repo root when run from root
FIRST = int(sys.argv[1]) if len(sys.argv) > 1 else 0
LAST = int(sys.argv[2]) if len(sys.argv) > 2 else 400

# signal -> short name we print
WANT = {
    "tb_rv_core_top.uut.u_fetch.pc_out[63:0]":      "fe_pc",
    "tb_rv_core_top.uut.u_fetch.valid_out":         "fe_v",
    "tb_rv_core_top.uut.u_decode.opcode[6:0]":      "de_op",
    "tb_rv_core_top.uut.u_decode.rd[4:0]":          "de_rd",
    "tb_rv_core_top.uut.u_decode.valid_out":        "de_v",
    "tb_rv_core_top.uut.u_execute.valid_out":       "ex_v",
    "tb_rv_core_top.uut.u_execute.alu_result[63:0]": "ex_alu",
    "tb_rv_core_top.uut.u_mem.dmem_awvalid":        "aw",
    "tb_rv_core_top.uut.u_mem.dmem_awready":        "awr",
    "tb_rv_core_top.uut.u_mem.dmem_wvalid":         "wv",
    "tb_rv_core_top.uut.u_mem.dmem_wready":         "wr",
    "tb_rv_core_top.uut.u_mem.dmem_bvalid":         "bv",
    "tb_rv_core_top.uut.u_mem.dmem_bready":         "br",
    "tb_rv_core_top.uut.u_mem.dmem_arvalid":        "arv",
    "tb_rv_core_top.uut.u_mem.mem_active":          "mact",
    "tb_rv_core_top.uut.u_mem.mstate[1:0]":         "mst",
    "tb_rv_core_top.uut.u_mem.mem_stall":           "mstall",
    "tb_rv_core_top.uut.u_wb.wb_we":                "wbw",
    "tb_rv_core_top.uut.u_wb.wb_rd[4:0]":           "wbrd",
    "tb_rv_core_top.uut.u_wb.wb_data[63:0]":        "wb_data",
}

def x(v):
    return v in ("x", "z", "X", "Z", "")

def get_var(vcd, name):
    """vcdvcd API drift: some versions map signals name->var, others keep a
    plain list with __getitem__/get_signal accessors."""
    try:
        return vcd[name]
    except Exception:
        pass
    try:
        return vcd.get_signal(name)
    except Exception:
        return None

def main():
    vcd = VCDVCD(VCD)
    raw = vcd.signals
    names = list(raw.keys()) if hasattr(raw, "keys") else list(raw)
    sigs = {}
    for fullname in names:
        if fullname in WANT:
            var = get_var(vcd, fullname)
            if var is not None:
                sigs[WANT[fullname]] = var
    missing = set(WANT.values()) - set(sigs)
    if missing:
        print("MISSING:", ", ".join(sorted(missing)))
        # help find actual names
        for fullname in sorted(vcd.signals):
            if "u_fetch.pc_out" in fullname or fullname.endswith("wb_we"):
                print("  have:", fullname)

    # Build time->value tv arrays per signal; walk posedges of top clk.
    clk = get_var(vcd, "tb_rv_core_top.clk")
    if clk is None:
        for name in names:
            if name.endswith(".clk"):
                clk = get_var(vcd, name)
                if clk is not None:
                    break
    edges = [int(t) for t, v in clk.tv if v == "1"]
    print(f"posedges found: {len(edges)}; tracing cycles {FIRST}..{LAST}")
    hdr = ["cyc", "fe_pc", "fv", "op", "rd", "dv", "xv",
           "aw", "awr", "wv", "wr", "bv", "br", "arv", "act", "mst", "stl",
           "wbw", "wbrd", "ex_alu", "wb_data"]
    print(" ".join(f"{h:>5}" if len(h) <= 5 else f"{h:>9}" for h in hdr))
    for cyc in range(FIRST, min(LAST + 1, len(edges))):
        t = edges[cyc]
        row = {}
        for short, var in sigs.items():
            val = None
            for tt, vv in var.tv:
                if int(tt) <= t:
                    val = vv
                else:
                    break
            row[short] = val if val is not None else "?"
        def g(k, w=3):
            v = row.get(k, "?")
            if x(v):
                return "X".rjust(w)
            return str(v).rjust(w)
        pc = row.get("fe_pc", "?")
        pc_s = "X" if x(pc) else f"0x{int(pc, 2) & 0xFFFFF:X}"
        alu = row.get("ex_alu", "?")
        alu_s = "X" if x(alu) else f"0x{int(alu, 2) & 0xFFFFFFFFFFFF:012X}"
        wd = row.get("wb_data", "?")
        wd_s = "X" if x(wd) else f"0x{int(wd, 2) & 0xFFFFFFFFFFFF:012X}"
        op = row.get("de_op", "?")
        op_s = "X" if x(op) else f"0x{int(op, 2):02X}"
        print(" ".join([str(cyc).rjust(5), pc_s.rjust(9),
                        g("fe_v"), op_s.rjust(4), g("de_rd"),
                        g("de_v"), g("ex_v"), g("aw"), g("awr"),
                        g("wv"), g("wr"), g("bv"), g("br"),
                        g("arv"), g("mact"), g("mst"), g("mstall"),
                        g("wbw"), g("wbrd"),
                        alu_s.rjust(14), wd_s.rjust(14)]))

if __name__ == "__main__":
    main()
