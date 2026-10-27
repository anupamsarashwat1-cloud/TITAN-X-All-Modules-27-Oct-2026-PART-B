# TITAN-X SoC Firmware & OS Bringup Repository

This repository contains the full 65+ module RTL tree for the SMVDU-TITAN-X SoC along with the firmware, toolchains, and Linux OS bringup simulation environment.

## Architecture

The TITAN-X SoC is a highly complex, 64-bit multi-core (RV64IMAFDC) RISC-V processor designed for high performance computing and secure boot.
* **Cores:** 4x RV64GC cores + 1x Monitor Core.
* **Memory Subsystem:** L1/L2 Caches, MMU (`sv39`), PMP, TLB, DDR4 Controller.
* **Interconnect:** 15-Master, 9-Slave AXI4 Crossbar with WRR arbitration and burst routing support.
* **Peripherals:** PCIe, USB OTG, Gigabit Ethernet (GEM), HDMI, MIPI CSI-2 Rx, CAN, I2C, SPI, UART, RTC.
* **Security:** ECDSA P-256 secure boot, AES Engine, TRNG.

## Linux OS Bringup

The `linux_bringup/` directory contains all the infrastructure necessary to boot Linux on the SoC:

1. **`titan_x.dts`**: The compiled Device Tree Source mapping memory (0x8000_0000) and PLIC/CLINT controllers.
2. **`axi_ram.v`**: A high-speed behavioral AXI RAM supporting burst transfers, replacing the slower DDR controller specifically for OS-level simulation.
3. **`sim_main.cpp` & `Makefile`**: Verilator C++ testbench used to bypass the inherently slow execution time of `iverilog` (which runs in the kHz range). Verilator runs fast enough to simulate millions of cycles required for an OS boot.
4. **`build_firmware.sh`**: Script to compile OpenSBI and Linux initramfs.

## Hardware Fixes for Linux
* **Secure Boot Bypass:** `secure_boot.v` bypasses eNVM signature checks during simulation to immediately de-assert `core_rst_n`.
* **AXI4 Bursts:** `axi4_crossbar.v` and `titan_x_top.v` were dynamically patched to route `arlen`, `arsize`, and `arburst` signals. Linux kernel cacheline fetches rely heavily on burst transfers.

## Getting Started

To run the full OS simulation, you will need a C++ compiler (`g++`), the Device Tree Compiler (`dtc`), and Verilator installed on your host system:

```bash
sudo apt-get update
sudo apt-get install -y build-essential device-tree-compiler
```

After installing dependencies, navigate to `linux_bringup/` and run `make sim` to build the Verilator C++ executable.
