# Phase 7: Coherent Memory Subsystem & DDR4 SDRAM Controller — Plan

> **Phase Goal:** Verify the 180nm SRAM macros, L2 cache hierarchy (tag array, data array, controller, top, snoop filter), and full DDR4 SDRAM controller subsystem (scheduler, PHY interface, top).

---

## 1. Modules in Scope
1. `sram_32x64_180nm.v`: 64x32 SRAM behavioral macro with byte masking and write-first behavior.
2. `sram_512kx8_180nm.v`: 512KB SRAM behavioral macro with active-low chip/write enables.
3. `l2_tag_array.v`: Register-based tag storage (64 sets, 28-bit tag + valid).
4. `l2_data_array.v`: 2-bank data array wrapping `sram_32x64_180nm` macros with registered output.
5. `l2_snoop_filter.v`: MESI directory coherence filter tracking 4 cores across 64 sets × 32 ways.
6. `l2_cache_ctrl.v`: Direct-mapped write-through L2 cache controller FSM with AXI-Lite and AXI master interfaces.
7. `l2_cache_top.v`: Integrated 2MB L2 cache top combining controller, snoop filter, and 32x SRAM macros.
8. `ddr_scheduler.v`: Open-row policy DDR4 command sequencer managing ACT/CAS/PRE and timing constraints.
9. `ddr_phy_if.v`: DFI 4.0 to DDR4 physical pin interface with deterministic in-model storage.
10. `ddr_ctrl_top.v`: Top-level DDR4 memory controller with bank interleaving and auto-refresh manager.

---

## 2. Verification Tasks
- [x] **Task 7.1: `sram_32x64_180nm`** — Byte mask write, sequential sweep, chip select disable.
- [x] **Task 7.2: `sram_512kx8_180nm`** — Boundary address write/read, sequential sweep, CEN gating, write-first.
- [x] **Task 7.3: `l2_tag_array`** — Reset clearing, tag write, combinational lookup.
- [x] **Task 7.4: `l2_data_array`** — Dual-bank selection, byte write masking, 1-cycle registered read output.
- [x] **Task 7.5: `l2_snoop_filter`** — Directory lookup, MESI state tracking, snoop dispatch, acknowledge resolve.
- [x] **Task 7.6: `l2_cache_ctrl`** — FSM transitions, AXI slave/master handshaking, hit/miss flow.
- [x] **Task 7.7: `l2_cache_top`** — Integrated cache subsystem, multi-bank SRAM access, coherence snoop ports.
- [x] **Task 7.8: `ddr_scheduler`** — Open-row tracking across 32 bank slots, timing delay adherence, DFI signaling.
- [x] **Task 7.9: `ddr_phy_if`** — DFI-to-DDR pin translation, deterministic storage model, 2-cycle CAS latency.
- [x] **Task 7.10: `ddr_ctrl_top`** — AXI4 slave interface, bank interleaving, auto-refresh sequencing.

---

## 3. Acceptance Criteria
- [x] 100% assertions pass across all 10 module testbenches.
- [x] VCD waveforms rendered to PNG and stored in `docs/waveforms/` and module folders.
- [x] Each module's `README.md` enriched with verified test matrices and simulation logs.
- [x] Logged to `progress.txt` and committed to git.
