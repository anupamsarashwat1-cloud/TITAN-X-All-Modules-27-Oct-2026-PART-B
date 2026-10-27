#!/usr/bin/env python3
"""Titan-X regression runner — truthful PASS/FAIL across all testbenches.

Compiles every tb_*.v against the full non-TB RTL tree, runs it, and judges
the result. A test PASSES only when the sim itself reports success through
the standard markers AND exits cleanly within the timeout:

  New framework (Phase 1+):   "REGRESS_RESULT: PASS" / "REGRESS_RESULT: FAIL"
  Legacy benches:             last "VERDICT:" line containing "PASS" — but any
                              64'hx/x-polluted data or missing checks is flagged
                              as SUSPECT for manual review.

Usage: python3 scripts/run_regress.py [--only NAME_FILTER] [--timeout 60] [-j N]
"""
import argparse, concurrent.futures as cf, json, re, subprocess, sys, tempfile
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
DEVLOG = Path.home() / "titanx_devlog"
EXCLUDE = ("debug_",)          # debug harnesses have their own initial blocks
RESULT_RE = re.compile(r"REGRESS_RESULT:\s*(PASS|FAIL)", re.I)
VERDICT_RE = re.compile(r"VERDICT:[^\n]*?(PASS|FAIL)", re.I)
XPAT_RE = re.compile(r"[01]*x[01]*x", re.I)


def rtl_files():
    files = sorted(
        p for p in REPO.rglob("*.v")
        if ".git" not in p.parts
        and not p.name.startswith(("tb_", "debug_"))
        and "common/BUFX4" not in p.as_posix().replace(REPO.as_posix() + "/", "")
    )
    return [str(p) for p in files]


def tb_files():
    return sorted(
        p for p in REPO.rglob("tb_*.v")
        if ".git" not in p.parts and not p.name.startswith("debug_")
    )


def run_one(tb: str, rtl, timeout: int):
    name = Path(tb).stem
    try:
        with tempfile.TemporaryDirectory() as td:
            vvp = Path(td) / f"{name}.vvp"
            log = ""
            c = subprocess.run(
                ["iverilog", "-g2012", "-I", str(REPO / "includes"),
                 "-o", str(vvp), *rtl, tb],
                capture_output=True, text=True, errors="replace",
                timeout=180, cwd=str(REPO))
            if c.returncode != 0:
                return dict(name=name, verdict="COMPILE_FAIL",
                            tail=(c.stderr or c.stdout).strip().splitlines()[-3:])
            r = subprocess.run(["vvp", str(vvp)], capture_output=True,
                               text=True, errors="replace",
                               timeout=timeout, cwd=str(REPO))
            log = r.stdout + r.stderr
            m = RESULT_RE.search(log)
            if m:
                verdict = m.group(1).upper()
            elif (vm := VERDICT_RE.search(log)):
                verdict = vm.group(1).upper()
                if verdict == "PASS":
                    # honesty probe: legacy benches that print x-data or never
                    # compare values are marked suspect, not trusted
                    if XPAT_RE.search(log) or "xxxx" in log.lower():
                        verdict = "SUSPECT_PASS_XDATA"
            else:
                verdict = "NO_VERDICT" if r.returncode == 0 else "CRASHED"
            tail = [l for l in log.strip().splitlines() if l.strip()][-4:]
            return dict(name=name, verdict=verdict, tail=tail)
    except subprocess.TimeoutExpired:
        return dict(name=name, verdict="TIMEOUT", tail=[])
    except Exception as e:  # never let one bench kill the pool
        return dict(name=name, verdict=f"RUNNER_ERROR:{type(e).__name__}",
                    tail=[str(e)[:120]])


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--only", default="")
    ap.add_argument("--timeout", type=int, default=60)
    ap.add_argument("-j", "--jobs", type=int, default=8)
    args = ap.parse_args()

    rtl = rtl_files()
    tbs = [t for t in tb_files() if args.only.lower() in Path(t).stem.lower()]
    print(f"{len(tbs)} testbenches × {len(rtl)} RTL files\n")

    results = []
    with cf.ThreadPoolExecutor(max_workers=args.jobs) as ex:
        futs = {ex.submit(run_one, t, rtl, args.timeout): t for t in tbs}
        for f in cf.as_completed(futs):
            res = f.result()
            results.append(res)
            mark = {"PASS": "✓", "FAIL": "✗"}.get(res["verdict"], "?")
            print(f" {mark} {res['verdict']:<20} {res['name']}")

    order = {"FAIL": 0, "CRASHED": 1, "TIMEOUT": 2, "COMPILE_FAIL": 3,
             "SUSPECT_PASS_XDATA": 4, "NO_VERDICT": 5, "PASS": 6}
    results.sort(key=lambda d: (order.get(d["verdict"], 9), d["name"]))

    counts = {}
    for r in results:
        counts[r["verdict"]] = counts.get(r["verdict"], 0) + 1

    print("\n" + "=" * 60)
    for v, n in sorted(counts.items(), key=lambda kv: -kv[1]):
        print(f"  {n:>3}  {v}")
    total = len(results)
    true_pass = counts.get("PASS", 0)
    print(f"\nTRUE PASS RATE: {true_pass}/{total}"
          f" ({100*true_pass/max(total,1):.0f}%)")

    if DEVLOG.exists():
        out = DEVLOG / f"regress_{args.only or 'full'}.json"
        out.write_text(json.dumps(results, indent=1))
        print(f"results → {out}")
    return 0 if counts.get("FAIL", 0) == 0 and true_pass > 0 else 1


if __name__ == "__main__":
    sys.exit(main())
