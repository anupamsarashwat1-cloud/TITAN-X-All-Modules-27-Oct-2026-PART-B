// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv_core_top.h for the primary calling header

#include "Vrv_core_top__pch.h"
#include "Vrv_core_top___024root.h"

void Vrv_core_top___024root___ico_sequent__TOP__0(Vrv_core_top___024root* vlSelf);

void Vrv_core_top___024root___eval_ico(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vrv_core_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vrv_core_top___024root___eval_triggers__ico(Vrv_core_top___024root* vlSelf);

bool Vrv_core_top___024root___eval_phase__ico(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vrv_core_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vrv_core_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vrv_core_top___024root___eval_act(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_act\n"); );
}

void Vrv_core_top___024root___nba_sequent__TOP__0(Vrv_core_top___024root* vlSelf);
void Vrv_core_top___024root___nba_sequent__TOP__1(Vrv_core_top___024root* vlSelf);
void Vrv_core_top___024root___nba_sequent__TOP__2(Vrv_core_top___024root* vlSelf);

void Vrv_core_top___024root___eval_nba(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrv_core_top___024root___nba_sequent__TOP__0(vlSelf);
        Vrv_core_top___024root___nba_sequent__TOP__1(vlSelf);
        Vrv_core_top___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vrv_core_top___024root___eval_triggers__act(Vrv_core_top___024root* vlSelf);

bool Vrv_core_top___024root___eval_phase__act(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vrv_core_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vrv_core_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vrv_core_top___024root___eval_phase__nba(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vrv_core_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv_core_top___024root___dump_triggers__ico(Vrv_core_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv_core_top___024root___dump_triggers__nba(Vrv_core_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv_core_top___024root___dump_triggers__act(Vrv_core_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vrv_core_top___024root___eval(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vrv_core_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("backend/rv_core_top/rv_core_top.v", 25, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vrv_core_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vrv_core_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("backend/rv_core_top/rv_core_top.v", 25, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vrv_core_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("backend/rv_core_top/rv_core_top.v", 25, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vrv_core_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vrv_core_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vrv_core_top___024root___eval_debug_assertions(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->irq_m_ext & 0xfeU))) {
        Verilated::overWidthError("irq_m_ext");}
    if (VL_UNLIKELY((vlSelf->irq_m_timer & 0xfeU))) {
        Verilated::overWidthError("irq_m_timer");}
    if (VL_UNLIKELY((vlSelf->irq_m_soft & 0xfeU))) {
        Verilated::overWidthError("irq_m_soft");}
    if (VL_UNLIKELY((vlSelf->imem_arready & 0xfeU))) {
        Verilated::overWidthError("imem_arready");}
    if (VL_UNLIKELY((vlSelf->imem_rvalid & 0xfeU))) {
        Verilated::overWidthError("imem_rvalid");}
    if (VL_UNLIKELY((vlSelf->imem_rlast & 0xfeU))) {
        Verilated::overWidthError("imem_rlast");}
    if (VL_UNLIKELY((vlSelf->imem_rresp & 0xfcU))) {
        Verilated::overWidthError("imem_rresp");}
    if (VL_UNLIKELY((vlSelf->dmem_awready & 0xfeU))) {
        Verilated::overWidthError("dmem_awready");}
    if (VL_UNLIKELY((vlSelf->dmem_wready & 0xfeU))) {
        Verilated::overWidthError("dmem_wready");}
    if (VL_UNLIKELY((vlSelf->dmem_bvalid & 0xfeU))) {
        Verilated::overWidthError("dmem_bvalid");}
    if (VL_UNLIKELY((vlSelf->dmem_bresp & 0xfcU))) {
        Verilated::overWidthError("dmem_bresp");}
    if (VL_UNLIKELY((vlSelf->dmem_arready & 0xfeU))) {
        Verilated::overWidthError("dmem_arready");}
    if (VL_UNLIKELY((vlSelf->dmem_rvalid & 0xfeU))) {
        Verilated::overWidthError("dmem_rvalid");}
    if (VL_UNLIKELY((vlSelf->dmem_rlast & 0xfeU))) {
        Verilated::overWidthError("dmem_rlast");}
    if (VL_UNLIKELY((vlSelf->dmem_rresp & 0xfcU))) {
        Verilated::overWidthError("dmem_rresp");}
    if (VL_UNLIKELY((vlSelf->snoop_valid & 0xfeU))) {
        Verilated::overWidthError("snoop_valid");}
    if (VL_UNLIKELY((vlSelf->snoop_addr & 0ULL))) {
        Verilated::overWidthError("snoop_addr");}
    if (VL_UNLIKELY((vlSelf->snoop_type & 0xfcU))) {
        Verilated::overWidthError("snoop_type");}
    if (VL_UNLIKELY((vlSelf->halt_req & 0xfeU))) {
        Verilated::overWidthError("halt_req");}
    if (VL_UNLIKELY((vlSelf->resume_req & 0xfeU))) {
        Verilated::overWidthError("resume_req");}
}
#endif  // VL_DEBUG
