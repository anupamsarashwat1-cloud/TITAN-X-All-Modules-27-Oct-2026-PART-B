# Roadmap: SMVDU TITAN-X SoC Verification

## Milestones
- **M1: Foundation & Leaf Standard Cells (Phase 1)**
- **M2: CPU Core Subsystem Verification (Phases 2 - 6)**
- **M3: Coherent Memory & Interconnect Fabric (Phases 7 - 8)**
- **M4: Industrial Peripherals, Security & Storage (Phases 9 - 11)**
- **M5: Multimedia Vision Pipeline (Phase 12)**
- **M6: Full SoC Integration, Firmware Bring-Up & Linux Readiness (Phase 13)**

---

## Phase Details

### Phase 1: Foundation & Common Standard Cell Modules (6 Modules)
- **Scope:** `stdcell_stubs`, `buf_macros` (`BUFX4`), `reset_sync`, `cdc_sync`, `fifo_sync`, `fifo_async`.
- **Goals:** Verify clock domain crossings, Gray pointer async FIFO under extreme clock phase skews, sync FIFO full/empty boundaries, reset deassertion synchronizer, and high-drive buffer propagation.
- **Exit Criteria:** 100% assertions pass, zero metastability hazards, waveforms generated, READMEs updated.

### Phase 2: CPU Frontend & Branch Prediction Subsystem (4 Modules)
- **Scope:** `rv_bpu`, `rv_icache`, `rv_fetch`, `rv_decode`.
- **Goals:** Verify Gshare BHT/GHR saturating counters, RAS push/pop recursion, VIPT I-Cache SECDED ECC single-bit correction and multi-bit detection, AXI-Lite 8-beat line refills, PC increment/redirect drain FSM, and full instruction immediate/control decoding.
- **Exit Criteria:** Full decode coverage across RV64GC instructions, BPU accuracy validation, zero stale instruction leaks on branch mispredictions.

### Phase 3: CPU Backend Arithmetic, Registers & Floating-Point Unit (6 Modules)
- **Scope:** `rv_regfile`, `rv_csr`, `rv_execute`, `rv_mem`, `rv_writeback`, `rv_fpu`.
- **Goals:** Verify 64-bit ALU operations, Radix-4 3-cycle multiplier, 64-cycle restoring divider stalls, operand forwarding muxes (MEM➔EX, WB➔EX, WB➔DE), load sign/zero-extensions, store byte-lane enables, CSR trap vectoring, GPR dual-read/single-write (`x0=0`), and IEEE 754 double/single-precision FPU operations (FMADD, FSQRT, conversions).
- **Exit Criteria:** 100% arithmetic accuracy against reference C models, zero pipeline RAW hazard stalls with forwarding.

### Phase 4: CPU Virtual Memory, MMU, TLB, Page Table Walker & PMP (4 Modules)
- **Scope:** `rv_tlb`, `rv_ptw`, `rv_pmp`, `rv_mmu`.
- **Goals:** Verify 64-entry fully-associative TLB ASID filtering, `SFENCE.VMA` line and global invalidations, 3-level hardware Page Table Walk (L2➔L1➔L0) for 4KB, 2MB, and 1GB pages, 16 PMP regions across TOR/NAPOT/NA4 modes in Machine, Supervisor, and User modes.
- **Exit Criteria:** Autonomous PTW refill with zero software intervention, 100% access fault detection on unauthorized accesses.

### Phase 5: Interrupt Architecture, Debug & Security Monitor Subsystem (4 Modules)
- **Scope:** `clint`, `plic`, `rv_debug`, `rv_monitor_core`.
- **Goals:** Verify CLINT 64-bit `mtime` timer comparisons and `msip` software IPIs, PLIC 186-source prioritization and atomic Claim/Complete handshakes across 10 contexts, JTAG DTM TAP FSM and DM run-control registers (halt, resume, single-step), and monitor core telemetry logging.
- **Exit Criteria:** Zero race conditions during concurrent interrupt claims, cycle-accurate debug halting and register inspection.

### Phase 6: Single-Core Full Pipeline Integration & Compliance Suite (Core Top Integration)
- **Scope:** `rv_core_top` executing base RV64I, RISC-V Compliance suite, CSR suite, IRQ handling suite, M-extension suite, and Word Operations suite.
- **Goals:** Run 30 memory test vectors and verify architectural registers, memory addresses, and data against golden `.mem` traces.
- **Exit Criteria:** 100% pass across all 6 test suites, zero register state mismatches.

### Phase 7: Coherent Memory Subsystem & DDR4 SDRAM Controller (10 Modules)
- **Scope:** `sram_32x64_180nm`, `sram_512kx8_180nm`, `l2_tag_array`, `l2_data_array`, `l2_snoop_filter`, `l2_cache_ctrl`, `l2_cache_top`, `ddr_scheduler`, `ddr_phy_if`, `ddr_ctrl_top`.
- **Goals:** Verify 2MB L2 cache hit/miss FSM, 4-bank SRAM interleaving, MOESI/MESI snoop directory tracking and dirty writebacks, DDR4 command scheduler 8-bank state machines ($t_{RCD}$, $t_{RP}$, $t_{RAS}$), and DFI 4.0 PHY leveling.
- **Exit Criteria:** Complete multi-core memory coherence without data corruption under concurrent load/store thrashing.

### Phase 8: Interconnect Fabric, Bridges & Traffic Arbiters (8 Modules)
- **Scope:** `axi4_burst_to_lite`, `mpu`, `mmu_arbiter`, `qos_controller`, `ahb_to_apb`, `apb_bridge`, `axi4_to_ahb`, `axi4_crossbar`.
- **Goals:** Verify 15M×9S concurrent crossbar routing without deadlock, burst-to-lite fragmentation, MPU DECERR firewalls, QoS bandwidth throttling on DMA streams, and two-stage AXI4➔AHB➔APB bridge latency.
- **Exit Criteria:** Zero deadlock under all 15 masters competing, accurate peripheral decoding across all 17 APB addresses.

### Phase 9: Industrial Peripherals & Serial Communication (7 Modules)
- **Scope:** `gpio_ctrl`, `rtc`, `watchdog_timer`, `uart_16550`, `spi_master`, `i2c_master`, `can_controller`.
- **Goals:** Verify 5× UART TX/RX FIFOs and baud divisors, SPI Modes 0–3, I2C 100k/400k bit timings, 32-bit GPIO edge/level interrupts, windowed watchdog lock keys and reset triggers, and CAN 2.0B message filtering.
- **Exit Criteria:** 100% loopback and frame transmission validation across all peripheral interfaces.

### Phase 10: Hardware Security, Cryptography & Root-of-Trust (4 Modules)
- **Scope:** `trng`, `drbg`, `sha256_engine`, `aes_engine`, `ecdsa_engine`, `envm_ctrl`, `secure_boot`.
- **Goals:** Verify TRNG ring-oscillator entropy debiasing, CTR-DRBG NIST SP 800-90A test vectors, AES-128/192/256 cipher modes, SHA-256 64-round compression, ECDSA P-256 point multiplication, and Secure Boot image verification gating `core_rst_n`.
- **Exit Criteria:** 100% cryptographic test vector compliance against NIST CAVP golden vectors, tamper containment verified.

### Phase 11: High-Speed Storage & Communication DMA Subsystem (5 Modules)
- **Scope:** `gem_sgmii_pcs`, `gem_ethernet`, `pcie_pipe_if`, `pcie_top`, `usb_otg`, `mmc_controller`, `qspi_controller`.
- **Goals:** Verify Gigabit Ethernet scatter-gather DMA descriptor parsing, PCIe Gen2 x1 TLP processing, USB 2.0 OTG endpoint transfers, eMMC HS200/HS400 DMA blocks, and QSPI XIP cache fetches.
- **Exit Criteria:** Full DMA packet throughput without memory buffer overflows or descriptor corruption.

### Phase 12: High-Definition Video & Vision Pipeline (4 Modules)
- **Scope:** `mipi_csi2_rx`, `isp_pipeline`, `vdma`, `hdmi_ctrl`.
- **Goals:** Verify 4-lane MIPI D-PHY deserialization, ISP Bayer CFA demosaicing, auto white-balance, gamma LUT, VDMA triple-buffered framebuffer swapping in DDR4, and HDMI 1.4 TMDS 8b/10b 1080p60 serialization.
- **Exit Criteria:** End-to-end pixel flow from MIPI packet input to TMDS differential output without dropped frames.

### Phase 13: Full SoC Integration, Firmware Bring-Up & End-to-End System Boot (2 Modules + Top)
- **Scope:** `axi_rom`, `titan_x_top`, firmware execution (`firmware/main.c`), peripheral bring-up, DDR4 memory test, interrupt servicing.
- **Goals:** Full SoC power-on reset ➔ Secure Boot SHA-256 check ➔ `core_rst_n` release ➔ Boot ROM execution ➔ Stack setup ➔ UART boot banner transmission ➔ DDR4 memory diagnostics ➔ Multi-core OS boot simulation.
- **Exit Criteria:** 100% clean SoC simulation, zero protocol violations, all 71 modules working in seamless harmony.
