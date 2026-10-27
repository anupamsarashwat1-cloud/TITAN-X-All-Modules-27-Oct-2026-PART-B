# Phase 3: Formal Verification (SMT-BMC / Z3 Proofs)

This directory houses the formal verification harnesses, SystemVerilog Assertions (SVA), SMT-LIB2 models, and Yosys/Z3 formal scripts for the SMVDU TITAN-X SoC.

---

## Formally Proved Modules

| Module | Formal Harness | SMT Model | Proof Depth | Status | Mathematical Properties Proved |
| :--- | :--- | :--- | :---: | :---: | :--- |
| **`rv_regfile`** | [`sva/rv_regfile_formal.sv`](sva/rv_regfile_formal.sv) | `proofs/rv_regfile_formal.smt2` | **25 Cycles** | ✅ **PASSED** | Register zero invariant ($x0 = 0$), write-to-read transparent forwarding, and independent 2R/1W port isolation. |
| **`rv_fetch`** | [`sva/rv_fetch_formal.sv`](sva/rv_fetch_formal.sv) | `proofs/rv_fetch_formal.smt2` | **20 Cycles** | ✅ **PASSED** | PC increment alignment ($PC \equiv 0 \pmod 4$), single-cycle redirect priority, and AXI-Lite address stability during wait-states. |
| **`l2_snoop_filter`** | [`sva/l2_snoop_filter_formal.sv`](sva/l2_snoop_filter_formal.sv) | `proofs/l2_snoop_filter_formal.smt2` | **20 Cycles** | ✅ **PASSED** | Core sharer bitmask consistency, MESI invalidation determinism, and absence of spurious multi-core snoops. |
| **`axi4_crossbar`** | [`sva/axi4_crossbar_formal.sv`](sva/axi4_crossbar_formal.sv) | `proofs/axi4_crossbar_formal.smt2` | **10 Cycles** | ✅ **PASSED** | Mutual exclusion on slave grants ($\sum \text{grant} \le 1$), zero write-data interleaving, and correct transaction ID steering. |

---

## Verification Directory Structure

```
verification/formal/
├── README.md               # This formal verification documentation
├── verification_report.md  # Detailed bounded model checking report
├── scripts/                # Yosys SMT2 elaboration and BMC TCL scripts
│   ├── verify_regfile.tcl
│   ├── verify_fetch.tcl
│   ├── verify_snoop_filter.tcl
│   └── verify_crossbar.tcl
├── sva/                    # SystemVerilog Assertions & formal harnesses
│   ├── rv_regfile_formal.sv
│   ├── rv_fetch_formal.sv
│   ├── l2_snoop_filter_formal.sv
│   └── axi4_crossbar_formal.sv
└── proofs/                 # Generated SMT-LIB2 models for Z3 solver
    ├── rv_regfile_formal.smt2
    ├── rv_fetch_formal.smt2
    ├── l2_snoop_filter_formal.smt2
    └── axi4_crossbar_formal.smt2
```

---

## Running Formal Verification Proofs

Proofs are executed using **Yosys SMT2 engine** and the **Z3 Theorem Prover**:

```bash
# 1. Verify rv_regfile (Bounded depth 25)
yosys -s verification/formal/scripts/verify_regfile.tcl
yosys-smtbmc -s z3 -t 25 verification/formal/proofs/rv_regfile_formal.smt2

# 2. Verify rv_fetch (Bounded depth 20)
yosys -s verification/formal/scripts/verify_fetch.tcl
yosys-smtbmc -s z3 -t 20 verification/formal/proofs/rv_fetch_formal.smt2

# 3. Verify l2_snoop_filter (Bounded depth 20)
yosys -s verification/formal/scripts/verify_snoop_filter.tcl
yosys-smtbmc -s z3 -t 20 verification/formal/proofs/l2_snoop_filter_formal.smt2

# 4. Verify axi4_crossbar (Bounded depth 10)
yosys -s verification/formal/scripts/verify_crossbar.tcl
yosys-smtbmc -s z3 -t 10 verification/formal/proofs/axi4_crossbar_formal.smt2
```

For the complete formal sign-off report, see [`verification_report.md`](verification_report.md).
