#!/usr/bin/env python3
"""Generate the rv_core_top interrupt-preemption program + expectations.

Emits backend/rv_core_top/tb_irq_*.{hex,mem}. The TB asserts irq_m_timer
at a fixed cycle while mainline sits inside a ~64-cycle DIVU stall; the
take point lands wherever the pipeline boundary actually is — so the
program is built TIMING-INDEPENDENT:

  - every instruction before the handler is idempotent (CSR setup) or
    re-executes to the same effect (the DIVU result is pure);
  - `addi x12,x12,1` commits exactly once whether it is preempted
    (killed at EX exit, re-fetched after mret) or not;
  - the handler's FIRST act clears mie.MTIE, making entry count exactly
    one regardless of how long the timer line stays high;
  - MIE=0 inside the handler blocks nesting automatically (rv_csr).

Checked architectural facts (static):
  x11 = 1                    (handler entries)
  x12 = 1                    (preempted-or-not witness)
  x13 = 0x8000000000000000 u/ 3   (DIVU completed correctly post-irq)
  x14 = 0                    (mie readback: MTIE cleared by handler)
  x15 = 0x88                 (mstatus restored by mret shuffle)
  x25 = (1<<63)|7            (machine timer interrupt cause)
  x30 = 8                    (mscratch untouched round trip)
x26 = mepc saved at entry is TIMING-DEPENDENT -> not in expected_regs;
TB range-checks shadow[26] >= meta[3] (first pc that may be killed).
"""
import pathlib

OUT = pathlib.Path(__file__).resolve().parent.parent / "backend/rv_core_top"
BASE = 0x0002_0000
DBASE = 0x8000_0000
HANDLER_WORD = 64
HBASE = BASE + 4 * HANDLER_WORD


def i_type(imm12, rs1, f3, rd, op):
    return ((imm12 & 0xFFF) << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | op


def r_type(f7, rs2, rs1, f3, rd, op):
    return (f7 << 25) | (rs2 << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | op


def sys(f3, rd, rs1, imm12):
    return i_type(imm12, rs1, f3, rd, 0b1110011)


def sd(rs2, rs1, imm):
    return ((((imm >> 5) & 0x3F) << 25) | (rs2 << 20) | (rs1 << 15) |
            (0b011 << 12) | ((imm & 0x1F) << 7) | 0b0100011)


NOP = i_type(0, 0, 0, 0, 0b0010011)

main = [
    i_type(1, 0, 0b000, 20, 0b0010011),                  # x20 = 1
    i_type((0b000000 << 6) | 31, 20, 0b001, 20,
           0b0010011),                                   # x20 = DBASE
    i_type(32, 0, 0b000, 19, 0b0010011),
    i_type((0b000000 << 6) | 12, 19, 0b001, 19, 0b0010011),
    i_type(0x100, 19, 0b000, 19, 0b0010011),             # x19 = HBASE
    sys(0b001, 0, 19, 0x305),                            # mtvec <- HBASE
    i_type(0x55, 0, 0b000, 21, 0b0010011),               # x21 sentinel
    sys(0b110, 30, 0x08, 0x340),                         # csrrsi mscratch,8
    # ---- arm interrupts (idempotent if preempted) ----
    # MTIE is bit 7 -- UNREACHABLE by 5-bit zimm immediates; must go
    # through the register forms with x7 = 0x80 (kept live for the
    # handler's clearing write).
    i_type(0x80, 0, 0b000, 7, 0b0010011),                # x7 = 0x80
    sys(0b010, 5, 7, 0x304),                             # x5=mie; MTIE|=x7
    sys(0b110, 6, 0x08, 0x300),                          # x6=ms; MIE=1
    # ---- long division: the preemption window ----
    i_type(1, 0, 0b000, 1, 0b0010011),                   # x1 = 1
    i_type((0b000000 << 6) | 63, 1, 0b001, 1, 0b0010011),  # x1 = 1<<63
    i_type(3, 0, 0b000, 2, 0b0010011),                   # x2 = 3
    r_type(0b0000001, 2, 1, 0b101, 13, 0b0110011),       # divu x13,x1,x2
    r_type(0b0000001, 2, 1, 0b111, 16, 0b0110011),       # remu x16,x1,x2
    i_type(1, 12, 0b000, 12, 0b0010011),                 # x12 += 1 (witness)
    # ---- capture post-interrupt state ----
    sys(0b010, 14, 0, 0x304),                            # mie readback = 0
    sys(0b010, 15, 0, 0x300),                            # mstatus = 0x88
    sys(0b010, 22, 0, 0x340),                            # mscratch = 8
]
PARK_IDX = len(main)
main += [0b1101111 | (0 << 7)]                           # jal x0,+0 park

H = [
    sys(0b011, 0, 7, 0x304),                             # csrrc mie, x7!
    sys(0b010, 25, 0, 0x342),                            # x25 = mcause
    sys(0b010, 26, 0, 0x341),                            # x26 = mepc (varies)
    i_type(1, 11, 0b000, 11, 0b0010011),                 # x11 += 1
    sys(0b000, 0, 0, 0x302),                             # mret
]
words = main + H

# ---------------------------------------------------------------- checks
DIV_PC = BASE + 4 * 14          # divu index in `main`
# Earliest killable beat = first instruction AFTER mstatus.MIE
# commits (idx 11). Everything from there is pure, idempotent,
# or re-executed exactly once post-mret.
MIN_EPC = BASE + 4 * 11

exp = [0] * 32
exp[1] = 1 << 63
exp[2] = 3
exp[5] = 0                      # old mie at csrrsi
exp[6] = 0                      # old mstatus at csrrsi
exp[11] = 1                     # handler entries
exp[12] = 1                     # witness: committed exactly once
exp[13] = (1 << 63) // 3        # divu quotient of (1<<63)/3
exp[14] = 0                     # mie after handler's csrrci
exp[15] = 0x88                  # mstatus after mret restore
exp[16] = (1 << 63) % 3         # remu remainder
exp[19] = HBASE
exp[20] = DBASE
exp[21] = 0x55
exp[7] = 0x80                  # MTIE mask, kept live
exp[22] = 8                   # mscratch survived the trap round trip
exp[25] = (1 << 63) | 7
exp[26] = MIN_EPC               # placeholder: TB does a RANGE check here
exp[30] = 0                   # csrrsi x30 got OLD mscratch

spill = [(0x00, 11), (0x08, 12), (0x10, 13), (0x18, 14), (0x20, 15),
         (0x28, 25), (0x30, 22)]
spill_words = [sd(rg, 20, off) for off, rg in spill]
words = list(main)
words[PARK_IDX:PARK_IDX] = spill_words          # spill just before park
while len(words) < HANDLER_WORD:
    words.append(NOP)
assert len(words) == HANDLER_WORD, f"main+spill overflowed: {len(words)}"
words += H

mem_addrs = [DBASE + off for off, _ in spill]
mem_vals = []
for off, rg in spill:
    mem_vals.append(exp[rg])

meta = [17, len(spill), len(spill), MIN_EPC]

OUT.mkdir(parents=True, exist_ok=True)
(OUT / "tb_irq_imem.hex").write_text("".join(f"{w:08x}\n" for w in words))
(OUT / "tb_irq_expected_regs.mem").write_text(
    "".join(f"{v & ((1 << 64) - 1):016x}\n" for v in exp))
(OUT / "tb_irq_expected_maddr.mem").write_text(
    "".join(f"{a:010x}\n" for a in mem_addrs))
(OUT / "tb_irq_expected_mval.mem").write_text(
    "".join(f"{v & ((1 << 64) - 1):016x}\n" for v in mem_vals))
(OUT / "tb_irq_expected_meta.mem").write_text(
    "".join(f"{m:016x}\n" for m in meta))

print(f"words={len(words)} park@{PARK_IDX} handler@{HANDLER_WORD}")
print(f"div pc={DIV_PC:#x} min-epc={MIN_EPC:#x}")
print(f"x13(divu)={exp[13]:#x} x16(remu)={exp[16]:#x}")
