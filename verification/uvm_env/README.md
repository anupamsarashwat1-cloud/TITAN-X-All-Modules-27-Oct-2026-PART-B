# Phase 4: UVM Architecture for Constrained-Random Verification

This directory contains the modular Universal Verification Methodology (UVM) style transaction-level modeling (TLM) environment engineered for the SMVDU TITAN-X AXI4 Interconnect and multi-master fabric.

---

## UVM Architecture Overview

The UVM verification architecture is organized into modular verification layers:

```
verification/uvm_env/
├── README.md                           # This UVM environment documentation
├── pkg/
│   └── uvm_types_pkg.sv                # Transaction items, burst types, address apertures
├── agents/
│   └── axi_agent/
│       ├── axi_driver.sv               # Cycle-accurate AXI4 AW, W, B, AR, R handshake driver
│       └── axi_monitor.sv              # Protocol monitor with timing stability checks
├── scoreboards/
│   └── titan_x_scoreboard.sv           # Golden reference model tracking writes & read matches
├── env/
│   └── titan_x_env.sv                  # Environment orchestrator binding agent to scoreboard
└── tests/
    └── tb_uvm_top.sv                   # Top-level testbench with 100 constrained-random iterations
```

---

## Verification Strategy & Results

The top-level UVM testbench (`tb_uvm_top.sv`) generates 100 constrained-random transactions spanning:
1. **Address Constraints:** Random address generation mapped across active crossbar slaves:
   - Slave 0: DDR4 memory controller (`0x8000_0000 - 0x8FFF_FFFF`)
   - Slave 1: AHB/APB bridge window (`0x4000_0000 - 0x4FFF_FFFF`)
   - Slave 2: Boot ROM (`0x1000_0000 - 0x1FFF_FFFF`)
2. **Transaction Types:** Randomized write-before-read and read-after-write hazards with random byte strobes (`wstrb`) and burst transaction IDs.
3. **Scoreboard Integrity:** The scoreboard validates that every read data beat returns the exact byte contents previously written, accounting for partial byte updates and lane steering.

### Simulation Transcript
```text
==============================================
   TITAN-X UVM CONSTRAINED-RANDOM TESTBENCH   
==============================================
[UVM TEST] System Reset Deasserted at 25000

[UVM ENV] Starting Constrained-Random Stimulus Run (100 iterations)...
[UVM ENV] Progress: 50 / 100 transactions completed cleanly
[UVM ENV] Progress: 100 / 100 transactions completed cleanly
[UVM ENV] Completed all 100 transactions successfully.
--- [AXI_MONITOR TELEMETRY REPORT] ---
Total Write Transactions Observed: 100
Total Read Transactions Observed:  100
Total Protocol Errors Detected:    0
--------------------------------------

==============================================
       TITAN-X UVM SCOREBOARD REPORT         
==============================================
Total Reference Writes Recorded: 100
Total Read Verifications Passed: 100
Total Read Data Mismatches:      0
STATUS: >>> SCOREBOARD VERIFICATION PASSED <<<
==============================================

==============================================
>>> ALL UVM CONSTRAINED-RANDOM TESTS PASSED <<<
==============================================
```

---

## Authentic Desktop Waveform (GTKWave)

The simulation generates a cycle-by-cycle VCD trace (`verification_waves/uvm_titan_x.vcd`, 458 KB). The GTKWave waveform screenshot was recorded directly from the workstation X11 desktop (`DISPLAY=:0`):

![UVM Interconnect GTKWave](../../verification_waves/uvm_titan_x_gtkwave.png)
*Waveform trace showing randomized burst handshakes across AW, W, B, AR, and R channels, showing zero contention and clean scoreboard handshakes.*

---

## Running the UVM Simulation

```bash
iverilog -g2012 -I verification/uvm_env/pkg -I verification/uvm_env/agents/axi_agent \
         -I verification/uvm_env/scoreboards -I verification/uvm_env/env \
         verification/uvm_env/pkg/uvm_types_pkg.sv interconnect/axi4_crossbar/axi4_crossbar.v \
         verification/uvm_env/agents/axi_agent/axi_driver.sv verification/uvm_env/agents/axi_agent/axi_monitor.sv \
         verification/uvm_env/scoreboards/titan_x_scoreboard.sv verification/uvm_env/env/titan_x_env.sv \
         verification/uvm_env/tests/tb_uvm_top.sv -o tb_uvm_sim && vvp tb_uvm_sim
```
