# SMVDU TITAN-X: Comprehensive 7-Phase ASIC Verification Framework

Welcome to the central verification repository for the **SMVDU TITAN-X 64-bit Heterogeneous Multi-Core SoC**.

This directory contains the complete source code, testbenches, assertions, formal models, UVM verification components, coverage databases, and performance benchmarks that validate the TITAN-X SoC against strict tape-out sign-off criteria on **SCL 180nm CMOS**.

---

## 7-Phase Verification Roadmap & Directory Index

| Phase | Directory | Description | Artifacts & Documentation | Status |
| :---: | :--- | :--- | :--- | :---: |
| **Phase 1** | Root / [`../prd.json`](../prd.json) | Multi-Agent GSD Blueprinting, module dependency hierarchy, 5 architectural tiers | [`../prd.json`](../prd.json) | ✅ **100% PASS** |
| **Phase 2** | Root / [`../synth_rv_core.log`](../synth_rv_core.log) | Verilator clean lint, Yosys ABC logic synthesis (79,755 standard cells) | Synthesis netlists, logs | ✅ **100% PASS** |
| **Phase 3** | [`formal/`](formal/) | SMT-BMC Bounded Model Checking with Z3 (RegFile, Fetch, Snoop Filter, Crossbar) | [`formal/README.md`](formal/README.md), SVA files | ✅ **100% PROVED** |
| **Phase 4** | [`uvm_env/`](uvm_env/) | Constrained-Random AXI4 Verification Environment (100 random transactions, TLM Scoreboard) | [`uvm_env/README.md`](uvm_env/README.md), VCD trace | ✅ **100% PASS** |
| **Phase 5** | [`coverage/`](coverage/) | Power-aware clock gating (180nm `ICGX4`) and functional line coverage (>77.4%) | [`coverage/README.md`](coverage/README.md), coverage DB | ✅ **100% PASS** |
| **Phase 6** | [`performance/`](performance/) | Multi-Core Performance Verification & Firmware Boot (Harts 0..4, Matrix, Fib, Crypto, Divide, UART) | [`performance/README.md`](performance/README.md), waveforms | ✅ **100% PASS** |
| **Phase 7** | Root / [`signoff_report.md`](signoff_report.md) | CodeRabbit Architectural Sign-Off, CDC self-healing, live GTKWave telemetry | [`signoff_report.md`](signoff_report.md), captures | ✅ **100% SIGNED-OFF** |

---

## Master Sign-Off Telemetry Waveforms

All waveforms are captured directly from live simulation executions on the workstation X11 display (`DISPLAY=:0`):

### 1. Multi-Core Performance Verification Waveform
![Multi-Core Performance GTKWave](../verification_waves/titan_x_performance_gtkwave.png)
*Waveform trace showing synchronous boot of 5 CPU cores from BootROM `0x1000_0000`, parallel execution of matrix, fibonacci, crypto, and division routines, and DDR4 / UART telemetry.*

### 2. UVM Constrained-Random AXI4 Interconnect Waveform
![UVM AXI4 Crossbar GTKWave](../verification_waves/uvm_titan_x_gtkwave.png)
*Waveform trace showing 100 constrained-random AXI write and read transactions across multi-slave apertures with zero protocol violations.*

---

## Running Verification Suites

### 1. Run Complete Top-Level SoC Testbench (29/29 checks)
```bash
iverilog -g2012 -I includes -f fresh_soc_filelist.f -o tb_top_sim && vvp tb_top_sim
```

### 2. Run Multi-Core Performance Verification (5 CPU Cores)
```bash
sed -e '/top\/titan_x_top\/tb_fresh_titan_x_top.v/d' fresh_soc_filelist.f > perf_filelist.f
echo "verification/performance/tb_titan_x_performance.v" >> perf_filelist.f
iverilog -g2012 -I includes -f perf_filelist.f -o tb_perf_sim && vvp tb_perf_sim
```

### 3. Run UVM Constrained-Random Suite
```bash
iverilog -g2012 -I verification/uvm_env/pkg -I verification/uvm_env/agents/axi_agent \
         -I verification/uvm_env/scoreboards -I verification/uvm_env/env \
         verification/uvm_env/pkg/uvm_types_pkg.sv interconnect/axi4_crossbar/axi4_crossbar.v \
         verification/uvm_env/agents/axi_agent/axi_driver.sv verification/uvm_env/agents/axi_agent/axi_monitor.sv \
         verification/uvm_env/scoreboards/titan_x_scoreboard.sv verification/uvm_env/env/titan_x_env.sv \
         verification/uvm_env/tests/tb_uvm_top.sv -o tb_uvm_sim && vvp tb_uvm_sim
```

### 4. Run Power-Aware Clock Gating Testbench
```bash
iverilog -g2012 -I includes includes/stdcell_stubs.v verification/coverage/tb_power_aware_clock_gate.v -o tb_cg_sim && vvp tb_cg_sim
```

For complete sign-off audit records, refer to [`signoff_report.md`](signoff_report.md).
