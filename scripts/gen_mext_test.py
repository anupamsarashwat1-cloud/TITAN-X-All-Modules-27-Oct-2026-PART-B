#!/usr/bin/env python3
"""Generate the rv_core_top M-extension directed program + expectations.

Emits into backend/rv_core_top/:
  tb_mext_imem.hex            program words
  tb_mext_expected_regs.mem   x0..x31 architectural finals
  tb_mext_expected_maddr.mem  checked 64-bit memory words: addresses
  tb_mext_expected_mval.mem   ...and required values
  tb_mext_expected_meta.mem   [rf_commits, store_beats, mem_checks]

Covers all RV64M ops: MUL/MULH/MULHSU/MULHU, DIV/DIVU/REM/REMU, plus the
W forms MULW/DIVW/DIVUW/REMW/REMUW. Special cases chosen per spec:
  - division by zero: DIV -> -1, DIVU -> 2^64-1, REM/REMU -> dividend
  - signed overflow: INT64_MIN / -1 -> INT64_MIN, REM -> 0 (and the W twins)
  - sign mixes for MULH vs MULHU vs MULHSU
  - W forms operate on sign-extended low words and sign-extend results

The golden model is an independent interpreter written from the spec.
"""
import pathlib

OUT = pathlib.Path(__file__).resolve().parent.parent / "backend/rv_core_top"
BASE = 0x0000_0000_0002_0000
M64 = (1 << 64) - 1
M32 = (1 << 32) - 1
INT64_MIN = - (1 << 63)

def sext(v, bits):
    v &= (1 << bits) - 1
    return v - (1 << bits) if v >> (bits - 1) else v

def to64(v):
    return v & M64

# ---------------------------------------------------------------- assembler
class Prog:
    def __init__(self):
        self.insns = []

    def any(self, **kw):
        kw["idx"] = len(self.insns)
        self.insns.append(kw)

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
    def _j(off, rd, op):
        off &= 0x1FFFFF
        return (((off >> 20) & 1) << 31) | (((off >> 1) & 0x3FF) << 21) | \
               (((off >> 11) & 1) << 20) | (((off >> 12) & 0xFF) << 12) | \
               (rd << 7) | op

    def encode(self, i):
        k = i["kind"]
        if k == "ri":
            fn = i["fn"]
            if fn == "addi":
                return self._i(i["imm"], i["rs1"], 0b000, i["rd"], 0b0010011)
            if fn == "slli":                    # funct6<<6 | shamt[5:0]
                return self._i((0b000000 << 6) | (i["shamt"] & 0x3F),
                               i["rs1"], 0b001, i["rd"], 0b0010011)
            if fn == "srli":
                return self._i((0b000000 << 6) | (i["shamt"] & 0x3F),
                               i["rs1"], 0b101, i["rd"], 0b0010011)
            raise ValueError(fn)
        if k == "rr":
            op = 0b0111011 if i.get("w") else 0b0110011
            if i["fn"] in BASE_R_F7F3:          # plain integer ops mixed in
                f7, f3 = BASE_R_F7F3[i["fn"]]
                return self._r(f7, i["rs2"], i["rs1"], f3, i["rd"], op)
            return self._r(0b0000001, i["rs2"], i["rs1"],
                           MEXT_F3[i["fn"]], i["rd"], op)
        if k == "st":
            return self._s(i["imm"], i["rs2"], i["rs1"], 0b011, 0b0100011)
        if k == "jal":
            return self._j(0, i["rd"], 0b1101111)
        raise ValueError(k)

MEXT_F3 = {"mul": 0b000, "mulh": 0b001, "mulhsu": 0b010, "mulhu": 0b011,
           "div": 0b100, "divu": 0b101, "rem": 0b110, "remu": 0b111,
           "mulw": 0b000, "divw": 0b100, "divuw": 0b101,
           "remw": 0b110, "remuw": 0b111}

BASE_R_F7F3 = {"add": (0b0000000, 0b000), "sub": (0b0100000, 0b000),
               "xor": (0b0000000, 0b100), "or":  (0b0000000, 0b110),
               "and": (0b0000000, 0b111)}

# ------------------------------------------------------------ golden model
def run_golden(p):
    regs = [0] * 32
    mem = {}
    pc = BASE
    stats = {"commits": 0, "stores": 0}
    seen_park = 0

    def sdiv(a, b):                     # RISC-V signed division semantics
        if b == 0:
            return -1, a
        q = abs(a) // abs(b)
        if (a < 0) != (b < 0):
            q = -q
        r = a - q * b
        return q, r

    for _ in range(400000):
        idx = (pc - BASE) // 4
        i = p.insns[idx]
        if idx == len(p.insns) - 1:
            seen_park += 1
            if seen_park >= 4:
                break
        nxt = to64(pc + 4)
        wr = None
        k = i["kind"]

        if k == "ri":
            fn = i["fn"]
            a = regs[i["rs1"]]
            if fn == "addi":
                wr = (i["rd"], to64(a + sext(i["imm"], 12)))
            elif fn == "slli":
                wr = (i["rd"], to64(a << (i["shamt"] & 63)))
            elif fn == "srli":
                wr = (i["rd"], to64((a & M64) >> (i["shamt"] & 63)))
            else:
                raise ValueError(fn)

        elif k == "rr":
            fn = i["fn"]
            a = sext(regs[i["rs1"]], 64)
            b = sext(regs[i["rs2"]], 64)
            au, bu = regs[i["rs1"]] & M64, regs[i["rs2"]] & M64
            if fn == "mul":
                wr = (i["rd"], to64(a * b))
            elif fn == "mulh":
                wr = (i["rd"], to64((a * b) >> 64))
            elif fn == "mulhsu":
                wr = (i["rd"], to64((a * bu) >> 64))
            elif fn == "mulhu":
                wr = (i["rd"], to64((au * bu) >> 64))
            elif fn == "div":
                q, _ = sdiv(a, b)
                wr = (i["rd"], to64(q))
            elif fn == "divu":
                q = to64(-1) if bu == 0 else au // bu
                wr = (i["rd"], q)
            elif fn == "rem":
                _, r = sdiv(a, b)
                wr = (i["rd"], to64(r))
            elif fn == "remu":
                r = au if bu == 0 else au % bu
                wr = (i["rd"], r)
            elif fn == "mulw":
                prod = (sext(a, 32) * sext(b, 32)) & M32
                wr = (i["rd"], to64(sext(prod, 32)))
            elif fn == "divw":
                q, _ = sdiv(sext(a, 32), sext(b, 32))
                wr = (i["rd"], to64(sext(q & M32, 32)))
            elif fn == "divuw":
                au32, bu32 = regs[i["rs1"]] & M32, regs[i["rs2"]] & M32
                q = 0xFFFFFFFF if bu32 == 0 else au32 // bu32
                wr = (i["rd"], to64(sext(q, 32)))
            elif fn == "remw":
                _, r = sdiv(sext(a, 32), sext(b, 32))
                wr = (i["rd"], to64(sext(r & M32, 32)))
            elif fn == "remuw":
                au32, bu32 = regs[i["rs1"]] & M32, regs[i["rs2"]] & M32
                r = au32 if bu32 == 0 else au32 % bu32
                wr = (i["rd"], to64(sext(r, 32)))
            elif fn == "add":
                wr = (i["rd"], to64(a + b))
            else:
                raise ValueError(fn)

        elif k == "st":
            addr = to64(regs[i["rs1"]] + sext(i["imm"], 12))
            val = regs[i["rs2"]]
            for byte in range(8):
                mem[to64(addr + byte)] = (val >> (8 * byte)) & 0xFF
            stats["stores"] += 1

        elif k == "jal":
            nxt = pc                                  # park spin
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

# ---- Phase 1: operand construction ----
p.any(kind="ri", fn="addi",  rd=1, rs1=0, imm=-3)          # x1 = -3
p.any(kind="ri", fn="addi",  rd=2, rs1=0, imm=7)           # x2 = 7
# x3 = INT64_MIN: addi -1; slli 63
p.any(kind="ri", fn="addi",  rd=3, rs1=0, imm=-1)
p.any(kind="ri", fn="slli",  rd=3, rs1=3, shamt=63)
# x4 = -1 (all ones)
p.any(kind="ri", fn="addi",  rd=4, rs1=0, imm=-1)
# x5 = big positive 0x123456789 via shifts: 0x123<<32 | 0x56789ABC-ish
p.any(kind="ri", fn="addi",  rd=5, rs1=0, imm=0x123)
p.any(kind="ri", fn="slli",  rd=5, rs1=5, shamt=12)        # 0x123000
p.any(kind="ri", fn="addi",  rd=5, rs1=5, imm=0x456)
p.any(kind="ri", fn="slli",  rd=5, rs1=5, shamt=16)        # 0x123456_0000
p.any(kind="ri", fn="addi",  rd=20, rs1=0, imm=1)
p.any(kind="ri", fn="slli",  rd=20, rs1=20, shamt=31)      # x20 = DBASE

# ---- Phase 2: multiply battery (results x21..x24 + reuse temps) ----
p.any(kind="rr", fn="mul",    rd=21, rs1=1, rs2=2)         # -21
p.any(kind="rr", fn="mulh",   rd=22, rs1=3, rs2=4)         # INT64_MIN * -1 >>64 = 0x7FFF...
p.any(kind="rr", fn="mulhsu", rd=23, rs1=3, rs2=4)         # signed * unsigned(all ones)
p.any(kind="rr", fn="mulhu",  rd=24, rs1=3, rs2=4)         # unsigned * unsigned
# NOTE the w=1 flags: encode() picks the *W opcode* from them, NOT from the
# fn name — without them "mulw" encodes as plain MUL (0110011) and the RTL
# correctly executes the wrong instruction. Caught exactly that way.
p.any(kind="rr", fn="mulw",   rd=25, rs1=3, rs2=4, w=1)    # word(INT_MIN)*word(-1) -> INT_MIN sext

# ---- Phase 3: divide battery incl. specials ----
p.any(kind="rr", fn="div",    rd=13, rs1=3,  rs2=4)        # INT64_MIN / -1 overflow -> INT64_MIN
p.any(kind="rr", fn="rem",    rd=14, rs1=3,  rs2=4)        # -> 0
p.any(kind="rr", fn="div",    rd=15, rs1=2,  rs2=0)        # 7 / 0 -> -1
p.any(kind="rr", fn="divu",   rd=16, rs1=2,  rs2=0)        # -> 2^64-1
p.any(kind="rr", fn="rem",    rd=17, rs1=1,  rs2=0)        # -3 % 0 -> -3
p.any(kind="rr", fn="remu",   rd=18, rs1=1,  rs2=0)        # -> 0xFFFF...FD
p.any(kind="rr", fn="div",    rd=19, rs1=5,  rs2=1)        # ordinary signed div
p.any(kind="rr", fn="rem",    rd=26, rs1=5,  rs2=1)
p.any(kind="rr", fn="divu",   rd=27, rs1=5,  rs2=2)
p.any(kind="rr", fn="remu",   rd=28, rs1=5,  rs2=2)
p.any(kind="rr", fn="divw",   rd=29, rs1=3,  rs2=4, w=1)   # word(0)/word(-1) -> 0
p.any(kind="rr", fn="divuw",  rd=30, rs1=2,  rs2=0, w=1)   # /0 -> 0xFFFFFFFF
p.any(kind="rr", fn="remw",   rd=31, rs1=1,  rs2=0, w=1)   # -3 %w 0 -> -3 sext
p.any(kind="rr", fn="remuw",  rd=5,  rs1=1,  rs2=0, w=1)   # -> 0xFFFFFFFD (overwrites x5)

# ---- Phase 3b: TRUE W-overflow specials on x20 = 0x00000000_80000000,
# whose low word IS INT32_MIN (unlike x3=INT64_MIN, whose low word is 0).
# divw hits the width-aware overflow detector; mulw proves the captured
# sign-extended words feed the multiplier.
p.any(kind="rr", fn="mulw",   rd=6,  rs1=20, rs2=4, w=1)   # (-2^31 * -1)&M32 -> sext 80000000
p.any(kind="rr", fn="divw",   rd=7,  rs1=20, rs2=4, w=1)   # W-ovf special    -> sext 80000000
p.any(kind="rr", fn="remw",   rd=8,  rs1=20, rs2=4, w=1)   #                  -> 0

# ---- Phase 4: RAW chain through M results ----
p.any(kind="rr", fn="add",    rd=21, rs1=21, rs2=22)       # consume two M results
p.any(kind="ri", fn="srli",   rd=22, rs1=22, shamt=60)     # expose top bits

# ---- Phase 5: spill, park ----
for off, rg in ((0x00, 21), (0x08, 22), (0x10, 23), (0x18, 24),
                (0x20, 25), (0x28, 13), (0x30, 14), (0x38, 15),
                (0x40, 16), (0x48, 17), (0x50, 18), (0x58, 19),
                (0x60, 26), (0x68, 27), (0x70, 28), (0x78, 29),
                (0x80, 30), (0x88, 31)):
    p.any(kind="st", fn="sd", rs1=20, rs2=rg, imm=off)
p.any(kind="jal", rd=0)

# ------------------------------------------------------------------- emit
words = [p.encode(i) for i in p.insns]
regs, mem, stats = run_golden(p)

checks = sorted({a & ~7 for a in mem})
OUT.mkdir(parents=True, exist_ok=True)
(OUT / "tb_mext_imem.hex").write_text(
    "\n".join(f"{w & 0xFFFFFFFF:08x}" for w in words) + "\n")
(OUT / "tb_mext_expected_regs.mem").write_text(
    "\n".join(f"{to64(r):016x}" for r in regs) + "\n")

def qword(a):
    return int.from_bytes(bytes(mem.get(a + b, 0) for b in range(8)), "little")

(OUT / "tb_mext_expected_maddr.mem").write_text(
    "\n".join(f"{a:016x}" for a in checks) + "\n")
(OUT / "tb_mext_expected_mval.mem").write_text(
    "\n".join(f"{qword(a):016x}" for a in checks) + "\n")
(OUT / "tb_mext_expected_meta.mem").write_text(
    f"{stats['commits']:x}\n{stats['stores']:x}\n{len(checks):x}\n")

print(f"instructions : {len(words)}")
print(f"rf commits   : {stats['commits']}")
print(f"store beats  : {stats['stores']}")
print(f"mem checks   : {len(checks)}")
print("golden finals:")
for r in list(range(1, 7)) + list(range(13, 32)):
    print(f"  x{r:<2} = 0x{to64(regs[r]):016x}")
