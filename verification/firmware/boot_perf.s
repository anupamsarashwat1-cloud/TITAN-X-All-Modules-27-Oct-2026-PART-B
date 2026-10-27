.section .text
.globl _start

_start:
    # Step 1: Read hart ID
    csrr a0, mhartid

    # Step 2: Demux execution per hart
    li   t0, 0
    beq  a0, t0, hart0_work
    li   t0, 1
    beq  a0, t0, hart1_work
    li   t0, 2
    beq  a0, t0, hart2_work
    li   t0, 3
    beq  a0, t0, hart3_work
    j    hart4_work

hart0_work:
    # Core 0: Matrix / Vector Arithmetic Accumulation
    # Compute: sum = sum + i * 3 + 7 for i = 1..10
    li   t1, 10
    li   t2, 1
    li   t3, 0
    li   t4, 3
    li   t5, 7

h0_loop:
    mul  t6, t2, t4
    add  t6, t6, t5
    add  t3, t3, t6
    addi t2, t2, 1
    ble  t2, t1, h0_loop

    # Store result to DDR4 at 0x8000_0000
    li   s0, 0x80000000
    sd   t3, 0(s0)
    li   s1, 0xCAFE0000
    sd   s1, 8(s0)
    j    halt_loop

hart1_work:
    # Core 1: Fibonacci sequence calculation
    li   t1, 12
    li   t2, 0
    li   t3, 1
    li   t4, 1

h1_loop:
    add  t5, t2, t3
    mv   t2, t3
    mv   t3, t5
    addi t4, t4, 1
    blt  t4, t1, h1_loop

    # Store fib(12) = 144 to DDR4 at 0x8000_0010
    li   s0, 0x80000010
    sd   t3, 0(s0)
    li   s1, 0xCAFE0001
    sd   s1, 8(s0)
    j    halt_loop

hart2_work:
    # Core 2: Cryptographic Bitwise Permutation
    li   t1, 0x12345678
    li   t2, 0x5A5A5A5A
    li   t3, 8

h2_loop:
    slli t4, t1, 5
    srli t5, t1, 27
    or   t1, t4, t5
    xor  t1, t1, t2
    addi t3, t3, -1
    bnez t3, h2_loop

    # Store cipher state to DDR4 at 0x8000_0020
    li   s0, 0x80000020
    sd   t1, 0(s0)
    li   s1, 0xCAFE0002
    sd   s1, 8(s0)
    j    halt_loop

hart3_work:
    # Core 3: Multiply & Divide Pipeline Latency Stress
    li   t1, 1
    li   t2, 1
    li   t3, 10

h3_loop:
    mul  t1, t1, t2
    addi t2, t2, 1
    ble  t2, t3, h3_loop

    li   t4, 120
    divu t5, t1, t4

    # Store quotient to DDR4 at 0x8000_0030
    li   s0, 0x80000030
    sd   t5, 0(s0)
    li   s1, 0xCAFE0003
    sd   s1, 8(s0)
    j    halt_loop

hart4_work:
    # Core 4: Monitor Core Heartbeat
    li   s0, 0x40010000
    li   t1, 0x54
    sw   t1, 0(s0)
    li   s1, 0x80000040
    li   t2, 0xCAFE0004
    sd   t2, 8(s1)
    j    halt_loop

halt_loop:
    nop
    nop
    j    halt_loop
