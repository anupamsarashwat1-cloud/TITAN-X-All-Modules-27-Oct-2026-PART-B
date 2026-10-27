#!/usr/bin/env python3
"""Generate the rv_core_top retirement-spine program + golden expectations.

Emits into backend/rv_core_top/:
  tb_imem.hex            program words ($readmemh, one 32-bit word per line)
  tb_expected_regs.mem   x0..x31 architectural finals (hex, one per line)
  tb_expected_maddr.mem  checked 64-bit memory words: addresses
  tb_expected_mval.mem   ...and their required values
  tb_expected_meta.mem   three hex numbers: [rf_commits, store_beats, mem_checks]

The golden model below is an independent interpreter of the RV64I subset:
semantics come from the unprivileged spec (12-bit immediate sign
extension from bit 11, RV64 LUI extension from bit 31, shift-amount
masking to 6 bits, W-op 32-bit truncation), NOT from the RTL. Any
disagreement between model and RTL is a bug somewhere and the sim says
which side.
"""
import pathlib

OUT = pathlib.Path(__file__).resolve().parent.parent / "backend/rv_core_top"
BASE = 0x0000_0000_0002_0000            # params.vh RESET_PC (eNVM base)

M64 = (1 << 64) - 1

def sext(v, bits):
    """Sign-extend a bits-wide field value to a Python int."""
    v &= (1 << bits) - 1
    return v - (1 << bits) if v >> (bits - 1) else v

def to64(v):
    return v & M64

# ---------------------------------------------------------------- assembler
class Prog:
    def __init__(self):
        self.insns = []
        self.labels = {}

    def label(self, name):
        self.labels[name] = len(self.insns)

    def any(self, **kw):
        kw["idx"] = len(self.insns)
        self.insns.append(kw)

    # --- encoders (RISC-V unprivileged spec) ---
    @staticmethod
    def _r(f7, rs2, rs1, f3, rd, op):
        return (f7 << 25) | (rs2 << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | op

    @staticmethod
    def _i(imm12, rs1, f3, rd, op):
        return ((imm12 & 0xFFF) << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | op

    @staticmethod
    def _s(imm12, rs2, rs1, f3, op):
        imm12 &= 0xFFF
        return ((imm12 >> 5) << 25) | (rs2 << 20) | (rs1 << 15) | (f3 << 12) | \
               ((imm12 & 0x1F) << 7) | op

    @staticmethod
    def _b(off, rs2, rs1, f3, op):
        off &= 0x1FFF
        return (((off >> 12) & 1) << 31) | (((off >> 5) & 0x3F) << 25) | \
               (rs2 << 20) | (rs1 << 15) | (f3 << 12) | \
               (((off >> 1) & 0xF) << 8) | (((off >> 11) & 1) << 7) | op

    @staticmethod
    def _u(imm20, rd, op):
        return ((imm20 & 0xFFFFF) << 12) | (rd << 7) | op

    @staticmethod
    def _j(off, rd, op):
        off &= 0x1FFFFF
        return (((off >> 20) & 1) << 31) | (((off >> 1) & 0x3FF) << 21) | \
               (((off >> 11) & 1) << 20) | (((off >> 12) & 0xFF) << 12) | \
               (rd << 7) | op

    def encode(self, i):
        k = i["kind"]
        if k == "rr":
            f3, f7 = RR_FMT[i["fn"]]
            return self._r(f7, i["rs2"], i["rs1"], f3, i["rd"], RR_OP[i["w"]])
        if k == "ri":
            f3 = RI_F3[i["fn"]]
            if i["fn"] in ("slli", "srli", "srai"):
                f7 = 0b0100000 if i["fn"] == "srai" else 0b0000000
                imm12 = (f7 << 5) | (i["shamt"] & 0x1F)
            else:
                imm12 = i["imm"]
            op = 0b0011011 if i.get("w") else 0b0010011
            return self._i(imm12, i["rs1"], f3, i["rd"], op)
        if k == "lui":
            return self._u(i["imm20"], i["rd"], 0b0110111)
        if k == "auipc":
            return self._u(i["imm20"], i["rd"], 0b0010111)
        if k == "jal":
            off = (self.labels[i["tgt"]] - i["idx"]) * 4
            return self._j(off, i["rd"], 0b1101111)
        if k == "jalr":
            return self._i(sext(i["imm"], 12) & 0xFFF, i["rs1"], 0,
                           i["rd"], 0b1100111)
        if k == "br":
            off = (self.labels[i["tgt"]] - i["idx"]) * 4
            return self._b(off, i["rs2"], i["rs1"], BR_F3[i["fn"]], 0b1100011)
        if k == "ld":
            return self._i(sext(i["imm"], 12) & 0xFFF, i["rs1"],
                           LD_F3[i["fn"]], i["rd"], 0b0000011)
        if k == "st":
            return self._s(sext(i["imm"], 12) & 0xFFF, i["rs2"], i["rs1"],
                           ST_F3[i["fn"]], 0b0100011)
        raise ValueError(k)

RR_OP = {"w": 0b0111011, "x": 0b0110011}          # *W suffix vs full 64-bit
RR_FMT = {
    "add":  (0b000, 0b0000000), "sub":  (0b000, 0b0100000),
    "sll":  (0b001, 0b0000000), "slt":  (0b010, 0b0000000),
    "sltu": (0b011, 0b0000000), "xor":  (0b100, 0b0000000),
    "srl":  (0b101, 0b0000000), "sra":  (0b101, 0b0100000),
    "or":   (0b110, 0b0000000), "and":  (0b111, 0b0000000),
}
RI_F3 = {"addi": 0b000, "slti": 0b010, "sltiu": 0b011, "xori": 0b100,
         "ori": 0b110, "andi": 0b111,
         "slli": 0b001, "srli": 0b101, "srai": 0b101}
BR_F3 = {"beq": 0b000, "bne": 0b001, "blt": 0b100,
         "bge": 0b101, "bltu": 0b110, "bgeu": 0b111}
LD_F3 = {"lb": 0b000, "lh": 0b001, "lw": 0b010, "ld": 0b011,
         "lbu": 0b100, "lhu": 0b101, "lwu": 0b110}
ST_F3 = {"sb": 0b000, "sh": 0b001, "sw": 0b010, "sd": 0b011}

# ------------------------------------------------------------ golden model
def run_golden(p, max_steps=100000):
    regs = [0] * 32
    mem = {}                                   # byte-addressed
    pc = BASE
    stats = {"exec": 0, "commits": 0, "stores": 0}

    def rd_mem(a, n):
        v = 0
        for b in range(n):
            v |= mem.get(to64(a + b), 0) << (8 * b)
        return v

    def wr_mem(a, n, v):
        for b in range(n):
            mem[to64(a + b)] = (v >> (8 * b)) & 0xFF

    seen_park = 0
    for _ in range(max_steps):
        idx = (pc - BASE) // 4
        i = p.insns[idx]
        k = i["kind"]
        if idx == len(p.insns) - 1:            # parked on the spin jump
            seen_park += 1
            if seen_park >= 4:
                break
        stats["exec"] += 1
        nxt = to64(pc + 4)
        wr = None                              # (rd, committed value)

        if k == "rr":
            fn = i["fn"]
            # Registers are stored masked to 64 bits; recover true signed
            # values before any signed operation (Python >> and < are
            # otherwise logical/unsigned on these positive ints).
            if i["w"] == "w":                  # W-forms operate on low 32 bits
                a, b = sext(regs[i["rs1"]], 32), sext(regs[i["rs2"]], 32)
                shmask = 31
            else:
                a, b = sext(regs[i["rs1"]], 64), sext(regs[i["rs2"]], 64)
                shmask = 63
            if fn == "add":
                r = a + b
            elif fn == "sub":
                r = a - b
            elif fn == "sll":
                r = a << (b & shmask)
            elif fn == "slt":
                r = 1 if a < b else 0
            elif fn == "sltu":
                r = 1 if (a & M64) < (b & M64) else 0
            elif fn == "xor":
                r = a ^ b
            elif fn == "srl":
                r = (a & M64) >> (b & shmask)
            elif fn == "sra":
                r = a >> (b & shmask)
            elif fn == "or":
                r = a | b
            elif fn == "and":
                r = a & b
            else:
                raise ValueError(fn)
            r = to64(r)
            if i["w"] == "w":
                r = to64(sext(r, 32))          # W results sign-extend to 64
            wr = (i["rd"], r)

        elif k == "ri":
            a = regs[i["rs1"]]
            fn = i["fn"]
            if fn == "addi":
                wr = (i["rd"], to64(a + sext(i["imm"], 12)))
            elif fn == "slti":
                wr = (i["rd"], 1 if sext(a, 64) < sext(i["imm"], 12) else 0)
            elif fn == "sltiu":
                wr = (i["rd"], 1 if (a & M64) < sext(i["imm"], 12) & M64 else 0)
            elif fn == "xori":
                wr = (i["rd"], to64(a ^ sext(i["imm"], 12)))
            elif fn == "ori":
                wr = (i["rd"], to64(a | sext(i["imm"], 12)))
            elif fn == "andi":
                wr = (i["rd"], to64(a & sext(i["imm"], 12)))
            elif fn == "slli":
                wr = (i["rd"], to64(a << (i["shamt"] & 63)))
            elif fn == "srli":
                wr = (i["rd"], to64((a & M64) >> (i["shamt"] & 63)))
            elif fn == "srai":
                wr = (i["rd"], to64(sext(a, 64) >> (i["shamt"] & 63)))
            else:
                raise ValueError(fn)

        elif k == "lui":
            v = (i["imm20"] << 12) & 0xFFFFFFFF
            wr = (i["rd"], to64(sext(v, 32)))  # RV64 LUI extends from bit 31

        elif k == "auipc":
            wr = (i["rd"], to64(pc + (i["imm20"] << 12)))

        elif k == "jal":
            wr = (i["rd"], nxt)
            nxt = to64(pc + (p.labels[i["tgt"]] - i["idx"]) * 4)

        elif k == "jalr":
            wr = (i["rd"], nxt)
            nxt = to64((regs[i["rs1"]] + sext(i["imm"], 12)) & ~1)

        elif k == "br":
            a, b = regs[i["rs1"]], regs[i["rs2"]]
            take = {
                "beq":  a == b,
                "bne":  a != b,
                "blt":  sext(a, 64) < sext(b, 64),
                "bge":  sext(a, 64) >= sext(b, 64),
                "bltu": (a & M64) < (b & M64),
                "bgeu": (a & M64) >= (b & M64),
            }[i["fn"]]
            if take:
                nxt = to64(pc + (p.labels[i["tgt"]] - i["idx"]) * 4)

        elif k == "ld":
            a = to64(regs[i["rs1"]] + sext(i["imm"], 12))
            n = {"lb": 1, "lbu": 1, "lh": 2, "lhu": 2,
                 "lw": 4, "lwu": 4, "ld": 8}[i["fn"]]
            raw = rd_mem(a, n)
            signed = i["fn"] in ("lb", "lh", "lw", "ld")
            r = sext(raw, n * 8) if signed else raw
            wr = (i["rd"], to64(r))

        elif k == "st":
            a = to64(regs[i["rs1"]] + sext(i["imm"], 12))
            n = {"sb": 1, "sh": 2, "sw": 4, "sd": 8}[i["fn"]]
            wr_mem(a, n, regs[i["rs2"]])
            stats["stores"] += 1

        else:
            raise ValueError(k)

        if wr is not None:
            rd_, val = wr
            if rd_ != 0:
                regs[rd_] = val
                stats["commits"] += 1
        regs[0] = 0
        pc = nxt

    return regs, mem, stats

# ------------------------------------------------------------------ program
p = Prog()

# ---- Phase A: ALU + immediates into fresh registers x1..x23
p.any(kind="ri", fn="addi",  rd=1,  rs1=0, imm=5)
p.any(kind="ri", fn="addi",  rd=2,  rs1=0, imm=-3)          # negative operand
p.any(kind="rr", fn="add", w="x", rd=3,  rs1=1, rs2=2)      # RAW dist-1
p.any(kind="rr", fn="sub", w="x", rd=4,  rs1=3, rs2=1)      # RAW chain
p.any(kind="ri", fn="addi",  rd=5,  rs1=0, imm=100)
p.any(kind="rr", fn="slt", w="x", rd=6,  rs1=1, rs2=5)
p.any(kind="rr", fn="sltu", w="x", rd=7, rs1=5, rs2=1)
p.any(kind="rr", fn="xor", w="x", rd=8,  rs1=1, rs2=2)
p.any(kind="rr", fn="or",  w="x", rd=9,  rs1=1, rs2=2)
p.any(kind="rr", fn="and", w="x", rd=10, rs1=1, rs2=2)
p.any(kind="rr", fn="sll", w="x", rd=11, rs1=1, rs2=2)      # 5 << 61
p.any(kind="rr", fn="srl", w="x", rd=12, rs1=2, rs2=1)      # logical of -3
p.any(kind="rr", fn="sra", w="x", rd=13, rs1=2, rs2=1)      # arithmetic of -3
p.any(kind="ri", fn="slli",  rd=14, rs1=1, shamt=4)         # 80
p.any(kind="ri", fn="srli",  rd=15, rs1=5, shamt=3)         # 12
p.any(kind="ri", fn="srai",  rd=16, rs1=2, shamt=1)         # -2
p.any(kind="ri", fn="slti",  rd=17, rs1=2, imm=0)           # -3 < 0 -> 1
p.any(kind="ri", fn="sltiu", rd=18, rs1=1, imm=10)          # 5 < 10 -> 1
p.any(kind="ri", fn="xori",  rd=19, rs1=1, imm=-1)          # ~5
p.any(kind="ri", fn="ori",   rd=20, rs1=2, imm=8)
p.any(kind="ri", fn="andi",  rd=21, rs1=2, imm=6)
p.any(kind="lui", rd=22, imm20=0x12345)                     # positive constant
p.any(kind="auipc", rd=23, imm20=1)

# ---- Phase B: memory ops through x24 = DDR window base.
# Built as lui+slli because LUI sign-extends from bit 31: imm20=0x80000
# would yield 0xFFFFFFFF_80000000, not the intended physical 0x80000000.
p.any(kind="lui", rd=24, imm20=0x00008)                     # 0x00008000
p.any(kind="ri", fn="slli", rd=24, rs1=24, shamt=16)        # 0x80000000
p.any(kind="st", fn="sd", rs1=24, rs2=22, imm=0)
p.any(kind="st", fn="sw", rs1=24, rs2=1,  imm=8)
p.any(kind="st", fn="sh", rs1=24, rs2=2,  imm=12)
p.any(kind="st", fn="sb", rs1=24, rs2=1,  imm=14)
p.any(kind="ld", fn="ld",  rd=25, rs1=24, imm=0)
p.any(kind="rr", fn="add", w="x", rd=26, rs1=25, rs2=1)     # load-use dist-1
p.any(kind="ld", fn="lwu", rd=27, rs1=24, imm=8)
p.any(kind="ld", fn="lw",  rd=28, rs1=24, imm=8)
p.any(kind="ld", fn="lhu", rd=29, rs1=24, imm=12)
p.any(kind="ld", fn="lb",  rd=30, rs1=24, imm=14)
p.any(kind="ld", fn="lbu", rd=31, rs1=24, imm=14)

# ---- Phase C: spill phase-A values we reuse, then control-flow battery
for off, rgn in ((16, 8), (24, 9), (32, 10), (40, 11), (48, 12), (56, 13)):
    p.any(kind="st", fn="sd", rs1=24, rs2=rgn, imm=off)

p.any(kind="ri", fn="addi", rd=8, rs1=0, imm=3)
p.label("loop")
p.any(kind="ri", fn="addi", rd=8, rs1=8, imm=-1)
p.any(kind="br", fn="bne", rs1=8, rs2=0, tgt="loop")        # 3 iterations

p.any(kind="br", fn="blt",  rs1=0,  rs2=22, tgt="t1")       # 0 < pos -> taken
p.any(kind="ri", fn="addi", rd=9, rs1=0, imm=91)            # must be SKIPPED
p.label("t1")
p.any(kind="br", fn="bge",  rs1=8,  rs2=0,  tgt="t2")       # 0>=0 -> taken
p.any(kind="ri", fn="addi", rd=9, rs1=0, imm=92)            # skipped
p.label("t2")
p.any(kind="br", fn="bltu", rs1=1,  rs2=24, tgt="t3")       # 5 < 2GB -> taken
p.any(kind="ri", fn="addi", rd=9, rs1=0, imm=93)            # skipped
p.label("t3")
p.any(kind="br", fn="bgeu", rs1=24, rs2=1,  tgt="t4")       # taken
p.any(kind="ri", fn="addi", rd=9, rs1=0, imm=94)            # skipped
p.label("t4")
p.any(kind="br", fn="beq",  rs1=0,  rs2=0,  tgt="t5")       # taken
p.any(kind="ri", fn="addi", rd=9, rs1=0, imm=95)            # skipped
p.label("t5")
p.any(kind="br", fn="bne",  rs1=1,  rs2=0,  tgt="t6")       # taken
p.any(kind="ri", fn="addi", rd=9, rs1=0, imm=96)            # skipped
p.label("t6")
p.any(kind="ri", fn="addi", rd=9, rs1=0, imm=9)             # landing marker
p.any(kind="br", fn="beq",  rs1=1,  rs2=1,  tgt="t7")       # taken
p.any(kind="ri", fn="addi", rd=10, rs1=0, imm=97)           # skipped
p.label("t7")
p.any(kind="ri", fn="addi", rd=10, rs1=0, imm=10)
p.any(kind="jal", rd=19, tgt="t8")                          # link saved
p.any(kind="ri", fn="addi", rd=20, rs1=0, imm=97)           # skipped
p.any(kind="ri", fn="addi", rd=20, rs1=0, imm=98)           # skipped
p.label("t8")
p.any(kind="auipc", rd=20, imm20=0)
p.any(kind="ri", fn="addi", rd=20, rs1=20, imm=20)          # jalr skips exactly 2
p.any(kind="jalr", rd=21, rs1=20, imm=0)
p.any(kind="ri", fn="addi", rd=9, rs1=0, imm=99)            # skipped
p.any(kind="ri", fn="addi", rd=9, rs1=0, imm=98)            # skipped
p.any(kind="ri", fn="addi", rd=9, rs1=0, imm=8)             # jalr landing marker
for off, rgn in ((64, 9), (72, 10), (80, 19), (88, 21)):
    p.any(kind="st", fn="sd", rs1=24, rs2=rgn, imm=off)
p.label("park")
p.any(kind="jal", rd=0, tgt="park")                         # spin; TB ends run

# ------------------------------------------------------------------- emit
words = [p.encode(i) for i in p.insns]
regs, mem, stats = run_golden(p)

checks = sorted({a & ~7 for a in mem})
OUT.mkdir(parents=True, exist_ok=True)
(OUT / "tb_imem.hex").write_text(
    "\n".join(f"{w & 0xFFFFFFFF:08x}" for w in words) + "\n")
(OUT / "tb_expected_regs.mem").write_text(
    "\n".join(f"{to64(r):016x}" for r in regs) + "\n")

def qword(a):
    return int.from_bytes(bytes(mem.get(a + b, 0) for b in range(8)), "little")

(OUT / "tb_expected_maddr.mem").write_text(
    "\n".join(f"{a:016x}" for a in checks) + "\n")
(OUT / "tb_expected_mval.mem").write_text(
    "\n".join(f"{qword(a):016x}" for a in checks) + "\n")
(OUT / "tb_expected_meta.mem").write_text(
    f"{stats['commits']:x}\n{stats['stores']:x}\n{len(checks):x}\n")

print(f"instructions : {len(words)}")
print(f"rf commits   : {stats['commits']}")
print(f"store beats  : {stats['stores']}")
print(f"mem checks   : {len(checks)}")
print("golden finals:")
for r in range(1, 32):
    print(f"  x{r:<2} = 0x{to64(regs[r]):016x}")
