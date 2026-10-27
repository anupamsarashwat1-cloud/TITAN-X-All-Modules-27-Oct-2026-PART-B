# PRD: SMVDU TITAN-X SoC — Module-Wise Verification & Hardening Specification

> **Contract:** Immutable task specification for Ralph Loop execution.  
> **Execution Strategy:** Roo Code Multi-Mode (Architect ➔ Code ➔ Debug) + Open-Source Toolchain (`iverilog`, `vvp`, GTKWave, `waves.py`) + README Evidence.

---

## Phase 1: Foundation & Leaf Standard Cells
## Task 1: Verify `stdcell_stubs.v` (BUFX4, CLKBUF Behavioral Models)
## Task 2: Verify `buf_macros.v` (SCL 180nm BUFX4 High-Drive Buffer Wrapper)
## Task 3: Verify `reset_sync.v` (Async Assert, Synchronous Deassert Reset Synchronizer)
## Task 4: Verify `cdc_sync.v` (Multi-Flop Clock Domain Crossing Synchronizer)
## Task 5: Verify `fifo_sync.v` (Single-Clock Parameterized Synchronous FIFO)
## Task 6: Verify `fifo_async.v` (Dual-Clock Gray-Pointer Asynchronous FIFO)

---

## Phase 2: CPU Frontend & Branch Prediction Subsystem
## Task 7: Verify `rv_bpu.v` (Tournament Gshare BPU, 2K BHT, 12-bit GHR, 8-entry RAS)
## Task 8: Verify `rv_icache.v` (32KB 8-Way VIPT I-Cache, SECDED ECC, 8-Beat AXI Refill)
## Task 9: Verify `rv_fetch.v` (PC Generator, AXI-Lite Read Master, Redirect Drain FSM)
## Task 10: Verify `rv_decode.v` (RV64GC + Zicsr Decoder, Imm Gen, Hazard Interlocks)

---

## Phase 3: CPU Backend Execution, Registers & FPU
## Task 11: Verify `rv_regfile.v` (32×64-bit Integer GPRs, 2R1W, x0 Constant Zero)
## Task 12: Verify `rv_csr.v` (M/S/U Mode CSRs, Trap Vectoring, Exception Registers)
## Task 13: Verify `rv_execute.v` (64-bit ALU, 3-cyc Radix-4 MUL, 64-cyc DIV, Branch Comparator, Forwarding Muxes)
## Task 14: Verify `rv_mem.v` (Load Sign/Zero Extend, Store Byte-Enables, Atomic AMO Reservations)
## Task 15: Verify `rv_writeback.v` (Retirement Multiplexer, Writeback Forwarding Driver)
## Task 16: Verify `rv_fpu.v` (IEEE 754-2008 Double/Single FPU, FMADD, FSQRT, Conversions)

---

## Phase 4: CPU Virtual Memory, MMU & PMP Subsystem
## Task 17: Verify `rv_tlb.v` (64-Entry Fully-Associative TLB, 16-bit ASID, SFENCE.VMA Invalidation)
## Task 18: Verify `rv_ptw.v` (3-Level Hardware Page Table Walker: L2➔L1➔L0 for 4KB, 2MB, 1GB Pages)
## Task 19: Verify `rv_pmp.v` (16 PMP Protection Regions: TOR, NAPOT, NA4 across M/S/U Modes)
## Task 20: Verify `rv_mmu.v` (Sv39 MMU Top, satp.MODE Switcher, Core Translation Wrapper)

---

## Phase 5: Interrupt Architecture, Debug & Security Monitor
## Task 21: Verify `clint.v` (Core-Local Interruptor: 5× msip IPIs, 64-bit mtime/mtimecmp Comparators)
## Task 22: Verify `plic.v` (Platform-Level Interrupt Controller: 186 Sources, 10 Contexts, Atomic Claim/Complete)
## Task 23: Verify `rv_debug.v` (JTAG DTM TAP FSM & Debug Module Run-Control Registers)
## Task 24: Verify `rv_monitor_core.v` (RV64IMAC Security Processor, M8 Read, M9 Write Telemetry)

---

## Phase 6: Single-Core Full Pipeline Integration & Compliance Suite
## Task 25: Verify `rv_core_top.v` Integration across 6 Test Vector Suites:
  - Base RV64I Operations (`tb_imem.hex`)
  - Official RISC-V Compliance Suite (`tb_compliance_imem.hex`)
  - CSR Instructions & Privilege Transitions (`tb_csr_imem.hex`)
  - External, Timer & Software Interrupt Traps (`tb_irq_imem.hex`)
  - M-Extension Multiplications & Divisions (`tb_mext_imem.hex`)
  - 32-bit Word Operations & Sign-Extensions (`tb_wops_imem.hex`)

---

## Phase 7: Coherent Memory Subsystem & DDR4 SDRAM Controller
## Task 26: Verify `sram_32x64_180nm.v` (32×64 Foundry SRAM Macro)
## Task 27: Verify `sram_512kx8_180nm.v` (512K×8 Foundry SRAM Macro)
## Task 28: Verify `l2_tag_array.v` (2048-Set × 16-Way Tag Array, Parity, MESI State Bits)
## Task 29: Verify `l2_data_array.v` (4-Bank Interleaved SRAM Arrays, 2MB Capacity)
## Task 30: Verify `l2_snoop_filter.v` (Directory Coherence Tracker, Sharers Bitmap, Invalidation/Writeback)
## Task 31: Verify `l2_cache_ctrl.v` (L2 Hit/Miss FSM, Line Fill, Dirty Eviction Buffers)
## Task 32: Verify `l2_cache_top.v` (2MB Unified L2 Cache Integration & Multi-Core Coherence)
## Task 33: Verify `ddr_scheduler.v` (8 Bank State Machines, Open-Page Policy, tRCD/tRP/tRAS Timing)
## Task 34: Verify `ddr_phy_if.v` (DFI 4.0 Interface, DQS Read/Write Gate Training, Delay Lines)
## Task 35: Verify `ddr_ctrl_top.v` (DDR4 SDRAM Controller Top Integration)

---

## Phase 8: Interconnect Fabric, Bridges & Traffic Arbiters
## Task 36: Verify `axi4_burst_to_lite.v` (Burst-to-Single-Beat Converter: INCR/WRAP Splitter)
## Task 37: Verify `mpu.v` (Interconnect MPU: 16 Regions, Master Access Checking, DECERR Firewall)
## Task 38: Verify `mmu_arbiter.v` (5-Way Round-Robin Arbiter for Multi-Core PTW Memory Reads)
## Task 39: Verify `qos_controller.v` (Dynamic QoS Throttling & Credit-Based Bandwidth Regulation)
## Task 40: Verify `ahb_to_apb.v` (AHB-Lite to APB Protocol Translator: Setup/Access Phases)
## Task 41: Verify `apb_bridge.v` (17-Channel APB Address Decoder & Read Data Mux)
## Task 42: Verify `axi4_to_ahb.v` (AXI4 to AHB-Lite Bus Protocol Converter)
## Task 43: Verify `axi4_crossbar.v` (15M × 9S Switched AXI4 Crossbar: Deadlock-Free Full Crossbar)

---

## Phase 9: Industrial Peripherals & Serial Communication
## Task 44: Verify `gpio_ctrl.v` (32-bit Bidirectional GPIO, Debounce, Edge/Level Interrupts)
## Task 45: Verify `rtc.v` (32.768 kHz Real-Time Clock, 64-bit Counter, 5× Comparators)
## Task 46: Verify `watchdog_timer.v` (Windowed Hardware Watchdog, Key Unlock, Reset Strobe)
## Task 47: Verify `uart_16550.v` (16550 UART, 16-byte FIFOs, Baud Generator, Loopback Mode)
## Task 48: Verify `spi_master.v` (SPI Master Modes 0–3, 4 Chip Selects, Clock Prescalers)
## Task 49: Verify `i2c_master.v` (I2C Master Standard/Fast Modes, 7/10-bit Addressing, SCL/SDA Glitch Filter)
## Task 50: Verify `can_controller.v` (Bosch CAN 2.0B Active Controller, Mailboxes, CRC-15 Filter)

---

## Phase 10: Hardware Security, Cryptography & Root-of-Trust
## Task 51: Verify `trng.v` (Ring-Oscillator Jitter Entropy with Von Neumann Debiasing)
## Task 52: Verify `drbg.v` (NIST SP 800-90A CTR-DRBG with AES-256 Block Cipher)
## Task 53: Verify `sha256_engine.v` (FIPS PUB 180-4 SHA-256 64-Round Hash Accelerator)
## Task 54: Verify `aes_engine.v` (AES-128/192/256 Symmetric Cipher Core: ECB, CBC, CTR)
## Task 55: Verify `ecdsa_engine.v` (SECP256R1 P-256 Elliptic Curve Point Multiplier & Signature Checker)
## Task 56: Verify `envm_ctrl.v` (128KB Embedded Non-Volatile Memory Flash Controller)
## Task 57: Verify `secure_boot.v` (Cryptographic Boot Validator & CPU Reset Release Gate)

---

## Phase 11: High-Speed Storage & Communication DMA Subsystem
## Task 58: Verify `gem_sgmii_pcs.v` (SGMII Physical Coding Sublayer: 8b/10b & Auto-Negotiation)
## Task 59: Verify `gem_ethernet.v` (10/100/1000 Mbps Ethernet MAC with Scatter-Gather DMA)
## Task 60: Verify `pcie_pipe_if.v` (PCIe PIPE 2.0 PHY Interface & Power State Handshakes)
## Task 61: Verify `pcie_top.v` (PCIe Gen2 x1 Controller, TLP Engine & DMA Transfers)
## Task 62: Verify `usb_otg.v` (USB 2.0 OTG Host/Device Controller with ULPI PHY & Endpoint DMA)
## Task 63: Verify `mmc_controller.v` (eMMC 5.1 / SD 3.0 Controller with HS200/HS400 DMA)
## Task 64: Verify `qspi_controller.v` (Quad-SPI Flash Controller with XIP Memory-Mapped Mode)

---

## Phase 12: High-Definition Video & Vision Pipeline
## Task 65: Verify `mipi_csi2_rx.v` (4-Lane MIPI CSI-2 D-PHY Receiver & Packet Deserializer)
## Task 66: Verify `isp_pipeline.v` (Hardware ISP: Bayer Demosaic, White Balance, Gamma LUT, 2D NR)
## Task 67: Verify `vdma.v` (Video DMA Triple-Buffered Framebuffer Engine in DDR4)
## Task 68: Verify `hdmi_ctrl.v` (HDMI 1.4 Video Timing Generator & TMDS 8b/10b Serialization)

---

## Phase 13: Full SoC Integration, Firmware Bring-Up & End-to-End System Boot
## Task 69: Verify `axi_rom.v` (Boot ROM Execution & AXI4 Read Latency)
## Task 70: Verify `titan_x_top.v` Full SoC Hardware Power-On Reset & Cryptographic Boot Release
## Task 71: Verify Firmware Bring-Up Execution (`start.S` ➔ `main.c` ➔ UART Output ➔ RAM Test ➔ Multi-Core Sync)
