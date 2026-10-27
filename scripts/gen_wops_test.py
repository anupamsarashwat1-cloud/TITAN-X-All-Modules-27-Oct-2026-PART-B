#!/usr/bin/env python3
"""Generate the rv_core_top W-op (RV64I *32) directed program + expectations.

Emits into backend/rv_core_top/:
  tb_wops_imem.hex            program words
  tb_wops_expected_regs.mem   x0..x31 architectural finals
  tb_wops_expected_maddr.mem  checked 64-bit memory words: addresses
  tb_wops_expected_mval.mem   ...and required values
  tb_wops_expected_meta.mem   [rf_commits, store_beats, mem_checks]

Covers every RV64I word-form instruction: ADDIW/SLLIW/SRLIW/SRAIW and
ADDW/SUBW/SLLW/SRLW/SRAW, each against operands chosen so a naive 64-bit
implementation produces a DIFFERENT answer than the spec:
  - 32-bit overflow wrapping into sign extension (0x7FFFFFFF + 1),
  - high-dirty registers whose upper word must be ignored,
  - SRLIW vs SRAIW on a negative word (logical vs arithmetic tell),
  - shift amounts >31 hidden in rs2 low bits with dirty bits above [4:0],
  - RAW-distance-1 forwarding through W results, and a 64-bit op consuming
    a W result (double-sign-extension detector).

The golden model is an independent interpreter written straight from the
unprivileged spec's W-op definitions, not from the RTL.
"""
import pathlib

OUT = pathlib.Path(__file__).resolve().parent.parent / "backend/rv_core_top"
BASE = 0x0000_0000_0002_0000            # params.vh RESET_PC
M64 = (1 << 64) - 1
M32 = (1 << 32) - 1

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
            op = 0b0011011 if i.get("w") else 0b0010011
            if fn in ("addi", "addiw"):
                f3, imm12 = 0b000, i["imm"]
            elif fn in ("slli", "slliw"):
                # RV64I shift-immediate: funct6 at [31:26], shamt[5:0] at
                # [25:20]. Packing RV32-style (funct5<<5 | 5-bit shamt)
                # silently truncated shamt>=32 (a 32 became a 0).
                f3 = 0b001
                hi = 0b010000 if fn == "slliw" else 0b000000
                imm12 = (hi << 6) | (i["shamt"] & (0x1F if fn == "slliw"
                                                   else 0x3F))
            elif fn in ("srli", "srliw"):
                f3 = 0b101
                hi = 0b000000
                imm12 = (hi << 6) | (i["shamt"] & (0x1F if fn == "srliw"
                                                   else 0x3F))
            elif fn in ("srai", "sraiw"):
                f3 = 0b101
                hi = 0b010000
                imm12 = (hi << 6) | (i["shamt"] & (0x1F if fn == "sraiw"
                                                   else 0x3F))
            else:
                raise ValueError(fn)
            return self._i(imm12, i["rs1"], f3, i["rd"], op)
        if k == "rr":
            table = {
                "add":  (0b000, 0b0000000), "addw": (0b000, 0b0000000),
                "sub":  (0b000, 0b0100000), "subw": (0b000, 0b0100000),
                "sll":  (0b001, 0b0000000), "sllw": (0b001, 0b0000000),
                "slt":  (0b010, 0b0000000),
                "sltu": (0b011, 0b0000000),
                "xor":  (0b100, 0b0000000),
                "srl":  (0b101, 0b0000000), "srlw": (0b101, 0b0000000),
                "sra":  (0b101, 0b0100000), "sraw": (0b101, 0b0100000),
                "or":   (0b110, 0b0000000),
                "and":  (0b111, 0b0000000),
            }
            f3, f7 = table[i["fn"]]
            op = 0b0111011 if i.get("w") else 0b0110011
            return self._r(f7, i["rs2"], i["rs1"], f3, i["rd"], op)
        if k == "st":
            return self._s(i["imm"], i["rs2"], i["rs1"], 0b011, 0b0100011)
        if k == "jal":
            return self._j(0, i["rd"], 0b1101111)      # park: jump-to-self
        raise ValueError(k)

# ------------------------------------------------------------ golden model
def run_golden(p):
    regs = [0] * 32
    mem = {}
    pc = BASE
    stats = {"commits": 0, "stores": 0}
    seen_park = 0

    for _ in range(100000):
        idx = (pc - BASE) // 4
        i = p.insns[idx]
        if idx == len(p.insns) - 1:
            seen_park += 1
            if seen_park >= 4:
                break
        nxt = to64(pc + 4)                        # jal-park overrides below
        wr = None
        k = i["kind"]

        if k == "ri":
            fn = i["fn"]
            a = regs[i["rs1"]]
            if fn == "addi":
                wr = (i["rd"], to64(a + sext(i["imm"], 12)))
            elif fn == "addiw":
                r = sext(a, 32) + sext(i["imm"], 12)
                wr = (i["rd"], to64(sext(r & M32, 32)))
            elif fn == "slli":
                wr = (i["rd"], to64(a << (i["shamt"] & 63)))
            elif fn == "slliw":
                r = ((a & M32) << (i["shamt"] & 31)) & M32
                wr = (i["rd"], to64(sext(r, 32)))
            elif fn == "srli":
                wr = (i["rd"], to64((a & M64) >> (i["shamt"] & 63)))
            elif fn == "srliw":
                r = ((a & M32) >> (i["shamt"] & 31)) & M32   # LOGICAL on word
                wr = (i["rd"], to64(sext(r, 32)))
            elif fn == "srai":
                wr = (i["rd"], to64(sext(a, 64) >> (i["shamt"] & 63)))
            elif fn == "sraiw":
                r = (sext(a, 32) >> (i["shamt"] & 31)) & M32 # ARITH on word
                wr = (i["rd"], to64(sext(r, 32)))
            else:
                raise ValueError(fn)

        elif k == "rr":
            fn = i["fn"]
            a, b = regs[i["rs1"]], regs[i["rs2"]]
            if i.get("w"):
                a32, b32 = sext(a, 32), sext(b, 32)
                if fn == "addw":
                    r = sext((a32 + b32) & M32, 32)
                elif fn == "subw":
                    r = sext((a32 - b32) & M32, 32)
                elif fn == "sllw":
                    r = sext(((a & M32) << (b & 31)) & M32, 32)
                elif fn == "srlw":
                    r = sext(((a & M32) >> (b & 31)) & M32, 32)
                elif fn == "sraw":
                    r = sext(((sext(a, 32) >> (b & 31)) & M32), 32)
                else:
                    raise ValueError(fn)
                wr = (i["rd"], to64(r))
            elif fn == "or":
                wr = (i["rd"], to64(a | b))
            else:
                raise ValueError(fn)

        elif k == "st":
            addr = to64(regs[i["rs1"]] + sext(i["imm"], 12))
            val = regs[i["rs2"]]
            for byte in range(8):
                mem[to64(addr + byte)] = (val >> (8 * byte)) & 0xFF
            stats["stores"] += 1

        elif k == "jal":
            nxt = pc                                  # park: jump-to-self

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

# ---- Phase 1: operands ----
p.any(kind="ri", fn="addi", rd=1,  rs1=0, imm=5)          # x1  = 5
p.any(kind="ri", fn="addi", rd=2,  rs1=0, imm=-3)         # x2  = -3
p.any(kind="ri", fn="addi", rd=10, rs1=0, imm=-1)         # x10 = all-ones
p.any(kind="ri", fn="addi", rd=11, rs1=0, imm=1)
p.any(kind="ri", fn="slli", rd=11, rs1=11, shamt=31)      # x11 = 0x80000000
p.any(kind="ri", fn="addi", rd=12, rs1=0, imm=-1)
p.any(kind="ri", fn="srli", rd=12, rs1=12, shamt=33)      # x12 = 0x7FFFFFFF
p.any(kind="ri", fn="addi", rd=20, rs1=0, imm=1)
p.any(kind="ri", fn="slli", rd=20, rs1=20, shamt=31)      # x20 = DBASE 0x80000000
p.any(kind="ri", fn="addi", rd=13, rs1=0, imm=-1)
p.any(kind="ri", fn="slli", rd=13, rs1=13, shamt=32)      # x13 = FFFFFFFF_00000000
p.any(kind="ri", fn="addi", rd=15, rs1=0, imm=0x123)
p.any(kind="ri", fn="slli", rd=15, rs1=15, shamt=16)      # x15 = 01230000
p.any(kind="rr", fn="or",   rd=22, rs1=13, rs2=15)        # x22 = FFFFFFFF_01230000
p.any(kind="ri", fn="addi", rd=7,  rs1=0, imm=68)         # x7  = dirty shamt (68&31=4)

# ---- Phase 2: immediate W-forms (results x23..x31) ----
p.any(kind="ri", fn="addiw", w=1, rd=23, rs1=12, imm=1)   # wrap -> sext(80000000)
p.any(kind="ri", fn="addiw", w=1, rd=24, rs1=11, imm=-1)  # -> 0x7FFFFFFF
p.any(kind="ri", fn="addiw", w=1, rd=25, rs1=22, imm=0)   # dirty-high dropped
p.any(kind="ri", fn="slliw", w=1, rd=26, rs1=10, shamt=1) # word(-1)<<1 -> -2
p.any(kind="ri", fn="slliw", w=1, rd=27, rs1=11, shamt=31)# 0x80000000<<31 -> 0
p.any(kind="ri", fn="srliw", w=1, rd=28, rs1=10, shamt=4) # LOGICAL -> 0x0FFFFFFF
p.any(kind="ri", fn="srliw", w=1, rd=29, rs1=11, shamt=31)# -> 1
p.any(kind="ri", fn="sraiw", w=1, rd=30, rs1=22, shamt=8) # arith pos word
p.any(kind="ri", fn="sraiw", w=1, rd=31, rs1=11, shamt=4) # arith neg word

# ---- Phase 3: register W-forms (temps x13..x18 reused) ----
p.any(kind="rr", fn="addw", w=1, rd=13, rs1=11, rs2=12)   # 0x80000000+0x7FFFFFFF -> -1
p.any(kind="rr", fn="subw", w=1, rd=14, rs1=11, rs2=12)   # -> 1
p.any(kind="rr", fn="addw", w=1, rd=15, rs1=10, rs2=10)   # -1+-1 -> -2
p.any(kind="rr", fn="sllw", w=1, rd=16, rs1=2,  rs2=7)    # word(-3)<<4
p.any(kind="rr", fn="srlw", w=1, rd=17, rs1=10, rs2=7)    # word(-1)>>4 logical
p.any(kind="rr", fn="sraw", w=1, rd=18, rs1=22, rs2=7)    # pos word >>4 arith

# ---- Phase 4: forwarding through W results (RAW distance-1) ----
p.any(kind="rr", fn="addw", w=1, rd=13, rs1=13, rs2=1)    # -1+5 -> 4 (W-result fwd)
p.any(kind="ri", fn="slli", rd=14, rs1=14, shamt=60)      # 64-bit view of W result

# ---- Phase 5: spill everything, park ----
for off, rg in ((0x00, 23), (0x08, 24), (0x10, 25), (0x18, 26),
                (0x20, 27), (0x28, 28), (0x30, 29), (0x38, 30),
                (0x40, 31), (0x48, 13), (0x50, 14), (0x58, 15),
                (0x60, 16), (0x68, 17), (0x70, 18)):
    p.any(kind="st", fn="sd", rs1=20, rs2=rg, imm=off)
p.any(kind="jal", rd=0)                                   # park spin

# ------------------------------------------------------------------- emit
words = [p.encode(i) for i in p.insns]
regs, mem, stats = run_golden(p)

checks = sorted({a & ~7 for a in mem})
OUT.mkdir(parents=True, exist_ok=True)
(OUT / "tb_wops_imem.hex").write_text(
    "\n".join(f"{w & 0xFFFFFFFF:08x}" for w in words) + "\n")
(OUT / "tb_wops_expected_regs.mem").write_text(
    "\n".join(f"{to64(r):016x}" for r in regs) + "\n")

def qword(a):
    return int.from_bytes(bytes(mem.get(a + b, 0) for b in range(8)), "little")

(OUT / "tb_wops_expected_maddr.mem").write_text(
    "\n".join(f"{a:016x}" for a in checks) + "\n")
(OUT / "tb_wops_expected_mval.mem").write_text(
    "\n".join(f"{qword(a):016x}" for a in checks) + "\n")
(OUT / "tb_wops_expected_meta.mem").write_text(
    f"{stats['commits']:x}\n{stats['stores']:x}\n{len(checks):x}\n")

print(f"instructions : {len(words)}")
print(f"rf commits   : {stats['commits']}")
print(f"store beats  : {stats['stores']}")
print(f"mem checks   : {len(checks)}")
print("golden finals:")
for r in list(range(1, 9)) + [22] + list(range(23, 32)):
    print(f"  x{r:<2} = 0x{to64(regs[r]):016x}")
