// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRV_CORE_TOP__SYMS_H_
#define VERILATED_VRV_CORE_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrv_core_top.h"

// INCLUDE MODULE CLASSES
#include "Vrv_core_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vrv_core_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrv_core_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrv_core_top___024root         TOP;

    // COVERAGE
    uint32_t __Vcoverage[4620];

    // CONSTRUCTORS
    Vrv_core_top__Syms(VerilatedContext* contextp, const char* namep, Vrv_core_top* modelp);
    ~Vrv_core_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
