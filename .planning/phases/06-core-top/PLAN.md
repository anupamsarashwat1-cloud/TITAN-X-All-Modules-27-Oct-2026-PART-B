# Phase 6: Single-Core Full Pipeline Integration & Compliance Suite — Plan

> **Phase Goal:** Execute the full architectural retirement spine (`rv_core_top`) across all 6 verified instruction memory hex suites and golden architectural traces.

---

## 1. Modules in Scope
1. `rv_core_top.v`: Full 5-stage in-order RV64IMC retirement spine with hazard detection, operand forwarding network, and AXI4 master instruction/data buses.

---

## 2. Verification Tasks
- [x] **Task 6.1: Base RV64I Suite (`tb_rv_core_top.v`)** — Full ALU, jump/branch, load/store, 43 commits, 14 stores, 32 registers match.
- [x] **Task 6.2: RISC-V Compliance Suite (`tb_rv_core_compliance.v`)** — Deep architectural corner cases, 370 commits, 77 stores, 32 registers match.
- [x] **Task 6.3: CSR & Trap Suite (`tb_rv_core_csr.v`)** — CSR operations, privilege levels, exceptions, 40 commits, 23 stores, 32 registers match.
- [x] **Task 6.4: Interrupt Suite (`tb_rv_core_irq.v`)** — External, timer, software interrupt injection, trap diversion and MRET return, 24 commits, 7 stores, 32 registers match.
- [x] **Task 6.5: M-Extension Suite (`tb_rv_core_mext.v`)** — Hardware radix-4 multiplier and divider, stall qualification, 57 commits, 18 stores, 32 registers match.
- [x] **Task 6.6: Word Operations Suite (`tb_rv_core_wops.v`)** — RV64 32-bit word arithmetic and sign-extension, 32 commits, 15 stores, 32 registers match.

---

## 3. Acceptance Criteria
- [x] 100% assertions pass across all 6 simulation suites.
- [x] VCD waveforms rendered to PNG and stored in `docs/waveforms/` and module folders.
- [x] `rv_core_top/README.md` enriched with verified test matrices and simulation logs.
- [x] Logged to `progress.txt` and committed to git.
