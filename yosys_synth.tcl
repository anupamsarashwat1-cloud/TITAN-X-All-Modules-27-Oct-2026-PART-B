# Yosys synthesis script for SMVDU Titan-X (Restructured)

# Read all verilog files with common include path
read_verilog -Icommon -sv \
    ./common/reset_sync.v \
    ./common/cdc_sync.v \
    ./common/fifo_sync.v \
    ./common/fifo_async.v \
    ./frontend/rv_fetch.v \
    ./frontend/rv_decode.v \
    ./backend/rv_execute.v \
    ./backend/rv_mem.v \
    ./backend/rv_writeback.v \
    ./backend/rv_core_top.v \
    ./backend/clint.v \
    ./backend/plic.v \

    ./memory/sram_32x64_180nm.v \
    ./memory/l2_tag_array.v \
    ./memory/l2_data_array.v \
    ./memory/l2_cache_ctrl.v \
    ./memory/l2_cache_top.v \
    ./memory/ddr_phy_if.v \
    ./memory/ddr_scheduler.v \
    ./memory/ddr_ctrl_top.v \
    ./interconnect/axi4_crossbar.v \
    ./interconnect/axi4_to_ahb.v \
    ./interconnect/ahb_to_apb.v \
    ./peripherals/uart_16550.v \
    ./peripherals/gpio_ctrl.v \
    ./peripherals/spi_master.v \
    ./peripherals/i2c_master.v \
    ./peripherals/watchdog_timer.v \
    ./peripherals/gem_ethernet.v \
    ./peripherals/pcie_top.v \
    ./peripherals/aes_engine.v \
    ./peripherals/sha256_engine.v \
    ./peripherals/trng.v \
    ./top/titan_x_top.v

# Elaborate design
hierarchy -top titan_x_top

# Run generic synthesis
synth -top titan_x_top

# Print statistics
stat
