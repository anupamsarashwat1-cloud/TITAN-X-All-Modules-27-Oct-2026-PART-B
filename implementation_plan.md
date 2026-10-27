# 🚀 TITAN-X SoC: From RTL to Linux on FPGA

This document outlines the comprehensive roadmap to take the verified TITAN-X RTL, perform deep manual verification (waveform analysis), map it to physical FPGA hardware, and successfully boot a Linux operating system with HDMI output.

## ✅ Architectural Confirmation
Based on the RTL analysis:
- **Architecture**: RV64 (64-bit).
- **MMU**: Fully supports **Sv39** Page-Based Virtual-Memory.
- **Privilege Levels**: Fully supports **M-mode** (Machine), **S-mode** (Supervisor), and **U-mode** (User).
- **Translation**: Hardware Page Table Walker (`rv_ptw`) and TLB (`rv_tlb`) are integrated. 
*(These are the exact prerequisites required to boot a modern standard Linux Kernel!)*

## ⚠️ User Review Required

> [!IMPORTANT]
> **FPGA Board Selection:** To proceed with Phase 3 (FPGA Prototyping), we still need to select a specific target FPGA board. A full SoC with a 64-bit/32-bit RISC-V core, L2 Cache, DDR controller, and HDMI requires a moderately large FPGA (e.g., Xilinx Kintex-7, Virtex-7, Zynq Ultrascale+, or equivalent). Please let me know what physical hardware you have or intend to use.

---

## 🗺️ Master Implementation Plan (Detailed Commands & Steps)

### Phase 1: Deep Manual Verification (Bottom-Up)

We will transition from "automated random stimulus" to "manual, visual waveform analysis" to see the inner workings of the CPU and peripherals visually.

**Step 1.1: Core Pipeline Waveform Extraction**
- **Action:** Compile the core (`rv_core_top`), MMU (`rv_mmu`), and fetch stages with a small assembly program (e.g., `add`, `sw`, `lw`).
- **Command:** 
  ```bash
  iverilog -g2012 -o sim.vvp tb_rv_core_top.v ../rv_core_top.v ../rv_mmu.v ...
  vvp sim.vvp -lxt2
  gtkwave dump.vcd
  ```
- **Manual Verification:** Open `gtkwave` and trace the `pc` (program counter), `inst` (instruction), and ALU outputs to ensure execution matches expectations.

**Step 1.2: MMU & Privilege Verification**
- **Action:** Write a bare-metal test that switches from M-mode to U-mode using `mret`, then attempts an illegal memory access to trigger an Sv39 Page Fault.
- **Manual Verification:** In `gtkwave`, observe `satp` register configuration, `ptw_req` firing to walk the page table, and `trap_valid` asserting on the illegal access.

**Step 1.3: Peripheral Register Tests**
- **Action:** Write APB transactions manually in the testbench (or via bare-metal C) to the UART, I2C, and HDMI controllers.
- **Manual Verification:** Verify `tmds_clk_p` / `tmds_data_p` output patterns for HDMI and `uart_tx` output bit patterns in `gtkwave`.

---

### Phase 2: Bare-Metal Toolchain & Bootrom

**Step 2.1: Toolchain Installation**
- **Action:** Install the standard 64-bit RISC-V GNU toolchain.
- **Command:** `sudo apt-get install gcc-riscv64-unknown-elf`

**Step 2.2: Memory Mapping & Linker Script**
- **Action:** Create `link.ld` placing `bootrom` at `0x0000_1000`, `SRAM` at `0x8000_0000`.

**Step 2.3: Compiling Bare-Metal "Hello World"**
- **Action:** Write `startup.S` (boot assembly) and `main.c` (UART polling code).
- **Commands:**
  ```bash
  riscv64-unknown-elf-gcc -march=rv64gc -mabi=lp64d -O2 -nostdlib -T link.ld startup.S main.c -o bootrom.elf
  riscv64-unknown-elf-objcopy -O verilog bootrom.elf bootrom.hex
  ```
- **Integration:** Inject `bootrom.hex` into the `axi_rom` RTL block using `$readmemh("bootrom.hex", mem)`.

---

### Phase 3: FPGA Synthesis & Prototyping

**Step 3.1: Vivado Project & IP Replacement**
- **Action:** Create a Vivado project. Replace the simulation DDR BFM (`ddr4_sdram_bfm.v`) with the Xilinx MIG (Memory Interface Generator).
- **Command:** 
  ```tcl
  create_project titan_x_soc ./vivado_prj -part <FPGA_PART_NUMBER>
  add_files [glob ../../**/*.v]
  create_ip -name ddr4 -vendor xilinx.com -library ip -module_name ddr4_phy
  ```

**Step 3.2: Constraints (XDC) & Synthesis**
- **Action:** Write `titan_x.xdc` defining physical pins for Clocks, HDMI, SD Card, UART, and DDR4.
- **Commands:**
  ```bash
  vivado -mode batch -source build.tcl
  # This runs synth_design, opt_design, place_design, route_design, write_bitstream
  ```
- **Physical Test:** Program the FPGA via JTAG (`open_hw_manager`). Hook up an oscilloscope/logic analyzer to the UART TX pin and reset the board.

---

### Phase 4: Linux Firmware Stack (OpenSBI + U-Boot)

**Step 4.1: Device Tree (DTB)**
- **Action:** Write `titan_x.dts` describing the SoC (CPU freq, UART base address, PLIC, MMU).
- **Command:** `dtc -I dts -O dtb -o titan_x.dtb titan_x.dts`

**Step 4.2: OpenSBI (Supervisor Binary Interface)**
- **Action:** Compile OpenSBI for our specific hardware to handle M-mode traps.
- **Commands:**
  ```bash
  git clone https://github.com/riscv-software-src/opensbi.git
  cd opensbi
  make PLATFORM=generic FW_FDT_PATH=../titan_x.dtb CROSS_COMPILE=riscv64-unknown-elf-
  ```

**Step 4.3: U-Boot (Bootloader)**
- **Action:** Port U-Boot to load the Linux Kernel from the SD Card (MMC controller).
- **Commands:**
  ```bash
  make smvdu_titanx_defconfig
  make CROSS_COMPILE=riscv64-unknown-elf-
  ```
- **Integration:** Re-compile OpenSBI using `FW_PAYLOAD_PATH=u-boot.bin` so OpenSBI directly jumps to U-Boot.

---

### Phase 5: Linux Kernel Porting & Boot

**Step 5.1: Linux Kernel Configuration**
- **Action:** Clone the Linux kernel, configure it for RV64, and enable 16550 UART and Framebuffer drivers.
- **Commands:**
  ```bash
  make ARCH=riscv CROSS_COMPILE=riscv64-unknown-elf- defconfig
  make ARCH=riscv CROSS_COMPILE=riscv64-unknown-elf- menuconfig # Enable specific drivers
  make ARCH=riscv CROSS_COMPILE=riscv64-unknown-elf- Image
  ```

**Step 5.2: Root Filesystem (Buildroot)**
- **Action:** Generate a minimal Linux `rootfs.ext4` with BusyBox.

**Step 5.3: SD Card Flashing & Boot**
- **Action:** Partition an SD Card (`fdisk`), format to ext4/fat32, and copy `Image`, `rootfs`, and `u-boot`.
- **Physical Test:**
  1. Insert SD Card into FPGA.
  2. Flash bitstream (`.bit`) via JTAG.
  3. Connect UART to PC (`minicom -D /dev/ttyUSB0 -b 115200`).
  4. Watch the Linux Kernel boot up!
  5. Connect an HDMI monitor to see the Linux login prompt graphically.
