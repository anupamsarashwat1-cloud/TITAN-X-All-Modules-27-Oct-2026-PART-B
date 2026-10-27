# Phase 3: CPU Backend Execution, Registers & FPU — Plan

> **Phase Goal:** Exhaustively verify the RV64I/M/F/D backend execution pipeline, integer and floating-point register files, CSR architecture, ALU/MULDIV arithmetic, memory stage alignment & AMOs, and retirement writeback multiplexing.

---

## 1. Modules in Scope
1. `rv_regfile.v`: 32×64-bit integer General Purpose Register file (2R1W), asynchronous read, synchronous write, hardwired x0 zero.
2. `rv_csr.v`: Control and Status Registers (M/S/U modes), trap handling, interrupt delegation, cycle counters, privilege state.
3. `rv_execute.v`: RV64IM execution datapath, ALU, multi-cycle Radix-4 multiplier, iterative divider, branch resolution, hazard forwarding.
4. `rv_mem.v`: Data memory interface, byte/half/word/doubleword sign/zero extension, store byte-enables, atomic memory operations (LR/SC, AMO).
5. `rv_writeback.v`: Retirement arbitration multiplexer, register writeback data path, commit validation.
6. `rv_fpu.v`: IEEE 754-2008 single/double precision FPU, 32×64-bit FPR file, FMADD, FADD, FMUL, FDIV, FSQRT, FP-Int conversions.

---

## 2. Verification Tasks
- **Task 3.1: `rv_regfile`** — Multi-port concurrent read/write, write-after-read, zero-register x0 immutability check.
- **Task 3.2: `rv_csr`** — CSRRW/CSRRS/CSRRC access modes, trap entry/exit (mret/sret), mie/mip interrupt gating, privilege escalations.
- **Task 3.3: `rv_execute`** — 64-bit ALU operations, Radix-4 integer multiplication, iterative division corner cases (div-by-zero, signed overflow), branch comparison.
- **Task 3.4: `rv_mem`** — LB/LH/LW/LD sign extension, LBU/LHU/LWU zero extension, SB/SH/SW/SD byte masks, AMO reservation registers.
- **Task 3.5: `rv_writeback`** — ALU vs Memory vs CSR vs FPU writeback routing, pipeline stall holding, retirement status.
- **Task 3.6: `rv_fpu`** — IEEE 754 precision modes (FP32/FP64), NaN boxing, rounding modes, exception flags (NV, DZ, OF, UF, NX).

---

## 3. Acceptance Criteria
- [x] 100% assertions pass across all 6 module testbenches.
- [x] VCD waveforms rendered to PNG and stored in `docs/waveforms/` and module folders.
- [x] Each module's `README.md` enriched with verified test matrices and simulation logs.
- [x] Logged to `progress.txt` and committed to git.

