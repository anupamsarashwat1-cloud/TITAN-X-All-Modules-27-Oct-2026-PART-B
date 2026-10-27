OUTPUT_ARCH("riscv")
ENTRY(_start)

MEMORY
{
    BOOT_ROM (rx)  : ORIGIN = 0x10000000, LENGTH = 128K
    DDR      (rwx) : ORIGIN = 0x80000000, LENGTH = 2M
}

SECTIONS
{
    .text : {
        *(.init)
        *(.text*)
    } > BOOT_ROM

    .rodata : {
        *(.rodata*)
    } > BOOT_ROM

    .data : {
        *(.data*)
    } > DDR AT > BOOT_ROM

    .bss : {
        *(.bss*)
        *(COMMON)
    } > DDR

    _end = .;
}
