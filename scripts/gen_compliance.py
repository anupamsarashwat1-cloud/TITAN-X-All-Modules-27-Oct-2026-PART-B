#!/usr/bin/env python3
"""Step 5.5 compliance harness: random-program diff vs qemu-riscv64.

Generates a deterministic pseudo-random RV64IM program (fixed seed),
assembles it ONCE with riscv64-unknown-elf-as (toolchain-verified
encodings -- no hand-rolled encoder assumptions), then:

  RTL world : linked at BASE=0x20000, dumped as verilog hex, runs on
              rv_core_top; final regs land in the TB shadow RF, the
              scratch window lands in TB dmem.
  Host world: SAME instruction sequence, run under qemu-riscv64 user
              mode; _start dumps x5..x31 + the whole scratch window
              through raw Linux write()/exit() ecalls.

The parser turns qemu's dump into tb_compliance_expected_*.mem. Any
RTL/qemu disagreement is an RTL ISA bug (or a shared generator bug --
which is why the assembler, not a Python encoder, produces opcodes).

Address map (BOTH worlds identical):
  0x0002_0000  text (program)
  0x8000_0000  scratch window, 1 KiB, zero-init   <-- x20 base
  0x8000_0400  reg-dump buffer (27 * 8 B)

qemu dump format = [reg-dump 216 B][scratch 1024 B] (single write).
Registers x2/x3/x4 (sp/gp/tp) are never written by generated code so
the syscall prologue stays intact; x1 stays free as link reg.
"""
import os
import pathlib
import random
import struct
import subprocess
import sys

REPO = pathlib.Path(__file__).resolve().parent.parent
OUT = pathlib.Path(os.environ.get("COMPLIANCE_OUT",
                                  str(REPO / "backend/rv_core_top")))
BUILD = pathlib.Path("/tmp/titanx_compliance")
BASE = 0x0002_0000
DBASE = 0x8000_0000
DUMP_OFF = 0x400                       # dumpbuf = DBASE + DUMP_OFF
SCRATCH_WORDS = 128                    # 1 KiB checked window
N_INSN = 400
SEED = int(os.environ.get("COMPLIANCE_SEED", "20260826"))
NREGS = 27                             # x5..x31

R = random.Random(SEED)
GPRS = [5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30]   # x20 reserved = DBASE


class Prog:
    def __init__(self):
        self.lines = []

    def emit(self, s):
        self.lines.append(s)

    def label(self, name):
        self.lines.append(name + ":")


def gen_program():
    p = Prog()
    p.emit("_start:")
    p.emit(f"li x20, {DBASE:#x}")
    n = 0
    while True:
        body = len([l for l in p.lines
                    if not l.endswith(":") and l != "_start:"])
        if body >= N_INSN:
            break
        n += 1
        k = R.random()
        rd = R.choice(GPRS)
        rs1 = R.choice(GPRS + [0])
        rs2 = R.choice(GPRS + [0])
        if k < 0.20:                                    # OP-IMM
            mn = R.choice(["addi", "slti", "sltiu", "xori", "ori", "andi"])
            p.emit(f"{mn} x{rd}, x{rs1}, {R.randint(-2048, 2047)}")
        elif k < 0.29:                                  # shifts (64 + 32)
            w32 = R.random() < 0.35
            mn = R.choice(["slli", "srli", "srai"] +
                          (["slliw", "srliw", "sraiw"] if w32 else []))
            sh = R.randint(0, 31) if w32 else R.randint(0, 63)
            p.emit(f"{mn} x{rd}, x{rs1}, {sh}")
        elif k < 0.41:                                  # OP
            mn = R.choice(["add", "sub", "sll", "slt", "sltu", "xor",
                           "srl", "sra", "or", "and"])
            p.emit(f"{mn} x{rd}, x{rs1}, x{rs2}")
        elif k < 0.49:                                  # OP-32
            mn = R.choice(["addw", "subw", "sllw", "srlw", "sraw"])
            p.emit(f"{mn} x{rd}, x{rs1}, x{rs2}")
        elif k < 0.61:                                  # M
            mn = R.choice(["mul", "mulh", "mulhsu", "mulhu",
                           "div", "divu", "rem", "remu"])
            p.emit(f"{mn} x{rd}, x{rs1}, x{rs2}")
        elif k < 0.67:                                  # M-32
            mn = R.choice(["mulw", "divw", "divuw", "remw", "remuw"])
            p.emit(f"{mn} x{rd}, x{rs1}, x{rs2}")
        elif k < 0.71:                                  # LUI
            p.emit(f"lui x{rd}, {R.randint(0, 0xFFFFF)}")
        elif k < 0.83:                                  # loads
            mn, align = R.choice([("ld", 8), ("lw", 4), ("lwu", 4),
                                  ("lh", 2), ("lhu", 2),
                                  ("lb", 1), ("lbu", 1)])
            off = R.randrange(0, SCRATCH_WORDS * 8 - 16, align)
            p.emit(f"mv x{rd}, x20")                    # fresh addr each time
            p.emit(f"{mn} x{rd}, {off}(x{rd})")
        elif k < 0.93:                                  # stores
            mn, align = R.choice([("sd", 8), ("sw", 4), ("sh", 2), ("sb", 1)])
            off = R.randrange(0, SCRATCH_WORDS * 8 - 16, align)
            p.emit(f"{mn} x{rs2}, {off}(x20)")
        else:                                           # forward branch
            tgt = f"skip{n}"
            mn = R.choice(["beq", "bne", "blt", "bge", "bltu", "bgeu"])
            p.emit(f"{mn} x{rs1}, x{rs2}, {tgt}")
            for _ in range(R.randint(1, 4)):
                p.emit(f"addi x{R.choice(GPRS)}, x{R.choice(GPRS)}, "
                       f"{R.randint(-99, 99)}")
            p.label(tgt)
    return p


def epilogue(is_host):
    dump = []
    for i, rg in enumerate(range(5, 32)):
        dump.append(f"sd x{rg}, {(i + 1) * 8}(x6)")
    nl = chr(10)
    common = [
        "    la x6, dumpbuf",
    ] + dump
    out = list(common)
    if is_host:
        out += [
            f"    li x7, 0x51CEB10C",
            f"    sd x7, 0(x6)",
            # write(1, dumpbuf, 28*8)
            "    li a0, 1",
            "    addi a1, x6, 0",
            f"    li a2, {(NREGS + 1) * 8}",
            "    li a7, 64",
            "    ecall",
            # write(1, scratch, 1 KiB)
            "    li a0, 1",
            f"    li a1, {DBASE:#x}",
            f"    li a2, {SCRATCH_WORDS * 8}",
            "    li a7, 64",
            "    ecall",
            # exit(0)
            "    li a0, 0",
            "    li a7, 93",
            "    ecall",
            "    j .",
        ]
    else:
        out += ["1:  j 1b"]                        # park
    return nl.join(out)


BSS_TAIL = """
    .section .bss.scratch,"aw",@nobits
    .align 3
scratch:
    .skip %d
dumpbuf:
    .align 3
    .skip %d
""" % (SCRATCH_WORDS * 8, (NREGS + 1) * 8)


def main():
    BUILD.mkdir(parents=True, exist_ok=True)
    body = "\n".join(gen_program().lines)
    (BUILD / "rtl.S").write_text(body + "\n" + epilogue(False) + BSS_TAIL)
    (BUILD / "host.S").write_text(body + "\n" + epilogue(True) + BSS_TAIL)

    def run(cmd):
        r = subprocess.run(cmd, capture_output=True, text=True)
        if r.returncode != 0:
            print(r.stdout, r.stderr)
            sys.exit(f"FAILED: {' '.join(cmd)}")

    ld = "-Wl,-Ttext=0x20000,-Tbss=0x80000000"
    march = ["-march=rv64im_zicsr", "-mabi=lp64"]
    run(["riscv64-unknown-elf-gcc", "-nostdlib"] + march +
        ["-mcmodel=medany", ld, "-o", str(BUILD / "rtl.elf"),
         str(BUILD / "rtl.S")])
    run(["riscv64-unknown-elf-gcc", "-nostdlib"] + march +
        ["-mcmodel=medany", ld, "-o", str(BUILD / "host.elf"),
         str(BUILD / "host.S")])

    oc = subprocess.run(
        ["riscv64-unknown-elf-objcopy", "-O", "binary",
         str(BUILD / "rtl.elf"), str(BUILD / "rtl.bin")],
        capture_output=True, text=True)
    assert oc.returncode == 0, oc.stderr
    blob = (BUILD / "rtl.bin").read_bytes()
    assert len(blob) % 4 == 0
    words = [int.from_bytes(blob[i:i + 4], "little")
             for i in range(0, len(blob), 4)]
    (OUT / "tb_compliance_imem.hex").write_text(
        "".join(f"{w & 0xFFFFFFFF:08x}\n" for w in words))

    qr = subprocess.run(["qemu-riscv64", str(BUILD / "host.elf")],
                        capture_output=True)
    assert qr.returncode == 0, (
        f"qemu rc={qr.returncode} err={qr.stderr[:300]}")
    dump = qr.stdout
    # Layout as stored: magic at 0, then x5..x31 at (i+1)*8.
    magic, = struct.unpack_from("<Q", dump, 0)
    assert magic == 0x51CEB10C, f"bad magic {magic:#x}"

    exp_regs = [0] * 32
    for i, rg in enumerate(range(5, 32)):
        exp_regs[rg], = struct.unpack_from("<Q", dump, (i + 1) * 8)
    exp_regs[20] = DBASE                      # prologue constant, sanity tie
    (OUT / "tb_compliance_expected_regs.mem").write_text(
        "".join(f"{v & ((1 << 64) - 1):016x}\n" for v in exp_regs))

    mem_off = (NREGS + 1) * 8
    lines_a, lines_v = [], []
    for wi in range(SCRATCH_WORDS):
        val, = struct.unpack_from("<Q", dump, mem_off + wi * 8)
        lines_a.append(f"{DBASE + wi * 8:010x}\n")
        lines_v.append(f"{val & ((1 << 64) - 1):016x}\n")
    (OUT / "tb_compliance_expected_maddr.mem").write_text("".join(lines_a))
    (OUT / "tb_compliance_expected_mval.mem").write_text("".join(lines_v))
    (OUT / "tb_compliance_expected_meta.mem").write_text(
        f"{SCRATCH_WORDS:016x}\n")

    print(f"program: {len(words)} words @ {BASE:#x} "
          f"(seed {SEED}, ~{N_INSN} insns)")
    print("sample finals:", " ".join(f"x{i}={exp_regs[i]:#x}"
                                     for i in (5, 10, 15, 31)))


if __name__ == "__main__":
    main()
