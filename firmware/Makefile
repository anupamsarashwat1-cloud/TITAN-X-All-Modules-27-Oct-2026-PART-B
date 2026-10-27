CROSS_COMPILE ?= riscv64-unknown-elf-
CC = $(CROSS_COMPILE)gcc
OBJCOPY = $(CROSS_COMPILE)objcopy

CFLAGS = -march=rv64gc -mabi=lp64d -O2 -nostdlib -nostartfiles -T link.ld -ffreestanding

all: firmware.hex

firmware.elf: start.S main.c
	$(CC) $(CFLAGS) -o $@ $^

firmware.bin: firmware.elf
	$(OBJCOPY) -O binary $< $@

firmware.hex: firmware.bin
	hexdump -v -e '1/4 "%08x\n"' $< > $@

clean:
	rm -f firmware.elf firmware.bin firmware.hex
