# Phase 5: Power-Aware Clock Gating & Functional Coverage Analysis

This directory contains the power-aware clock gating testbench, SCL 180nm Integrated Clock Gating (`ICGX4`) cell models, and the Verilator C++ functional pipeline coverage harness for the SMVDU TITAN-X core.

---

## 1. Power-Aware Clock Gating Verification (`tb_power_aware_clock_gate.v`)

Clock gating is a primary low-power technique in modern ASIC designs. The TITAN-X SoC utilizes an active-low latch-based Integrated Clock Gating cell (`ICGX4`) defined in [`includes/stdcell_stubs.v`](../../includes/stdcell_stubs.v) to eliminate glitches on gated clock nets.

### Test Results
The testbench validates 4 operational states:
1. **Low-Power Idle Mode:** Clock is cleanly suppressed (`EN = 0`, 0 dynamic clock toggles).
2. **Active Execution Mode:** Clock is cleanly un-gated (`EN = 1`, 19 toggles observed).
3. **Scan / DFT Bypass Mode:** Test Enable overrides low-power mode (`TE = 1`, clock runs unconditionally).
4. **Dynamic Re-Gating Mode:** Returns immediately to sleep state without clock runt pulses or hazards.

```text
==============================================
   POWER-AWARE CLOCK-GATING VERIFICATION      
==============================================
[PASS] Test 1: Clock cleanly suppressed in low-power idle mode (0 dynamic power)
[PASS] Test 2: Clock un-gated cleanly during active execution (19 toggles)
[PASS] Test 3: Scan / DFT bypass verified (TE overrides EN)
[PASS] Test 4: Dynamic re-gating confirmed (sleep power state re-entered)
==============================================
>>> POWER-AWARE VERIFICATION PASSED (0 ERRORS) <<<
==============================================
```

---

## 2. Verilator Functional Pipeline Coverage Analysis

Using a custom C++ Verilator test driver ([`sim_main_coverage.cpp`](sim_main_coverage.cpp)), the 5-stage CPU pipeline (`rv_core_top.v`) was simulated over 1,000 randomized execution cycles with line and branch coverage tracking enabled.

### Coverage Summary

```
================================================================================
                       TITAN-X PIPELINE COVERAGE REPORT                         
================================================================================
 Pipeline Component       Coverage Points    Covered Points    Coverage %
--------------------------------------------------------------------------------
 rv_core_top (Spine)            152                128           84.2%
 rv_fetch (AXI-Lite)            204                168           82.4%
 rv_decode (RV64)               340                252           74.1%
 rv_execute (ALU/M-ext)         228                184           80.7%
 rv_mem (LSU Lanes)              96                 72           75.0%
 rv_writeback (Retire)           72                 58           80.6%
--------------------------------------------------------------------------------
 TOTAL PIPELINE                1,092               862           78.9%
================================================================================
 Verdict: Met Tape-Out Baseline (>75% Pipeline Branch & Line Coverage)
================================================================================
```

Coverage database is stored in binary format in [`rv_core_coverage.dat`](rv_core_coverage.dat).

---

## Running Coverage Scripts

```bash
# 1. Run power-aware clock gating testbench
iverilog -g2012 -I includes includes/stdcell_stubs.v verification/coverage/tb_power_aware_clock_gate.v -o tb_cg_sim && vvp tb_cg_sim

# 2. View annotated coverage
verilator_coverage --annotate-min 1 --annotate verification/coverage/annotated verification/coverage/rv_core_coverage.dat
```

For the comprehensive coverage report, refer to [`coverage_report.md`](coverage_report.md).
