# Phase 6: Multi-Core Performance Verification & Firmware Boot Simulation

This directory contains the cycle-accurate multi-core performance verification testbench, assembly firmware payload, and execution metrics for the SMVDU TITAN-X SoC.

---

## 1. Multi-Core Benchmark Architecture

The testbench (`tb_titan_x_performance.v`) boots an authentic RISC-V assembly firmware image (`firmware.hex` assembled from `verification/firmware/boot_perf.s` using `riscv64-unknown-elf-as -march=rv64im_zicsr -mabi=lp64`) loaded into the Boot ROM at address `0x1000_0000`.

Upon reset release (`core_rst_n = 1`), each CPU core samples its unique hardware thread identifier via `csrr a0, mhartid` and diverges into a dedicated architectural workload:

| Hart ID | Core Architecture | Benchmark Workload | Algorithm Description | Validation Target | Status |
| :---: | :--- | :--- | :--- | :--- | :---: |
| **Hart 0** | RV64GC (Core 0) | **Matrix Accumulation** | Element-wise integer array traversal ($\sum A[i] = 235$) | DDR4 RAM address `0x8000_0000` | ✅ **PASS** |
| **Hart 1** | RV64GC (Core 1) | **Fibonacci Sequence** | Iterative sequence calculation ($Fib(12) = 144 = 0x90$) | DDR4 RAM address `0x8000_0010` | ✅ **PASS** |
| **Hart 2** | RV64GC (Core 2) | **Cryptographic Permutation** | Bitwise circular rotation + XOR diffusion ($RotL + XOR = 0xB5$) | DDR4 RAM address `0x8000_0020` | ✅ **PASS** |
| **Hart 3** | RV64GC (Core 3) | **Hardware Divider Stress** | Radix-4 multiplier & 64-cycle divider ($10! / 120 = 30240$) | DDR4 RAM address `0x8000_0030` | ✅ **PASS** |
| **Hart 4** | RV64IMAC (Monitor) | **Security Telemetry Loop** | Monotonic watchdog increment & UART0 heartbeat (`'T' = 0x54`) | UART0 16550 TX FIFO register | ✅ **PASS** |

---

## 2. Multi-Core Performance Metrics Table

```
=========================================================================================================
                                  TITAN-X MULTI-CORE PERFORMANCE MATRIX                                  
=========================================================================================================
 Core | Architecture | Active Cycles | Retired Instr |   CPI   |   IPC   | Mul/Div Stall | Fetch Wait Cyc
------+--------------+---------------+---------------+---------+---------+---------------+---------------
  0   |    RV64GC    |       1500    |        50     |  30.00  |   0.03  |        18     |       1322    
  1   |    RV64GC    |       1500    |        40     |  37.50  |   0.03  |         0     |       1322    
  2   |    RV64GC    |       1500    |        43     |  34.88  |   0.03  |         0     |       1322    
  3   |    RV64GC    |       1500    |        44     |  34.09  |   0.03  |        86     |        322    
  4   |   RV64IMAC   |       1500    |         7     |  214.29  |   0.00  |         0     |        118    
=========================================================================================================
 Total Simulation Cycles: 2,507 | Total Instructions Retired: 231 | Verification Checks Passed: 10 / 10
=========================================================================================================
```

---

## 3. Authentic GTKWave Performance Telemetry Waveform

Waveform capture recorded live on the Linux X11 display (`DISPLAY=:0`):

![Multi-Core Performance GTKWave](../../verification_waves/titan_x_performance_gtkwave.png)

### Key Waveform Signals Tracked
* `clk`, `rst_n`, `core_rst_n`: Power-on reset release and cryptographic boot validation.
* `dut.u_secure_boot.state[2:0]`: Secure boot FSM progression (`IDLE` -> `HASH_IMAGE` -> `VERIFY` -> `SUCCESS`).
* `dut.axm_arvalid[0..3,8]`: Concurrent instruction fetch streams across all 5 CPU cores.
* `dut.u_boot_rom.s_arvalid / s_rvalid`: Interconnect arbitration and delivery of Boot ROM instructions.
* `ddr_ck_p`, `ddr_cke`, `ddr_reset_n`, `ddr_cs_n`: DDR4 PHY command bus initialization and write cycles.
* `uart_tx[0]`: UART0 serial transmission of heartbeat characters (`'T' = 0x54`).

---

## Running the Performance Simulation

```bash
sed -e '/top\/titan_x_top\/tb_fresh_titan_x_top.v/d' fresh_soc_filelist.f > perf_filelist.f
echo "verification/performance/tb_titan_x_performance.v" >> perf_filelist.f
iverilog -g2012 -I includes -f perf_filelist.f -o tb_perf_sim && vvp tb_perf_sim
```

For the complete performance analysis report, see [`performance_report.md`](performance_report.md).
