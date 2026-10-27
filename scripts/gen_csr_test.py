#!/usr/bin/env python3
"""Generate the rv_core_top Zicsr/trap directed program + expectations.

Emits into backend/rv_core_top/:
  tb_csr_imem.hex            program words (one 32-bit hex per line)
  tb_csr_expected_regs.mem   x0..x31 architectural finals
  tb_csr_expected_maddr.mem  checked 64-bit memory words: addresses
  tb_csr_expected_mval.mem   ...and required values
  tb_csr_expected_meta.mem   [rf_commits, store_beats, mem_checks]

Layout (word indices in the imem image):
  0..62   main program, ends with a jump-to-self park
  63      padding (never executed)
  64..74  trap handler -- FIXED offset, so mtvec = BASE + 256 is a
          build-time constant and x19 is built with plain addi/slli

Coverage:
  - CSRRW/CSRRS/CSRRC + immediate forms on mscratch, including the
    rs1=x0 / zimm=0 side-effect-free reads
  - WARL contracts: mtvec[1:0], mepc[1:0] cleared; mstatus write mask
  - RO mhartid, constant misa identity
  - Illegal CSR (unimplemented 0x999) -> illegal-instruction trap,
    with rd!=0 PRELOADED to prove the trapping beat commits nothing
  - ECALL -> cause 11, EBREAK -> cause 3; shared handler captures
    (mcause, mepc, mstatus) per trap into memory slots and bumps
    mepc past the trapping instruction before MRET
  - mstatus.MIE=1 enabled up front so the MPIE<-MIE / MIE<-MPIE
    shuffle is observable (all entry statuses read 0x1808/0x1888)

Golden model is an independent interpreter of the contract frozen in
entries/2026-08-26_step54-csr-design.md. Counters are never read into
architectural registers (nondeterministic by design).
"""
import pathlib

OUT = pathlib.Path(__file__).resolve().parent.parent / "backend/rv_core_top"
BASE = 0x0000_0000_0002_0000
DBASE = 0x0000_0000_8000_0000
HANDLER_WORD = 64                       # fixed -> HBASE build-time constant
M64 = (1 << 64) - 1


def sext(v, bits):
    v &= (1 << bits) - 1
    return v - (1 << bits) if v >> (bits - 1) else v


def to64(v):
    return v & M64


# ---------------------------------------------------------------- assembler
def enc_i(imm12, rs1, f3, rd, op):
    return ((imm12 & 0xFFF) << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | op


def sys(f3, rd, rs1, imm12):
    return enc_i(imm12, rs1, f3, rd, 0b1110011)


def nop():
    return enc_i(0, 0, 0, 0, 0b0010011)          # addi x0,x0,0


# Program as (mnemonic-family, fields) tuples, assembled inline below.
main = []
main.append(enc_i(1, 0, 0b000, 20, 0b0010011))            # x20 = 1
main.append(enc_i((0b000000 << 6) | 31, 20, 0b001, 20,
                  0b0010011))                             # x20 <<= 31 -> DBASE
main.append(enc_i(32, 0, 0b000, 19, 0b0010011))           # x19 = 32
main.append(enc_i((0b000000 << 6) | 12, 19, 0b001, 19,
                  0b0010011))                             # x19 <<= 12 -> 0x20000
main.append(enc_i(0x100, 19, 0b000, 19, 0b0010011))       # x19 += 0x100 = HBASE
main.append(sys(0b001, 13, 19, 0x305))                    # mtvec <- HBASE
main.append(sys(0b110, 4, 0x8, 0x300))                    # csrrsi x4,mstatus,8
main.append(enc_i(0x99, 0, 0b000, 1, 0b0010011))          # x1 = 0x99
# --- mscratch walk: all six CSR forms ---
main.append(sys(0b101, 5, 0x15, 0x340))                   # csrrwi x5,msc,0x15
main.append(sys(0b010, 6, 0, 0x340))                      # csrrs  x6,msc,x0
main.append(sys(0b001, 7, 1, 0x340))                      # csrrw  x7,msc,x1
main.append(sys(0b011, 8, 1, 0x340))                      # csrrc  x8,msc,x1
main.append(sys(0b110, 9, 0x0A, 0x340))                   # csrrsi x9,msc,0x0A
main.append(sys(0b111, 10, 0x02, 0x340))                  # csrrci x10,msc,0x02
# --- identity / WARL ---
main.append(sys(0b010, 11, 0, 0x301))                     # misa
main.append(sys(0b010, 12, 0, 0xF14))                     # mhartid
main.append(sys(0b001, 14, 1, 0x341))                     # mepc <- 0x99 (WARL .98)
main.append(sys(0b010, 15, 0, 0x341))                     # read back 0x98
# --- trap sites ---
main.append(enc_i(0x55, 0, 0b000, 21, 0b0010011))         # x21 = 0x55 sentinel
main.append(sys(0b001, 21, 1, 0x999))                     # T1: illegal CSR!
main.append(sys(0b000, 0, 0, 0x000))                      # T2: ecall
main.append(sys(0b000, 0, 0, 0x001))                      # T3: ebreak
# --- post-trap captures ---
main.append(sys(0b010, 29, 0, 0x300))                     # final mstatus
main.append(sys(0b010, 30, 0, 0x340))                     # mscratch
main.append(sys(0b010, 31, 0, 0x342))                     # last mcause
# --- spill checked regs to DBASE ---
SPILL = [(0x00, 5), (0x08, 6), (0x10, 7), (0x18, 8), (0x20, 9),
         (0x28, 10), (0x30, 11), (0x38, 12), (0x40, 13), (0x48, 14),
         (0x50, 15), (0x58, 29), (0x60, 30), (0x68, 31)]
for off, rg in SPILL:
    imm = off
    main.append((((imm >> 5) & 0x3F) << 25) | (rg << 20) | (20 << 15) |
                (0b011 << 12) | ((imm & 0x1F) << 7) | 0b0100011)   # sd
PARK_IDX = len(main)
main.append(0b1101111 | (0 << 7))                          # jal x0, +0 park
while len(main) < HANDLER_WORD:
    main.append(nop())

# --- handler ---
H = []
H.append(enc_i(24, 24, 0b000, 24, 0b0010011))             # x24 += 24 (byte slot)
H.append((24 << 20) | (20 << 15) | (0b000 << 12) | (28 << 7) |
         0b0110011)                                        # x28 = x24 + x20
H.append(sys(0b010, 25, 0, 0x342))                        # mcause
H.append(sys(0b010, 26, 0, 0x341))                        # mepc
H.append(sys(0b010, 27, 0, 0x300))                        # mstatus (entry copy)


def sd(rs2, rs1, imm):
    return ((((imm >> 5) & 0x3F) << 25) | (rs2 << 20) | (rs1 << 15) |
            (0b011 << 12) | ((imm & 0x1F) << 7) | 0b0100011)


H.append(sd(25, 28, 104))                                 # slot base DBASE+128
H.append(sd(26, 28, 112))
H.append(sd(27, 28, 120))
H.append(enc_i(4, 26, 0b000, 26, 0b0010011))              # mepc += 4
H.append(sys(0b001, 0, 26, 0x341))                        # mepc <- bumped
H.append(sys(0b000, 0, 0, 0x302))                         # mret

words = main + H

# ------------------------------------------------------------------ golden
IMPL = {0x300, 0x301, 0x304, 0x305, 0x340, 0x341, 0x342, 0x343,
        0xF14, 0xB00, 0xB02, 0xC00, 0xC02}
MISA_VAL = (2 << 62) | (1 << 12) | (1 << 8) | (1 << 2)


class Golden:
    """Independent M-mode interpreter of the frozen CSR contract."""

    def __init__(self):
        self.regs = [0] * 32
        self.csr = {a: 0 for a in IMPL}
        self.csr[0x301] = MISA_VAL
        self.mtvec = BASE + 4 * HANDLER_WORD
        self.mem = {}
        self.commits = 0
        self.stores = 0
        self.traps = []

    def rd(self, a):
        v = self.csr.get(a, 0)
        if a == 0x305:
            v &= ~3
        elif a == 0x341:
            v &= ~3
        return v

    def wr(self, a, v):
        if a == 0x300:
            mask = (1 << 3) | (1 << 7) | (3 << 11)
            self.csr[a] = (self.csr[a] & ~mask) | (v & mask)
        elif a == 0x304:
            self.csr[a] = v & ((1 << 3) | (1 << 7) | (1 << 11))
        elif a == 0x305:
            self.mtvec = v & ~3
        elif a == 0x341:
            self.csr[a] = v & ~3
        elif a in (0x340, 0x342, 0x343):
            self.csr[a] = v
        # misa/hartid/counters/unimplemented: write ignored

    def trap(self, cause, pc):
        st = self.rd(0x300)
        self.csr[0x341] = pc
        self.csr[0x342] = cause
        st = (st & ~(1 << 7)) | (((st >> 3) & 1) << 7)   # MPIE <- MIE
        st &= ~(1 << 3)                                   # MIE <- 0
        st |= (3 << 11)                                   # MPP <- machine
        self.wr(0x300, st)
        self.traps.append((cause, pc, self.rd(0x300)))
        return self.mtvec & ~3

    def mret(self):
        st = self.rd(0x300)
        mie = (st >> 7) & 1                               # MPIE -> MIE
        st = (st & ~(1 << 3)) | (mie << 3)
        st |= (1 << 7)                                    # MPIE <- 1
        st &= ~(3 << 11)                                  # MPP <- U
        self.wr(0x300, st)
        return self.rd(0x341)                             # handler bumped it

    def run(self, prog, max_steps=20000):
        pc = BASE
        park_visits = 0
        for _ in range(max_steps):
            idx = (pc - BASE) // 4
            w = prog[idx]
            k = idx
            if k == PARK_IDX:                              # park spin
                park_visits += 1
                if park_visits >= 4:
                    break
                # still executes: jal x0,+0 -> pc unchanged
                continue
            nxt = to64(pc + 4)
            wr = None
            opcode = w & 0x7F
            rd_ = (w >> 7) & 0x1F
            f3 = (w >> 12) & 0x7
            rs1 = (w >> 15) & 0x1F
            imm_i = sext(w >> 20, 12)

            if opcode == 0b0010011:                        # OP-IMM
                a = self.regs[rs1]
                if f3 == 0b000:
                    wr = (rd_, to64(a + imm_i))
                elif f3 == 0b001:
                    sh = (w >> 20) & 0x3F
                    wr = (rd_, to64(a << sh))
                else:
                    raise ValueError("imm f3")
            elif opcode == 0b0110011:                      # ADD
                wr = (rd_, to64(self.regs[rs1] + self.regs[(w >> 20) & 0x1F]))
            elif opcode == 0b0100011:                      # SD
                imm_s = sext(((w >> 25) << 5) | ((w >> 7) & 0x1F), 12)
                addr = to64(self.regs[rs1] + imm_s)
                val = self.regs[(w >> 20) & 0x1F]
                for b8 in range(8):
                    self.mem[to64(addr + b8)] = (val >> (8 * b8)) & 0xFF
                self.stores += 1
            elif opcode == 0b1101111:                      # JAL
                off = sext(
                    (((w >> 31) & 1) << 20) | (((w >> 21) & 0x3FF) << 1) |
                    (((w >> 20) & 1) << 11) | (((w >> 12) & 0xFF) << 12), 21)
                wr = (rd_, to64(pc + 4))
                nxt = to64(pc + off)
            elif opcode == 0b1110011:                      # SYSTEM
                if f3 == 0b000:
                    if imm_i == 0x000:
                        nxt = self.trap(11, pc)
                    elif imm_i == 0x001:
                        nxt = self.trap(3, pc)
                    elif imm_i == 0x302:
                        nxt = self.mret()
                    else:
                        nxt = self.trap(2, pc)
                else:
                    a = (w >> 20) & 0xFFF
                    if a not in IMPL:
                        nxt = self.trap(2, pc)             # NO rd/csr effect
                    else:
                        src = (self.regs[rs1] if f3 < 4 else rs1)
                        old = self.rd(a)
                        wr = (rd_, old)
                        base = f3 & 3
                        if not (base in (2, 3) and src == 0):
                            if base == 1:
                                self.wr(a, src)
                            elif base == 2:
                                self.wr(a, old | src)
                            else:
                                self.wr(a, old & ~src)
            else:
                raise ValueError(f"opcode {opcode:#04x} @ idx {idx}")

            if wr is not None and wr[0] != 0:
                self.regs[wr[0]] = wr[1]
                self.commits += 1
            self.regs[0] = 0
            pc = nxt
        return park_visits


g = Golden()
visits = g.run(words)
assert visits >= 4, "golden never reached park"

# ------------------------------------------------------------------- emit
OUT.mkdir(parents=True, exist_ok=True)
(OUT / "tb_csr_imem.hex").write_text(
    "".join(f"{w:08x}\n" for w in words))

regs = g.regs[:]
(OUT / "tb_csr_expected_regs.mem").write_text(
    "".join(f"{to64(v):016x}\n" for v in regs))

# Checked memory: the 14 spill words plus the three 24-byte trap slots.
check_addrs = [DBASE + off for off, _ in SPILL]
check_addrs += [DBASE + 128 + 24 * t + 8 * f for t in range(3)
                for f in range(3)]
check_addrs.sort()
lines_a, lines_v = [], []
for a in check_addrs:
    v = 0
    for b8 in range(8):
        v |= g.mem[to64(a + b8)] << (8 * b8)
    lines_a.append(f"{a:010x}\n")
    lines_v.append(f"{v:016x}\n")
(OUT / "tb_csr_expected_maddr.mem").write_text("".join(lines_a))
(OUT / "tb_csr_expected_mval.mem").write_text("".join(lines_v))

meta = [g.commits, g.stores, len(check_addrs)]
(OUT / "tb_csr_expected_meta.mem").write_text(
    "".join(f"{m:016x}\n" for m in meta))

print(f"program words : {len(words)} (park @{PARK_IDX}, handler @{HANDLER_WORD})")
print(f"HBASE         : {BASE + 4 * HANDLER_WORD:#x}")
print(f"golden commits: {g.commits}  stores: {g.stores}  checks: {len(check_addrs)}")
for c, p_, s in g.traps:
    print(f"  trap cause={c} epc={p_:#x} mstatus={s:#x}")
print(f"final x29(mstatus)={g.regs[29]:#x} x30(mscratch)={g.regs[30]:#x} "
      f"x31(mcause)={g.regs[31]:#x}")
