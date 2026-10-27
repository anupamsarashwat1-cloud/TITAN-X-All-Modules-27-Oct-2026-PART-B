# Phase 1: Foundation & Common Standard Cell Modules — Plan

> **Phase Goal:** Exhaustively verify the foundational standard cell wrappers, clock synchronizers, reset distribution logic, and asynchronous/synchronous FIFOs that underpin the entire TITAN-X SoC.

---

## 1. Phase Context & Scope

The foundation tier provides the physical cell wrappers, metastablity filters, and clock domain crossing queues that every higher-level subsystem (CPUs, Interconnect, Peripherals, Video) depends upon:
1. `stdcell_stubs.v`: Physical simulation behavioral models for SCL 180nm foundry primitives (`BUFX4`, `CLKBUF`).
2. `buf_macros.v`: 4x drive-strength buffer macro used in high-fanout pipeline branch flushes.
3. `reset_sync.v`: 2-FF asynchronous assertion, synchronous deassertion reset synchronizer.
4. `cdc_sync.v`: Multi-stage flip-flop synchronizer across disparate clock domains.
5. `fifo_sync.v`: Parameterized synchronous FIFO with programmable status flags.
6. `fifo_async.v`: Dual-clock asynchronous FIFO with Gray-code pointer synchronization.

---

## 2. Wave-Based Execution Strategy

### Wave 1: Physical Cells & Synchronizers (Parallel)
- **Task 1.1: `stdcell_stubs`** — Roo Architect timing & propagation checks; Roo Code authoring; simulation; waveform capture.
- **Task 1.2: `buf_macros` (`BUFX4`)** — Roo Architect high-fanout propagation test; Roo Code authoring; simulation; waveform capture.
- **Task 1.3: `reset_sync`** — Roo Architect glitch immunity & sync release test; Roo Code authoring; simulation; waveform capture.
- **Task 1.4: `cdc_sync`** — Roo Architect metastability & toggle rate test; Roo Code authoring; simulation; waveform capture.

### Wave 2: Queues & Memory Buffers (Parallel)
- **Task 1.5: `fifo_sync`** — Roo Architect throughput, backpressure, almost-full/almost-empty flags; Roo Code authoring; simulation; waveform capture.
- **Task 1.6: `fifo_async`** — Roo Architect multi-clock domain testing under extreme frequency ratios (e.g. 100MHz wr_clk vs 25MHz rd_clk, and 25MHz wr_clk vs 100MHz rd_clk), burst fill/drain, Gray pointer continuity; Roo Code authoring; simulation; waveform capture.

---

## 3. Dedicated Verification Commands per Module

```bash
# Task 1.1: stdcell_stubs
iverilog -g2012 -Iincludes -o sim_stdcell.vvp includes/stdcell_stubs.v
vvp sim_stdcell.vvp
python3 scripts/waves.py tb_stdcell.vcd -o docs/waveforms/stdcell_waveform.png

# Task 1.2: buf_macros
iverilog -g2012 -Iincludes -o sim_bufx4.vvp common/BUFX4/buf_macros.v common/BUFX4/tb_buf_macros.v
vvp sim_bufx4.vvp
python3 scripts/waves.py tb_buf_macros.vcd -o docs/waveforms/bufx4_waveform.png

# Task 1.3: reset_sync
iverilog -g2012 -Iincludes -o sim_reset_sync.vvp common/reset_sync/reset_sync.v common/reset_sync/tb_reset_sync.v
vvp sim_reset_sync.vvp
python3 scripts/waves.py tb_reset_sync.vcd -o docs/waveforms/reset_sync_waveform.png

# Task 1.4: cdc_sync
iverilog -g2012 -Iincludes -o sim_cdc_sync.vvp common/cdc_sync/cdc_sync.v common/cdc_sync/tb_cdc_sync.v
vvp sim_cdc_sync.vvp
python3 scripts/waves.py tb_cdc_sync.vcd -o docs/waveforms/cdc_sync_waveform.png

# Task 1.5: fifo_sync
iverilog -g2012 -Iincludes -o sim_fifo_sync.vvp common/fifo_sync/fifo_sync.v common/fifo_sync/tb_fifo_sync.v
vvp sim_fifo_sync.vvp
python3 scripts/waves.py tb_fifo_sync.vcd -o docs/waveforms/fifo_sync_waveform.png

# Task 1.6: fifo_async
iverilog -g2012 -Iincludes -o sim_fifo_async.vvp common/fifo_async/fifo_async.v common/fifo_async/tb_fifo_async.v
vvp sim_fifo_async.vvp
python3 scripts/waves.py tb_fifo_async.vcd -o docs/waveforms/fifo_async_waveform.png
```

---

## 4. Acceptance Criteria & Nyquist Verification Gates
- [ ] 100% assertions pass across all 6 testbenches with zero simulation runtime errors.
- [ ] Zero 'x' or 'z' states observed in output signal waveforms during active operational phases.
- [ ] Clean digital waveform PNGs generated using `scripts/waves.py` and saved to module directories.
- [ ] Each module's `README.md` updated with the verified test matrix, simulation logs, and embedded waveform images.
- [ ] Atomic git commit recorded for each verified module.
- [ ] Log entry appended to `progress.txt`.
