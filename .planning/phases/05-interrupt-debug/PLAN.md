# Phase 5: Interrupt Architecture, Debug & Security Monitor — Plan

> **Phase Goal:** Exhaustively verify the multi-core Core-Local Interruptor (CLINT), Platform-Level Interrupt Controller (PLIC), IEEE 1149.1 JTAG Debug Module, and dedicated Security Monitor Core.

---

## 1. Modules in Scope
1. `clint.v`: Core-Local Interruptor (CLINT) providing 5× msip IPI registers and 64-bit mtime/mtimecmp real-time timer comparators.
2. `plic.v`: Platform-Level Interrupt Controller (PLIC) supporting up to 186 interrupt sources, 10 priority contexts, threshold filtering, and atomic claim/complete protocol.
3. `rv_debug.v`: RISC-V Debug Module (DM) conforming to RISC-V External Debug Support v0.13, JTAG DTM TAP controller, abstract command execution, and halt/resume run control.
4. `rv_monitor_core.v`: Auxiliary RV64IMAC security processor monitoring bus transactions, integrity faults, and tamper events.

---

## 2. Verification Tasks
- [x] **Task 5.1: `clint`** — Timer increment, mtimecmp comparator matching, timer interrupt pulse generation, software IPI write/read.
- [x] **Task 5.2: `plic`** — Gateway latching, priority arbitration, threshold comparison, atomic claim and completion sequence.
- [x] **Task 5.3: `rv_debug`** — JTAG TAP state machine transitions, DMI read/write operations, core halt/resume control.
- [x] **Task 5.4: `rv_monitor_core`** — Heartbeat execution, telemetry bus monitoring, anomaly detection and alert signaling.

---

## 3. Acceptance Criteria
- [x] 100% assertions pass across all 4 module testbenches.
- [x] VCD waveforms rendered to PNG and stored in `docs/waveforms/` and module folders.
- [x] Each module's `README.md` enriched with verified test matrices and simulation logs.
- [x] Logged to `progress.txt` and committed to git.
