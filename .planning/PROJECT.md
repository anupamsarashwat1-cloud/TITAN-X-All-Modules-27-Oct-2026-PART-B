# Project: SMVDU TITAN-X SoC — Exhaustive Bottom-Up Verification Initiative

## Overview
Comprehensive, module-wise, subsystem-wise, and full-system verification and hardening of the **SMVDU TITAN-X Heterogeneous Multi-Core SoC** (Quad-Core RV64GC + RV64IMAC Monitor, 15M×9S AXI4 Crossbar, DDR4 Controller, 2MB L2 Cache, Cryptographic Engine, Video Pipeline, GbE, PCIe, USB, and 17 Peripherals) targeted for **SCL 180nm Bulk CMOS**.

## Verification Objectives
1. **Specially Crafted Tests (Zero Templates)**: Every single module receives a dedicated, handcrafted testbench (`tb_<module>.v`) testing every state machine transition, arithmetic boundary, protocol handshake (AXI4, APB, AHB, DFI, TMDS, D-PHY), corner case, and error condition.
2. **Open-Source Toolchain**: Full simulation using `iverilog -g2012`, execution with `vvp`, waveform extraction with GTKWave `.gtkw` configs, and automated headless rendering with `scripts/waves.py`.
3. **Evidence-Based Documentation**: Every module's `README.md` is enriched with a verified test matrix, terminal simulation transcripts, and embedded waveform plots.
4. **Autonomous Iteration till Perfection**: Seamless combination of **GSD Roadmap Phasing**, **Roo Code Multi-Mode Execution** (Architect ➔ Code ➔ Debug), and **Ralph Loop Persistent Memory** (`PRD.md` & `progress.txt`) iterating continuously until 100% test coverage and zero assertion failures across all 71 modules and full SoC boot.

## Technology Stack & Tools
- **HDL**: Verilog-2001 / SystemVerilog assertions (`iverilog -g2012`)
- **Simulation**: Icarus Verilog (`iverilog`), VVP runtime (`vvp`)
- **Waveforms**: GTKWave Analyzer v3.3.116, `scripts/waves.py` (headless `vcdvcd` + `matplotlib`)
- **Automation & Orchestration**: GSD Workflow Engine, Roo Code Personas, Ralph Loop runner
- **Target Process**: SCL 180 nm CMOS, 1.8V Core / 3.3V I/O
