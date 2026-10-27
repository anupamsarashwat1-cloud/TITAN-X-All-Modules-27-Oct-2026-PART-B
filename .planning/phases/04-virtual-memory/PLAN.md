# Phase 4: CPU Virtual Memory, MMU & PMP Subsystem — Plan

> **Phase Goal:** Exhaustively verify the RV64 Sv39 virtual memory translation hierarchy, 64-entry fully-associative TLB with ASID tagging and SFENCE.VMA invalidation, 3-level hardware Page Table Walker (PTW), 16-region Physical Memory Protection (PMP), and integrated MMU top.

---

## 1. Modules in Scope
1. `rv_tlb.v`: 64-Entry fully-associative translation lookaside buffer, 16-bit ASID matching, pseudo-LRU replacement, SFENCE.VMA global/ASID shootdown.
2. `rv_ptw.v`: 3-Level hardware Page Table Walker (L2 -> L1 -> L0) for Sv39 (4KB, 2MB, 1GB pages), AXI4 read interface, page-fault generation.
3. `rv_pmp.v`: 16-Region Physical Memory Protection checker supporting TOR, NAPOT, NA4 address matching modes across Machine, Supervisor, and User privilege levels.
4. `rv_mmu.v`: Sv39 MMU top integrating TLB, PTW, and PMP with `satp.MODE` bare/Sv39 switching, access fault traps, and core request arbitration.

---

## 2. Verification Tasks
- **Task 4.1: `rv_tlb`** — Cold miss, fill & hit validation, ASID isolation, SFENCE.VMA single-page vs all-page invalidation.
- **Task 4.2: `rv_ptw`** — 3-level page table walk sequence (L2/L1/L0), leaf page identification (4KB/2MB/1GB), invalid PTE & access fault detection.
- **Task 4.3: `rv_pmp`** — TOR/NAPOT/NA4 range matching, read/write/execute permission enforcement, Machine mode lock (`L` bit) bypass rules.
- **Task 4.4: `rv_mmu`** — Bare mode bypass (`satp.MODE = 0`), Sv39 virtual-to-physical translation flow, page fault generation, and core stall signalling.

---

## 3. Acceptance Criteria
- [x] 100% assertions pass across all 4 module testbenches.
- [x] VCD waveforms rendered to PNG and stored in `docs/waveforms/` and module folders.
- [x] Each module's `README.md` enriched with verified test matrices and simulation logs.
- [x] Logged to `progress.txt` and committed to git.

