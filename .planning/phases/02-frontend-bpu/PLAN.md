# Phase 2: CPU Frontend & Branch Prediction Subsystem — Plan

> **Phase Goal:** Exhaustively verify the instruction fetch pipeline, tournament branch predictor, 32KB VIPT I-Cache with SECDED ECC, and RV64GC instruction decoder.

---

## 1. Modules in Scope
1. `rv_bpu.v`: 2048-entry tournament Gshare branch predictor, 12-bit GHR, 8-entry RAS.
2. `rv_icache.v`: 32KB 8-way VIPT I-cache, SECDED ECC protection, 8-beat AXI refill engine.
3. `rv_fetch.v`: Program counter generator, AXI-Lite AR/R read engine, redirect drain FSM.
4. `rv_decode.v`: RV64IMAFD+C and Zicsr decoder, immediate generator, RAW hazard detection.

---

## 2. Verification Tasks
- **Task 2.1: `rv_bpu`** — Roo Architect branch state transitions; Roo Code testbench; simulate; waveform; README update.
- **Task 2.2: `rv_icache`** — Roo Architect VIPT tag/set indexing, SECDED ECC 1-bit fix & 2-bit error, AXI burst refill; Roo Code testbench; simulate; waveform; README update.
- **Task 2.3: `rv_fetch`** — Roo Architect PC increment, branch redirect, pipeline stall, redirect drain FSM; Roo Code testbench; simulate; waveform; README update.
- **Task 2.4: `rv_decode`** — Roo Architect full opcode decoding, immediate generation, CSR decodes, load-use hazard stall generation; Roo Code testbench; simulate; waveform; README update.

---

## 3. Acceptance Criteria
- [x] 100% assertions pass across all 4 module testbenches.
- [x] VCD waveforms rendered to PNG and stored in `docs/waveforms/` and module folders.
- [x] Each module's `README.md` enriched with verified test matrices and simulation logs.
- [x] Logged to `progress.txt` and committed to git.

