# Phase 9: Industrial Peripherals & Serial Communication

## Overview
Phase 9 covers the verification of all 7 industrial peripheral and serial communication modules in the SMVDU-TITAN-X SoC:
1. `gpio_ctrl/gpio_ctrl.v` (32-bit bidirectional GPIO with 2-stage synchronizer and configurable IRQ)
2. `rtc/rtc.v` (64-bit real-time counter with 2-FF CDC synchronizer and 5-hart comparators)
3. `watchdog_timer/watchdog_timer.v` (Windowed watchdog timer with unlock key, timeout IRQ & reset)
4. `uart_16550/uart_16550.v` (Multi-mode UART 16550 with DLAB divisor registers and IrDA/LIN extensions)
5. `spi_master/spi_master.v` (Full-duplex SPI master with programmable divider, CPOL/CPHA, and 4 chip selects)
6. `i2c_master/i2c_master.v` (Byte-level I2C master with 4-phase clock prescaler and open-drain pad drivers)
7. `can_controller/can_controller.v` (CAN 2.0B controller with SJA1000 register mapping and bus timing registers)

## Verification Tasks
- [x] Task 9.1: Verify `peripherals/gpio_ctrl/gpio_ctrl.v` (7/7 tests pass: pready, dir reset, in_sync sampling, dir R/W, pad tri-state driving, int enable)
- [x] Task 9.2: Verify `peripherals/rtc/rtc.v` (6/6 tests pass: pready, mtime reset, monotonic increment, timer_irq firing, irq clear, mtimecmp R/W)
- [x] Task 9.3: Verify `peripherals/watchdog_timer/watchdog_timer.v` (9/9 tests pass: reset defaults, reload R/W, unlock protection, timeout irq, int_stat, kick clearing, reset suppression, disable)
- [x] Task 9.4: Verify `peripherals/uart_16550/uart_16550.v` (10/10 tests pass: pready, LSR reset, scratch R/W, DLAB DLL/DLM, normal THR/IER, LCR, MCR, FCR, mode extensions, line idle)
- [x] Task 9.5: Verify `peripherals/spi_master/spi_master.v` (8/8 tests pass: pready, CSN idle 0xF, clk_div R/W, control reg, TX launch, busy clearing, RX readback, clock driving)
- [x] Task 9.6: Verify `peripherals/i2c_master/i2c_master.v` (6/6 tests pass: pready, SCL/SDA idle high, prescaler R/W, START+WRITE with 13 SCL edges, busy flag, STOP release)
- [x] Task 9.7: Verify `peripherals/can_controller/can_controller.v` (7/7 tests pass: pready, reset mode 0x1, BTR R/W, TX frame buffer staging, TX request trigger, IRQ enable, RX buffer reset)

## Summary Verdict
All 7 modules compiled with `iverilog -g2012`, unit simulated with `vvp`, generated digital waveforms, and enriched READMEs with 100% test pass.
