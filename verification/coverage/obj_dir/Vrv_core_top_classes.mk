# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vrv_core_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vrv_core_top \
	Vrv_core_top___024root__DepSet_hb2c072d7__0 \
	Vrv_core_top___024root__DepSet_hb2c072d7__1 \
	Vrv_core_top___024root__DepSet_hb2c072d7__2 \
	Vrv_core_top___024root__DepSet_hc135021a__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vrv_core_top__ConstPool_0 \
	Vrv_core_top___024root__Slow \
	Vrv_core_top___024root__DepSet_hb2c072d7__0__Slow \
	Vrv_core_top___024root__DepSet_hb2c072d7__1__Slow \
	Vrv_core_top___024root__DepSet_hb2c072d7__2__Slow \
	Vrv_core_top___024root__DepSet_hb2c072d7__3__Slow \
	Vrv_core_top___024root__DepSet_hc135021a__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vrv_core_top__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
