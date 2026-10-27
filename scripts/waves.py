#!/usr/bin/env python3
"""Render selected signals from a VCD to a PNG waveform image.

Usage:
  python3 scripts/waves.py dump.vcd -o waves.png                # top signals
  python3 scripts/waves.py dump.vcd --match clk,rst,state -o w.png
  python3 scripts/waves.py dump.vcd --list | head -40           # discover names

Headless GTKWave alternative: matplotlib step plots, one lane per signal,
digital style. Output goes wherever -o says (default ~/titanx_devlog/waveforms/).
"""
import argparse
from pathlib import Path

import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
from vcdvcd import VCDVCD

STEP_H = 1.0


def collect(vcd_path):
    vcd = VCDVCD(str(vcd_path))
    sigs = {}
    for name in vcd.signals:
        sig = vcd[name]
        tv = sig.tv  # list of (time, valuestr)
        if not tv:
            continue
        times = [int(t) for t, _ in tv]
        vals = [v for _, v in tv]
        sigs[name.split(".")[-1] + f" [{name}]"] = (times, vals)
    return sigs


def digital_lane(ax, times, vals, color):
    # map value strings to y levels; multi-bit shown as level bands + labels
    uniq = list(dict.fromkeys(vals))
    lut = {v: len(uniq) - 1 - i for i, v in enumerate(uniq)}
    xs, ys = [], []
    t_prev = times[0]
    xs.append(t_prev); ys.append(lut[vals[0]])
    for t, v in zip(times[1:], vals[1:]):
        xs += [t, t]
        ys += [ys[-1], lut[v]]
        xs.append(t); ys.append(lut[v])
    ax.step(xs, ys, where="post", color=color, lw=1.2)
    if len(uniq) <= 6:
        for v, y in lut.items():
            ax.text(times[0], y + 0.15, v if len(v) <= 12 else v[:10] + "..",
                    fontsize=5.5, color="#666")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("vcd")
    ap.add_argument("-o", "--out", default="")
    ap.add_argument("--match", default="", help="comma-separated substrings")
    ap.add_argument("--limit", type=int, default=16)
    ap.add_argument("--list", action="store_true")
    a = ap.parse_args()

    sigs = collect(a.vcd)
    if a.list:
        for k in sorted(sigs):
            print(k)
        return

    keys = sorted(sigs)
    if a.match:
        subs = [s.strip().lower() for s in a.match.split(",") if s.strip()]
        keys = [k for k in keys if any(s in k.lower() for s in subs)]
    keys = keys[: a.limit]
    if not keys:
        raise SystemExit("no matching signals; try --list")

    h = max(0.45 * len(keys), 1.2)
    fig, axes = plt.subplots(len(keys), 1, figsize=(11, h), squeeze=False,
                             sharex=True)
    for ax, (title, (times, vals)) in zip(axes[:, 0], ((k, sigs[k]) for k in keys)):
        digital_lane(ax, times, vals, "#0a6e8a")
        ax.set_ylabel(title.split("[")[0].strip()[:18], rotation=0, ha="right",
                      va="center", fontsize=6)
        ax.set_yticks([])
        ax.set_ylim(-0.5, None)
        for sp in ("top", "right", "left"):
            ax.spines[sp].set_visible(False)
    axes[-1, 0].set_xlabel("simulation time")
    fig.suptitle(Path(a.vcd).name, fontsize=8)
    fig.tight_layout()
    out = a.out or str(Path.home() / "titanx_devlog/waveforms" / (Path(a.vcd).stem + ".png"))
    Path(out).parent.mkdir(parents=True, exist_ok=True)
    fig.savefig(out, dpi=150)
    print(f"saved → {out}")


if __name__ == "__main__":
    main()
