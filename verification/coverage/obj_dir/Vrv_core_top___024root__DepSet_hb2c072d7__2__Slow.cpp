// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv_core_top.h for the primary calling header

#include "Vrv_core_top__pch.h"
#include "Vrv_core_top__Syms.h"
#include "Vrv_core_top___024root.h"

VL_ATTR_COLD void Vrv_core_top___024root___stl_sequent__TOP__2(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___stl_sequent__TOP__2\n"); );
    // Init
    CData/*5:0*/ rv_core_top__DOT__u_execute__DOT__shamt;
    rv_core_top__DOT__u_execute__DOT__shamt = 0;
    QData/*63:0*/ rv_core_top__DOT__u_execute__DOT__alu_res_comb;
    rv_core_top__DOT__u_execute__DOT__alu_res_comb = 0;
    QData/*63:0*/ rv_core_top__DOT__u_execute__DOT__mul_r;
    rv_core_top__DOT__u_execute__DOT__mul_r = 0;
    QData/*63:0*/ rv_core_top__DOT__u_execute__DOT__div_r;
    rv_core_top__DOT__u_execute__DOT__div_r = 0;
    CData/*0:0*/ rv_core_top__DOT__u_execute__DOT__sys_illegal;
    rv_core_top__DOT__u_execute__DOT__sys_illegal = 0;
    CData/*0:0*/ rv_core_top__DOT__u_execute__DOT__csr_commit;
    rv_core_top__DOT__u_execute__DOT__csr_commit = 0;
    CData/*0:0*/ rv_core_top__DOT__u_execute__DOT__irq_pend;
    rv_core_top__DOT__u_execute__DOT__irq_pend = 0;
    QData/*63:0*/ rv_core_top__DOT__u_execute__DOT__alu_res_w;
    rv_core_top__DOT__u_execute__DOT__alu_res_w = 0;
    QData/*63:0*/ rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h70daa183__0;
    rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h70daa183__0 = 0;
    CData/*0:0*/ rv_core_top__DOT__u_execute__DOT____VdfgTmp_h885ddce2__0;
    rv_core_top__DOT__u_execute__DOT____VdfgTmp_h885ddce2__0 = 0;
    // Body
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3251]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3252]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3253]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3255]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3256]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3257]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3258]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[3259]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    rv_core_top__DOT__u_execute__DOT__div_r = ((0x10U 
                                                == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))
                                                ? vlSelf->rv_core_top__DOT__u_execute__DOT__quot_raw
                                                : (
                                                   (0x11U 
                                                    == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))
                                                    ? vlSelf->rv_core_top__DOT__u_execute__DOT__d_quot
                                                    : 
                                                   ((0x12U 
                                                     == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))
                                                     ? vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw
                                                     : vlSelf->rv_core_top__DOT__u_execute__DOT__d_rem)));
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__irq_any) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__irq_any))) {
        ++(vlSymsp->__Vcoverage[4514]);
        vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__irq_any 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__irq_any;
    }
    rv_core_top__DOT__u_execute__DOT__irq_pend = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__irq_any) 
                                                  & (IData)(
                                                            (vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mstatus_q 
                                                             >> 3U)));
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__sys_present) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__sys_present))) {
        ++(vlSymsp->__Vcoverage[3394]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__sys_present 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__sys_present;
    }
    rv_core_top__DOT__u_execute__DOT__sys_illegal = 
        ((~ ((IData)(vlSelf->rv_core_top__DOT__de_iscsr) 
             | ((IData)(vlSelf->rv_core_top__DOT__de_ecall) 
                | ((IData)(vlSelf->rv_core_top__DOT__de_ebreak) 
                   | (IData)(vlSelf->rv_core_top__DOT__de_mret))))) 
         & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__sys_present));
    vlSelf->rv_core_top__DOT__u_execute__DOT__csr_illegal 
        = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__sys_present) 
           & ((~ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__csr_impl)) 
              & (IData)(vlSelf->rv_core_top__DOT__de_iscsr)));
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__is_div) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_div))) {
        ++(vlSymsp->__Vcoverage[1964]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_div 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__is_div;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__is_mul) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_mul))) {
        ++(vlSymsp->__Vcoverage[1963]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_mul 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__is_mul;
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__is_mext 
        = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__is_mul) 
           | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__is_div));
    if ((1U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2806]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfffffffeU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (1U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((2U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2807]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfffffffdU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (2U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((4U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2808]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfffffffbU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (4U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((8U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2809]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfffffff7U & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (8U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x10U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2810]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xffffffefU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x10U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x20U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2811]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xffffffdfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x20U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x40U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2812]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xffffffbfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x40U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x80U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2813]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xffffff7fU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x80U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x100U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2814]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfffffeffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x100U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x200U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2815]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfffffdffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x200U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x400U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2816]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfffffbffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x400U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x800U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2817]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfffff7ffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x800U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x1000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2818]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xffffefffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x1000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x2000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2819]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xffffdfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x2000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x4000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2820]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xffffbfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x4000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x8000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2821]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xffff7fffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x8000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x10000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2822]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfffeffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x10000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x20000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2823]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfffdffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x20000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x40000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2824]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfffbffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x40000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x80000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2825]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfff7ffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x80000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x100000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2826]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xffefffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x100000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x200000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2827]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xffdfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x200000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x400000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2828]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xffbfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x400000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x800000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2829]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xff7fffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x800000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x1000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2830]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfeffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x1000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x2000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2831]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfdffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x2000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x4000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2832]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xfbffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x4000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x8000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2833]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xf7ffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x8000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x10000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2834]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xefffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x10000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x20000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2835]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xdfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x20000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((0x40000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]))) {
        ++(vlSymsp->__Vcoverage[2836]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0xbfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x40000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if (((vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U] 
          ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2837]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U] 
            = ((0x7fffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[0U]) 
               | (0x80000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[0U]));
    }
    if ((1U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2838]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfffffffeU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (1U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((2U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2839]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfffffffdU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (2U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((4U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2840]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfffffffbU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (4U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((8U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2841]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfffffff7U & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (8U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x10U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2842]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xffffffefU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x10U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x20U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2843]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xffffffdfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x20U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x40U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2844]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xffffffbfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x40U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x80U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2845]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xffffff7fU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x80U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x100U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2846]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfffffeffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x100U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x200U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2847]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfffffdffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x200U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x400U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2848]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfffffbffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x400U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x800U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2849]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfffff7ffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x800U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x1000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2850]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xffffefffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x1000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x2000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2851]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xffffdfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x2000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x4000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2852]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xffffbfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x4000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x8000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2853]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xffff7fffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x8000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x10000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2854]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfffeffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x10000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x20000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2855]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfffdffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x20000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x40000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2856]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfffbffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x40000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x80000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2857]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfff7ffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x80000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x100000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2858]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xffefffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x100000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x200000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2859]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xffdfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x200000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x400000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2860]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xffbfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x400000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x800000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2861]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xff7fffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x800000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x1000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2862]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfeffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x1000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x2000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2863]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfdffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x2000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x4000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2864]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xfbffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x4000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x8000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2865]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xf7ffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x8000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x10000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2866]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xefffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x10000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x20000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2867]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xdfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x20000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((0x40000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]))) {
        ++(vlSymsp->__Vcoverage[2868]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0xbfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x40000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if (((vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U] 
          ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2869]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U] 
            = ((0x7fffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[1U]) 
               | (0x80000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[1U]));
    }
    if ((1U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2870]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfffffffeU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (1U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((2U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2871]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfffffffdU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (2U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((4U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2872]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfffffffbU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (4U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((8U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2873]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfffffff7U & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (8U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x10U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2874]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xffffffefU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x10U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x20U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2875]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xffffffdfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x20U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x40U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2876]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xffffffbfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x40U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x80U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2877]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xffffff7fU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x80U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x100U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2878]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfffffeffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x100U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x200U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2879]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfffffdffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x200U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x400U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2880]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfffffbffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x400U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x800U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2881]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfffff7ffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x800U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x1000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2882]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xffffefffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x1000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x2000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2883]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xffffdfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x2000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x4000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2884]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xffffbfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x4000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x8000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xffff7fffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x8000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x10000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfffeffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x10000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x20000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfffdffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x20000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x40000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfffbffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x40000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x80000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfff7ffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x80000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x100000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xffefffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x100000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x200000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xffdfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x200000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x400000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xffbfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x400000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x800000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xff7fffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x800000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x1000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfeffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x1000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x2000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfdffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x2000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x4000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xfbffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x4000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x8000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xf7ffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x8000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x10000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xefffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x10000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x20000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xdfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x20000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((0x40000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0xbfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x40000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if (((vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U] 
          ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U] 
            = ((0x7fffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[2U]) 
               | (0x80000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]));
    }
    if ((1U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfffffffeU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (1U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((2U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfffffffdU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (2U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((4U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfffffffbU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (4U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((8U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfffffff7U & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (8U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x10U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xffffffefU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x10U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x20U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xffffffdfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x20U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x40U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xffffffbfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x40U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x80U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xffffff7fU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x80U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x100U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfffffeffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x100U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x200U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfffffdffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x200U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x400U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfffffbffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x400U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x800U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfffff7ffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x800U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x1000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xffffefffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x1000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x2000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xffffdfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x2000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x4000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xffffbfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x4000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x8000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xffff7fffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x8000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x10000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfffeffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x10000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x20000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfffdffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x20000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x40000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfffbffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x40000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x80000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfff7ffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x80000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x100000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xffefffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x100000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x200000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xffdfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x200000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x400000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xffbfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x400000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x800000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xff7fffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x800000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x1000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfeffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x1000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x2000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfdffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x2000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x4000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xfbffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x4000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x8000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xf7ffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x8000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x10000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xefffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x10000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x20000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2931]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xdfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x20000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((0x40000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]))) {
        ++(vlSymsp->__Vcoverage[2932]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0xbfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x40000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if (((vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U] 
          ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2933]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U] 
            = ((0x7fffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su[3U]) 
               | (0x80000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U]));
    }
    if ((1U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2934]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfffffffeU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (1U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((2U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2935]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfffffffdU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (2U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((4U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2936]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfffffffbU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (4U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((8U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2937]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfffffff7U & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (8U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x10U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2938]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xffffffefU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x10U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x20U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2939]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xffffffdfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x20U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x40U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2940]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xffffffbfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x40U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x80U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2941]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xffffff7fU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x80U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x100U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2942]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfffffeffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x100U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x200U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2943]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfffffdffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x200U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x400U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2944]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfffffbffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x400U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x800U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2945]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfffff7ffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x800U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x1000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2946]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xffffefffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x1000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x2000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2947]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xffffdfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x2000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x4000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2948]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xffffbfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x4000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x8000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2949]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xffff7fffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x8000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x10000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2950]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfffeffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x10000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x20000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2951]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfffdffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x20000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x40000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2952]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfffbffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x40000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x80000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2953]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfff7ffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x80000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x100000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2954]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xffefffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x100000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x200000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2955]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xffdfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x200000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x400000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2956]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xffbfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x400000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x800000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2957]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xff7fffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x800000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x1000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2958]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfeffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x1000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x2000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2959]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfdffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x2000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x4000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2960]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xfbffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x4000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x8000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2961]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xf7ffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x8000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x10000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2962]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xefffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x10000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x20000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2963]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xdfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x20000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((0x40000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]))) {
        ++(vlSymsp->__Vcoverage[2964]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0xbfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x40000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if (((vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U] 
          ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2965]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U] 
            = ((0x7fffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[0U]) 
               | (0x80000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[0U]));
    }
    if ((1U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2966]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfffffffeU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (1U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((2U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2967]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfffffffdU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (2U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((4U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2968]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfffffffbU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (4U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((8U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2969]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfffffff7U & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (8U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x10U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2970]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xffffffefU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x10U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x20U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2971]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xffffffdfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x20U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x40U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2972]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xffffffbfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x40U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x80U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2973]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xffffff7fU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x80U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x100U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2974]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfffffeffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x100U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x200U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2975]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfffffdffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x200U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x400U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2976]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfffffbffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x400U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x800U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2977]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfffff7ffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x800U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x1000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2978]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xffffefffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x1000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x2000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2979]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xffffdfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x2000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x4000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2980]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xffffbfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x4000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x8000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2981]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xffff7fffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x8000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x10000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2982]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfffeffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x10000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x20000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2983]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfffdffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x20000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x40000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2984]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfffbffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x40000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x80000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2985]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfff7ffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x80000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x100000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2986]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xffefffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x100000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x200000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2987]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xffdfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x200000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x400000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2988]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xffbfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x400000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x800000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xff7fffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x800000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x1000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfeffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x1000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x2000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfdffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x2000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x4000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xfbffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x4000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x8000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xf7ffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x8000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x10000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xefffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x10000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x20000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xdfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x20000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((0x40000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]))) {
        ++(vlSymsp->__Vcoverage[2996]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0xbfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x40000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if (((vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U] 
          ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2997]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U] 
            = ((0x7fffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[1U]) 
               | (0x80000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[1U]));
    }
    if ((1U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2998]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfffffffeU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (1U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((2U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[2999]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfffffffdU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (2U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((4U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3000]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfffffffbU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (4U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((8U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3001]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfffffff7U & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (8U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x10U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3002]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xffffffefU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x10U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x20U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3003]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xffffffdfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x20U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x40U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3004]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xffffffbfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x40U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x80U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3005]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xffffff7fU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x80U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x100U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfffffeffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x100U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x200U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfffffdffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x200U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x400U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfffffbffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x400U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x800U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfffff7ffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x800U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x1000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xffffefffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x1000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x2000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xffffdfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x2000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x4000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xffffbfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x4000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x8000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xffff7fffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x8000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x10000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfffeffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x10000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x20000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfffdffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x20000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x40000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfffbffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x40000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x80000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfff7ffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x80000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x100000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xffefffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x100000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x200000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xffdfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x200000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x400000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xffbfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x400000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x800000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xff7fffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x800000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x1000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfeffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x1000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x2000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfdffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x2000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x4000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xfbffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x4000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x8000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xf7ffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x8000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x10000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xefffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x10000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x20000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xdfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x20000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((0x40000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0xbfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x40000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if (((vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U] 
          ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U] 
            = ((0x7fffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[2U]) 
               | (0x80000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U]));
    }
    if ((1U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfffffffeU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (1U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((2U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfffffffdU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (2U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((4U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfffffffbU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (4U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((8U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfffffff7U & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (8U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x10U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xffffffefU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x10U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x20U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xffffffdfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x20U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x40U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xffffffbfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x40U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x80U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xffffff7fU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x80U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x100U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfffffeffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x100U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x200U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfffffdffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x200U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x400U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfffffbffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x400U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x800U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfffff7ffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x800U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x1000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xffffefffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x1000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x2000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xffffdfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x2000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x4000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xffffbfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x4000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x8000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xffff7fffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x8000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x10000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfffeffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x10000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x20000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfffdffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x20000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x40000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfffbffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x40000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x80000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfff7ffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x80000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x100000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xffefffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x100000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x200000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xffdfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x200000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x400000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xffbfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x400000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x800000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xff7fffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x800000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x1000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfeffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x1000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x2000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfdffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x2000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x4000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xfbffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x4000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x8000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xf7ffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x8000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x10000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xefffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x10000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x20000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xdfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x20000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((0x40000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0xbfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x40000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if (((vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U] 
          ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U] 
            = ((0x7fffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu[3U]) 
               | (0x80000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U]));
    }
    if ((1U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfffffffeU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (1U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((2U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfffffffdU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (2U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((4U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfffffffbU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (4U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((8U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfffffff7U & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (8U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x10U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xffffffefU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x10U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x20U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xffffffdfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x20U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x40U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xffffffbfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x40U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x80U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xffffff7fU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x80U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x100U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfffffeffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x100U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x200U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfffffdffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x200U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x400U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfffffbffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x400U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x800U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfffff7ffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x800U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x1000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xffffefffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x1000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x2000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xffffdfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x2000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x4000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2692]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xffffbfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x4000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x8000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2693]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xffff7fffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x8000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x10000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2694]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfffeffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x10000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x20000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2695]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfffdffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x20000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x40000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2696]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfffbffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x40000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x80000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2697]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfff7ffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x80000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x100000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2698]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xffefffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x100000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x200000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2699]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xffdfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x200000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x400000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2700]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xffbfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x400000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x800000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2701]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xff7fffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x800000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x1000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2702]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfeffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x1000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x2000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2703]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfdffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x2000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x4000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2704]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xfbffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x4000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x8000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2705]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xf7ffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x8000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x10000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2706]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xefffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x10000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x20000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2707]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xdfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x20000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((0x40000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]))) {
        ++(vlSymsp->__Vcoverage[2708]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0xbfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x40000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if (((vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
          ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U] 
            = ((0x7fffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[0U]) 
               | (0x80000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]));
    }
    if ((1U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfffffffeU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (1U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((2U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfffffffdU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (2U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((4U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfffffffbU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (4U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((8U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfffffff7U & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (8U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x10U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xffffffefU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x10U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x20U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xffffffdfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x20U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x40U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xffffffbfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x40U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x80U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xffffff7fU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x80U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x100U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfffffeffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x100U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x200U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfffffdffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x200U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x400U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfffffbffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x400U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x800U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfffff7ffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x800U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x1000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xffffefffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x1000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x2000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xffffdfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x2000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x4000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xffffbfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x4000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x8000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xffff7fffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x8000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x10000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfffeffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x10000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x20000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfffdffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x20000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x40000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfffbffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x40000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x80000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfff7ffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x80000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x100000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xffefffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x100000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x200000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xffdfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x200000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x400000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xffbfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x400000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x800000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xff7fffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x800000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x1000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfeffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x1000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x2000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfdffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x2000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x4000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xfbffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x4000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x8000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xf7ffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x8000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x10000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xefffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x10000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x20000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xdfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x20000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((0x40000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0xbfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x40000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if (((vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U] 
          ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U] 
            = ((0x7fffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[1U]) 
               | (0x80000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U]));
    }
    if ((1U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfffffffeU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (1U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((2U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfffffffdU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (2U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((4U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfffffffbU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (4U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((8U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfffffff7U & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (8U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x10U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xffffffefU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x10U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x20U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xffffffdfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x20U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x40U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xffffffbfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x40U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x80U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xffffff7fU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x80U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x100U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2750]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfffffeffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x100U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x200U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2751]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfffffdffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x200U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x400U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2752]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfffffbffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x400U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x800U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2753]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfffff7ffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x800U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x1000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2754]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xffffefffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x1000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x2000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2755]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xffffdfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x2000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x4000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2756]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xffffbfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x4000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x8000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2757]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xffff7fffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x8000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x10000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2758]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfffeffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x10000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x20000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2759]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfffdffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x20000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x40000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2760]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfffbffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x40000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x80000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2761]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfff7ffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x80000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x100000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2762]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xffefffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x100000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x200000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2763]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xffdfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x200000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x400000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2764]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xffbfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x400000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x800000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2765]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xff7fffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x800000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x1000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2766]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfeffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x1000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x2000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2767]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfdffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x2000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x4000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2768]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xfbffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x4000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x8000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2769]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xf7ffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x8000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x10000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2770]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xefffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x10000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x20000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2771]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xdfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x20000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((0x40000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]))) {
        ++(vlSymsp->__Vcoverage[2772]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0xbfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x40000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if (((vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U] 
          ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2773]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U] 
            = ((0x7fffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[2U]) 
               | (0x80000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U]));
    }
    if ((1U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2774]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfffffffeU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (1U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((2U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2775]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfffffffdU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (2U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((4U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2776]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfffffffbU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (4U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((8U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
               ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2777]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfffffff7U & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (8U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x10U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2778]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xffffffefU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x10U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x20U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2779]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xffffffdfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x20U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x40U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2780]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xffffffbfU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x40U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x80U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2781]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xffffff7fU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x80U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x100U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2782]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfffffeffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x100U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x200U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2783]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfffffdffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x200U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x400U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2784]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfffffbffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x400U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x800U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                   ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2785]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfffff7ffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x800U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x1000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2786]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xffffefffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x1000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x2000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2787]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xffffdfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x2000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x4000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2788]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xffffbfffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x4000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x8000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                    ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2789]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xffff7fffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x8000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x10000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2790]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfffeffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x10000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x20000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2791]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfffdffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x20000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x40000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2792]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfffbffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x40000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x80000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                     ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2793]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfff7ffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x80000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x100000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2794]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xffefffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x100000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x200000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2795]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xffdfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x200000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x400000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2796]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xffbfffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x400000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x800000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                      ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2797]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xff7fffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x800000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x1000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2798]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfeffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x1000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x2000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2799]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfdffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x2000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x4000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2800]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xfbffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x4000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x8000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                       ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2801]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xf7ffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x8000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x10000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2802]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xefffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x10000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x20000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2803]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xdfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x20000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if ((0x40000000U & (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
                        ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]))) {
        ++(vlSymsp->__Vcoverage[2804]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0xbfffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x40000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    if (((vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U] 
          ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2805]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U] 
            = ((0x7fffffffU & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss[3U]) 
               | (0x80000000U & vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U]));
    }
    rv_core_top__DOT__u_execute__DOT__mul_r = ((0x10U 
                                                & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U])))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu[2U])))
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su[2U]))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[2U])))
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U])))))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U]))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U])))));
    if (((IData)(vlSelf->rv_core_top__DOT__mem_stall) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__mem_stall))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelf->rv_core_top__DOT____Vtogcov__mem_stall 
            = vlSelf->rv_core_top__DOT__mem_stall;
    }
    vlSelf->rv_core_top__DOT__stall_ex = ((IData)(vlSelf->halt_req) 
                                          | (IData)(vlSelf->rv_core_top__DOT__mem_stall));
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__is_wop) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_wop))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_wop 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__is_wop;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__use_imm) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__use_imm))) {
        ++(vlSymsp->__Vcoverage[1812]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__use_imm 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__use_imm;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__fwd_mem_valid) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_valid))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_valid 
            = vlSelf->rv_core_top__DOT__fwd_mem_valid;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__fwd_ex_valid) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__fwd_ex_valid))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__fwd_ex_valid 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__fwd_ex_valid;
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
        = (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__fwd_ex_valid) 
            & (((IData)(vlSelf->rv_core_top__DOT__de_rs2a) 
                == (IData)(vlSelf->rv_core_top__DOT__ex_rd)) 
               & (0U != (IData)(vlSelf->rv_core_top__DOT__de_rs2a))))
            ? vlSelf->rv_core_top__DOT__ex_alures : 
           (((IData)(vlSelf->rv_core_top__DOT__fwd_mem_valid) 
             & (((IData)(vlSelf->rv_core_top__DOT__de_rs2a) 
                 == (IData)(vlSelf->rv_core_top__DOT__mem_rd)) 
                & (0U != (IData)(vlSelf->rv_core_top__DOT__de_rs2a))))
             ? vlSelf->rv_core_top__DOT__mem_result
             : (((IData)(vlSelf->rv_core_top__DOT__wb_we) 
                 & (((IData)(vlSelf->rv_core_top__DOT__de_rs2a) 
                     == (IData)(vlSelf->rv_core_top__DOT__wb_rd)) 
                    & (0U != (IData)(vlSelf->rv_core_top__DOT__de_rs2a))))
                 ? vlSelf->rv_core_top__DOT__wb_data
                 : vlSelf->rv_core_top__DOT__de_rs2)));
    vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
        = (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__fwd_ex_valid) 
            & (((IData)(vlSelf->rv_core_top__DOT__de_rs1a) 
                == (IData)(vlSelf->rv_core_top__DOT__ex_rd)) 
               & (0U != (IData)(vlSelf->rv_core_top__DOT__de_rs1a))))
            ? vlSelf->rv_core_top__DOT__ex_alures : 
           (((IData)(vlSelf->rv_core_top__DOT__fwd_mem_valid) 
             & (((IData)(vlSelf->rv_core_top__DOT__de_rs1a) 
                 == (IData)(vlSelf->rv_core_top__DOT__mem_rd)) 
                & (0U != (IData)(vlSelf->rv_core_top__DOT__de_rs1a))))
             ? vlSelf->rv_core_top__DOT__mem_result
             : (((IData)(vlSelf->rv_core_top__DOT__wb_we) 
                 & (((IData)(vlSelf->rv_core_top__DOT__de_rs1a) 
                     == (IData)(vlSelf->rv_core_top__DOT__wb_rd)) 
                    & (0U != (IData)(vlSelf->rv_core_top__DOT__de_rs1a))))
                 ? vlSelf->rv_core_top__DOT__wb_data
                 : vlSelf->rv_core_top__DOT__de_rs1)));
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_sub) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_sub))) {
        ++(vlSymsp->__Vcoverage[2649]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_sub 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__d_sub;
    }
    if ((1U & ((IData)(rv_core_top__DOT__u_execute__DOT__div_r) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r)))) {
        ++(vlSymsp->__Vcoverage[3260]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | (IData)((IData)((1U & (IData)(rv_core_top__DOT__u_execute__DOT__div_r)))));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((rv_core_top__DOT__u_execute__DOT__div_r 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__div_r 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(rv_core_top__DOT__u_execute__DOT__irq_pend) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_pend))) {
        ++(vlSymsp->__Vcoverage[3730]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_pend 
            = rv_core_top__DOT__u_execute__DOT__irq_pend;
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_ext 
        = ((IData)(vlSelf->irq_m_ext) & (IData)(rv_core_top__DOT__u_execute__DOT__irq_pend));
    rv_core_top__DOT__u_execute__DOT____VdfgTmp_h885ddce2__0 
        = ((~ (IData)(vlSelf->irq_m_ext)) & (IData)(rv_core_top__DOT__u_execute__DOT__irq_pend));
    if (((IData)(rv_core_top__DOT__u_execute__DOT__sys_illegal) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__sys_illegal))) {
        ++(vlSymsp->__Vcoverage[3395]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__sys_illegal 
            = rv_core_top__DOT__u_execute__DOT__sys_illegal;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__csr_illegal) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_illegal))) {
        ++(vlSymsp->__Vcoverage[3402]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_illegal 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__csr_illegal;
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h0abe2d2d__0 
        = ((IData)(rv_core_top__DOT__u_execute__DOT__sys_illegal) 
           | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__csr_illegal));
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__is_mext) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_mext))) {
        ++(vlSymsp->__Vcoverage[1965]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_mext 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__is_mext;
    }
    if ((1U & ((IData)(rv_core_top__DOT__u_execute__DOT__mul_r) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r)))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | (IData)((IData)((1U & (IData)(rv_core_top__DOT__u_execute__DOT__mul_r)))));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3108]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3109]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3122]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3123]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3124]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((rv_core_top__DOT__u_execute__DOT__mul_r 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[3125]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__mul_r 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
        = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_ready)
            ? ((1U == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_state))
                ? ((0x3bU == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q))
                    ? (((QData)((IData)((- (IData)(
                                                   (vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss[0U])))
                    : rv_core_top__DOT__u_execute__DOT__mul_r)
                : ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_special)
                    ? ((0x3bU == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->rv_core_top__DOT__u_execute__DOT__d_result_q 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_result_q)))
                        : vlSelf->rv_core_top__DOT__u_execute__DOT__d_result_q)
                    : ((0x3bU == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (rv_core_top__DOT__u_execute__DOT__div_r 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(rv_core_top__DOT__u_execute__DOT__div_r)))
                        : rv_core_top__DOT__u_execute__DOT__div_r)))
            : 0ULL);
    if (((IData)(vlSelf->rv_core_top__DOT__stall_ex) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__stall_ex))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->rv_core_top__DOT____Vtogcov__stall_ex 
            = vlSelf->rv_core_top__DOT__stall_ex;
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_done 
        = ((~ (IData)(vlSelf->rv_core_top__DOT__stall_ex)) 
           & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_ready));
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_raw_start 
        = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__is_mext) 
           & ((IData)(vlSelf->rv_core_top__DOT__de_valid) 
              & ((~ (IData)(vlSelf->rv_core_top__DOT__stall_ex)) 
                 & ((~ (IData)(vlSelf->rv_core_top__DOT__branch_taken)) 
                    & ((~ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_fin)) 
                       & (0U == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_state)))))));
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg)))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1779]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1780]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1781]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1782]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1783]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1784]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1785]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1786]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1787]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1788]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1789]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1790]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1791]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1792]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1793]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1794]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1795]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1796]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1797]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1798]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1799]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1800]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1801]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1802]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1803]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1804]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1805]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1806]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1807]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1808]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1809]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1810]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1811]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
        = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__use_imm)
            ? vlSelf->rv_core_top__DOT__de_imm : vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg);
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__src1) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1)))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__src1)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
        = ((1U == (IData)(vlSelf->rv_core_top__DOT__de_csrop))
            ? vlSelf->rv_core_top__DOT__u_execute__DOT__src1
            : ((2U == (IData)(vlSelf->rv_core_top__DOT__de_csrop))
                ? (vlSelf->rv_core_top__DOT__u_execute__DOT__csr_old 
                   | vlSelf->rv_core_top__DOT__u_execute__DOT__src1)
                : ((~ vlSelf->rv_core_top__DOT__u_execute__DOT__src1) 
                   & vlSelf->rv_core_top__DOT__u_execute__DOT__csr_old)));
    if (vlSelf->rv_core_top__DOT__u_execute__DOT__is_wop) {
        vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_h84d002a0__0 
            = (QData)((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__src1));
        rv_core_top__DOT__u_execute__DOT__shamt = (0x3fU 
                                                   & (0x1fU 
                                                      & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__src2)));
    } else {
        vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_h84d002a0__0 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__src1;
        rv_core_top__DOT__u_execute__DOT__shamt = (0x3fU 
                                                   & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__src2));
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_hade43b39__0 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__src1)));
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_ext) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_sel_ext))) {
        ++(vlSymsp->__Vcoverage[3468]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_sel_ext 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_ext;
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_timer 
        = ((IData)(rv_core_top__DOT__u_execute__DOT____VdfgTmp_h885ddce2__0) 
           & ((~ (IData)(vlSelf->irq_m_soft)) & (IData)(vlSelf->irq_m_timer)));
    vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_soft 
        = ((IData)(rv_core_top__DOT__u_execute__DOT____VdfgTmp_h885ddce2__0) 
           & (IData)(vlSelf->irq_m_soft));
    if (vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_ext) {
        ++(vlSymsp->__Vcoverage[3540]);
        vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w = 0x800000000000000bULL;
    } else {
        vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
            = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_soft)
                ? 0x8000000000000003ULL : ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_timer)
                                            ? 0x8000000000000007ULL
                                            : ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h0abe2d2d__0)
                                                ? 2ULL
                                                : ((IData)(vlSelf->rv_core_top__DOT__de_ebreak)
                                                    ? 3ULL
                                                    : 0xbULL))));
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_heb811627__0 
        = ((IData)(vlSelf->rv_core_top__DOT__de_ecall) 
           | ((IData)(vlSelf->rv_core_top__DOT__de_ebreak) 
              | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h0abe2d2d__0)));
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final)))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3332]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3333]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3334]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3335]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3336]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3337]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3338]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3339]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3340]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3341]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3342]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3343]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3344]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3345]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3346]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3347]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3348]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3349]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3350]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3351]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3352]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3353]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3354]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3355]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3356]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3357]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3358]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3359]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3360]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3361]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3362]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3363]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3367]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3368]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3369]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3371]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3372]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3373]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3374]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3375]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3376]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3377]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3378]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3379]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3380]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3381]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3382]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3383]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3384]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3385]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3386]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3387]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3388]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3389]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3390]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3391]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3392]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[3393]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_done) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_done))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_done 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__mx_done;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_raw_start) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_raw_start))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_raw_start 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__mx_raw_start;
    }
    vlSelf->rv_core_top__DOT__mul_div_stall = ((0U 
                                                != (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_state)) 
                                               | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_raw_start));
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__src2) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2)))) {
        ++(vlSymsp->__Vcoverage[1813]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__src2)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1814]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1815]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1816]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1817]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1818]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1819]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1820]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1821]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1822]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1823]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1824]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1825]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1826]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((0x3bU == (IData)(vlSelf->rv_core_top__DOT__de_op))) {
        vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__src2)));
        vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
            = vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_hade43b39__0;
    } else {
        vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__src2;
        vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__src1;
    }
    rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h70daa183__0 
        = (vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
           + vlSelf->rv_core_top__DOT__u_execute__DOT__src2);
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd)))) {
        ++(vlSymsp->__Vcoverage[3404]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3405]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3406]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3407]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3408]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3409]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3410]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3411]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3412]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3413]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3414]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3415]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3416]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3417]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3418]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3419]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3420]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3421]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3422]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3423]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3424]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3425]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3426]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3427]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3428]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3429]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3430]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3431]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3432]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3433]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3434]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3435]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3436]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3437]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3438]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3439]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3440]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3441]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3442]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3443]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3444]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3445]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3446]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3447]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3448]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3449]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3450]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3451]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3452]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3453]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3454]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3455]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3456]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3457]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3458]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3459]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3460]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3461]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3462]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3463]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3464]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3465]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3466]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[3467]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_timer) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_sel_timer))) {
        ++(vlSymsp->__Vcoverage[3470]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_sel_timer 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_timer;
    }
    if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_ext)))) {
        if (vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_soft) {
            ++(vlSymsp->__Vcoverage[3539]);
        }
        if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_soft)))) {
            if (vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_timer) {
                ++(vlSymsp->__Vcoverage[3538]);
            }
            if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_timer)))) {
                if (vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h0abe2d2d__0) {
                    ++(vlSymsp->__Vcoverage[3537]);
                }
                if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h0abe2d2d__0)))) {
                    if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__de_ebreak)))) {
                        ++(vlSymsp->__Vcoverage[3536]);
                    }
                    if (vlSelf->rv_core_top__DOT__de_ebreak) {
                        ++(vlSymsp->__Vcoverage[3535]);
                    }
                }
            }
        }
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_soft) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_sel_soft))) {
        ++(vlSymsp->__Vcoverage[3469]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_sel_soft 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_soft;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__mul_div_stall) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__mul_div_stall))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelf->rv_core_top__DOT____Vtogcov__mul_div_stall 
            = vlSelf->rv_core_top__DOT__mul_div_stall;
    }
    vlSelf->rv_core_top__DOT__stall = ((IData)(vlSelf->rv_core_top__DOT__mul_div_stall) 
                                       | (IData)(vlSelf->rv_core_top__DOT__stall_ex));
    vlSelf->rv_core_top__DOT__u_execute__DOT__ex_exit 
        = ((IData)(vlSelf->rv_core_top__DOT__de_valid) 
           & ((~ (IData)(vlSelf->rv_core_top__DOT__stall_ex)) 
              & ((~ (IData)(vlSelf->rv_core_top__DOT__branch_taken)) 
                 & ((~ (IData)(vlSelf->rv_core_top__DOT__mul_div_stall)) 
                    & (~ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_fin))))));
    if (((0ULL == vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__b_zero))) {
        ++(vlSymsp->__Vcoverage[2252]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__b_zero 
            = (0ULL == vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b);
    }
    if (((0xffffffffffffffffULL == vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__b_m1))) {
        ++(vlSymsp->__Vcoverage[2253]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__b_m1 
            = (0xffffffffffffffffULL == vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b);
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b)))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2211]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2212]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2213]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2214]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2215]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2216]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2217]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2218]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2219]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2220]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2221]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2222]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2223]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2224]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2225]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2226]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2227]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2228]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2229]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2230]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2231]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2232]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2233]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2234]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2235]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2236]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2237]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2238]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2239]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2240]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2241]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2242]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2243]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2244]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2245]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2246]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2247]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2248]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2249]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[2250]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(rv_core_top__DOT__u_execute__DOT__shamt) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt)))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt 
            = ((0x3eU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt)) 
               | (1U & (IData)(rv_core_top__DOT__u_execute__DOT__shamt)));
    }
    if ((2U & ((IData)(rv_core_top__DOT__u_execute__DOT__shamt) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt)))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt 
            = ((0x3dU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt)) 
               | (2U & (IData)(rv_core_top__DOT__u_execute__DOT__shamt)));
    }
    if ((4U & ((IData)(rv_core_top__DOT__u_execute__DOT__shamt) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt)))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt 
            = ((0x3bU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt)) 
               | (4U & (IData)(rv_core_top__DOT__u_execute__DOT__shamt)));
    }
    if ((8U & ((IData)(rv_core_top__DOT__u_execute__DOT__shamt) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt)))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt 
            = ((0x37U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt)) 
               | (8U & (IData)(rv_core_top__DOT__u_execute__DOT__shamt)));
    }
    if ((0x10U & ((IData)(rv_core_top__DOT__u_execute__DOT__shamt) 
                  ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt)))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt 
            = ((0x2fU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt)) 
               | (0x10U & (IData)(rv_core_top__DOT__u_execute__DOT__shamt)));
    }
    if ((0x20U & ((IData)(rv_core_top__DOT__u_execute__DOT__shamt) 
                  ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt)))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt 
            = ((0x1fU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt)) 
               | (0x20U & (IData)(rv_core_top__DOT__u_execute__DOT__shamt)));
    }
    rv_core_top__DOT__u_execute__DOT__alu_res_comb 
        = ((0x10U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
            ? ((8U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                ? rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h70daa183__0
                : ((4U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                    ? ((2U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                        ? rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h70daa183__0
                        : ((1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                            ? rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h70daa183__0
                            : vlSelf->rv_core_top__DOT__u_execute__DOT__src2))
                    : rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h70daa183__0))
            : ((8U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                ? ((4U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                    ? rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h70daa183__0
                    : ((2U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                        ? ((1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                            ? (vlSelf->rv_core_top__DOT__de_pc 
                               + vlSelf->rv_core_top__DOT__u_execute__DOT__src2)
                            : vlSelf->rv_core_top__DOT__u_execute__DOT__src2)
                        : ((1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                            ? VL_SHIFTRS_QQI(64,64,6, 
                                             ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__is_wop)
                                               ? vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_hade43b39__0
                                               : vlSelf->rv_core_top__DOT__u_execute__DOT__src1), (IData)(rv_core_top__DOT__u_execute__DOT__shamt))
                            : (vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_h84d002a0__0 
                               >> (IData)(rv_core_top__DOT__u_execute__DOT__shamt)))))
                : ((4U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                    ? ((2U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                        ? ((1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                            ? (vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_h84d002a0__0 
                               << (IData)(rv_core_top__DOT__u_execute__DOT__shamt))
                            : (vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                               & vlSelf->rv_core_top__DOT__u_execute__DOT__src2))
                        : ((1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                            ? (vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                               | vlSelf->rv_core_top__DOT__u_execute__DOT__src2)
                            : (vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                               ^ vlSelf->rv_core_top__DOT__u_execute__DOT__src2)))
                    : ((2U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                        ? ((1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                            ? ((vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                < vlSelf->rv_core_top__DOT__u_execute__DOT__src2)
                                ? 1ULL : 0ULL) : (VL_LTS_IQQ(64, vlSelf->rv_core_top__DOT__u_execute__DOT__src1, vlSelf->rv_core_top__DOT__u_execute__DOT__src2)
                                                   ? 1ULL
                                                   : 0ULL))
                        : ((1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))
                            ? (vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                               - vlSelf->rv_core_top__DOT__u_execute__DOT__src2)
                            : rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h70daa183__0)))));
    vlSelf->rv_core_top__DOT__u_execute__DOT__ovf = 
        ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__signed_op) 
         & ((0ULL != vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b) 
            & ((0xffffffffffffffffULL == vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b) 
               & ((0x3bU == (IData)(vlSelf->rv_core_top__DOT__de_op))
                   ? (0x80000000U == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a))
                   : (0x8000000000000000ULL == vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a)))));
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a)))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2139]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2140]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2141]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2142]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2143]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2144]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2145]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2146]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2147]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2148]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2149]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2150]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2151]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2152]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2153]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2154]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2155]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2156]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2157]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2158]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w)))) {
        ++(vlSymsp->__Vcoverage[3471]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3472]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3473]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3474]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3475]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3476]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3477]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3478]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3479]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3480]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3481]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3482]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3483]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3484]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3485]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3486]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3487]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3488]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3489]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3490]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3491]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3492]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3493]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3494]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3495]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3496]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3497]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3498]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3499]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3500]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3501]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3502]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3503]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3504]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3505]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3506]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3507]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3508]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3509]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3510]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3511]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3512]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3513]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3514]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3515]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3516]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3517]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3518]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3519]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3520]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3521]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3522]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3523]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3524]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3525]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3526]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3527]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3528]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3529]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3530]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3531]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3532]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3533]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[3534]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->rv_core_top__DOT__stall) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__stall))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->rv_core_top__DOT____Vtogcov__stall 
            = vlSelf->rv_core_top__DOT__stall;
    }
    vlSelf->imem_rready = ((~ (IData)(vlSelf->rv_core_top__DOT__stall)) 
                           & ((2U == (IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT__fstate)) 
                              | (3U == (IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT__fstate))));
    vlSelf->rv_core_top__DOT__u_fetch__DOT__r_fire 
        = ((~ (IData)(vlSelf->rv_core_top__DOT__stall)) 
           & (IData)(vlSelf->imem_rvalid));
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__ex_exit) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__ex_exit))) {
        ++(vlSymsp->__Vcoverage[3396]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__ex_exit 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__ex_exit;
    }
    rv_core_top__DOT__u_execute__DOT__csr_commit = 
        ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__ex_exit) 
         & (IData)(vlSelf->rv_core_top__DOT__de_iscsr));
    vlSelf->rv_core_top__DOT__u_execute__DOT__trap_req_c 
        = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__ex_exit) 
           & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_heb811627__0));
    vlSelf->rv_core_top__DOT__u_execute__DOT__mret_commit 
        = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__ex_exit) 
           & (IData)(vlSelf->rv_core_top__DOT__de_mret));
    if ((1U & ((IData)(rv_core_top__DOT__u_execute__DOT__alu_res_comb) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb)))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | (IData)((IData)((1U & (IData)(rv_core_top__DOT__u_execute__DOT__alu_res_comb)))));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1945]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1946]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1947]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    rv_core_top__DOT__u_execute__DOT__alu_res_w = (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (rv_core_top__DOT__u_execute__DOT__alu_res_comb 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(rv_core_top__DOT__u_execute__DOT__alu_res_comb)));
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__ovf) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__ovf 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__ovf;
    }
    if (((IData)(vlSelf->imem_rready) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_rready))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rready 
            = vlSelf->imem_rready;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT__r_fire) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__r_fire))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__r_fire 
            = vlSelf->rv_core_top__DOT__u_fetch__DOT__r_fire;
    }
    if (((IData)(rv_core_top__DOT__u_execute__DOT__csr_commit) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_commit))) {
        ++(vlSymsp->__Vcoverage[3397]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_commit 
            = rv_core_top__DOT__u_execute__DOT__csr_commit;
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__csr_we_w 
        = ((~ ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__csr_illegal) 
               | ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__csr_rmw) 
                  & (0U == (IData)(vlSelf->rv_core_top__DOT__de_rs1a))))) 
           & (IData)(rv_core_top__DOT__u_execute__DOT__csr_commit));
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__trap_req_c) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_req_c))) {
        ++(vlSymsp->__Vcoverage[3736]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_req_c 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__trap_req_c;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mret_commit) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mret_commit))) {
        ++(vlSymsp->__Vcoverage[3398]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mret_commit 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__mret_commit;
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__irq_take 
        = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__ex_exit) 
           & ((~ ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mret_commit) 
                  | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__trap_req_c))) 
              & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_ext) 
                 | ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_soft) 
                    | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_timer)))));
    if ((1U & ((IData)(rv_core_top__DOT__u_execute__DOT__alu_res_w) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w)))) {
        ++(vlSymsp->__Vcoverage[3815]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | (IData)((IData)((1U & (IData)(rv_core_top__DOT__u_execute__DOT__alu_res_w)))));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3816]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3817]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3818]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3819]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3820]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3821]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3822]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3823]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3824]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3825]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3826]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3827]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3828]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3829]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3830]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3831]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3832]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3833]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3834]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3835]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3836]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3837]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3838]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3839]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3840]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3841]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3842]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3843]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3844]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3845]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3846]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3847]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3848]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3849]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3850]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3851]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3852]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3853]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3854]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3855]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3856]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3857]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3858]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3859]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3860]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3861]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3862]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3863]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3864]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3865]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3866]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3867]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3868]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3869]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3870]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3871]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3872]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3873]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3874]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3875]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3876]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3877]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[3878]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w) 
               | ((QData)((IData)((1U & (IData)((rv_core_top__DOT__u_execute__DOT__alu_res_w 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
        = (((IData)(vlSelf->rv_core_top__DOT__de_jal) 
            | (IData)(vlSelf->rv_core_top__DOT__de_jalr))
            ? (4ULL + vlSelf->rv_core_top__DOT__de_pc)
            : ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__is_fp_op)
                ? 0ULL : ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__is_mext)
                           ? vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final
                           : ((IData)(vlSelf->rv_core_top__DOT__de_iscsr)
                               ? vlSelf->rv_core_top__DOT__u_execute__DOT__csr_old
                               : ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__is_wop)
                                   ? rv_core_top__DOT__u_execute__DOT__alu_res_w
                                   : rv_core_top__DOT__u_execute__DOT__alu_res_comb)))));
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__csr_we_w) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_we_w))) {
        ++(vlSymsp->__Vcoverage[3403]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_we_w 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__csr_we_w;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_take) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_take))) {
        ++(vlSymsp->__Vcoverage[3737]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_take 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__irq_take;
    }
    if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__de_branch)))) {
        if ((((((IData)(vlSelf->rv_core_top__DOT__de_jal) 
                | (IData)(vlSelf->rv_core_top__DOT__de_jalr)) 
               | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__trap_req_c)) 
              | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mret_commit)) 
             | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_take))) {
            ++(vlSymsp->__Vcoverage[3746]);
        }
        if ((1U & (~ (((((IData)(vlSelf->rv_core_top__DOT__de_jal) 
                         | (IData)(vlSelf->rv_core_top__DOT__de_jalr)) 
                        | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__trap_req_c)) 
                       | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mret_commit)) 
                      | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_take))))) {
            ++(vlSymsp->__Vcoverage[3747]);
        }
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__trap_commit 
        = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__ex_exit) 
           & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_heb811627__0) 
              | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_take)));
    vlSelf->rv_core_top__DOT__u_execute__DOT__branch_comb = 0U;
    if (vlSelf->rv_core_top__DOT__de_branch) {
        vlSelf->rv_core_top__DOT__u_execute__DOT__branch_comb 
            = ((4U & (IData)(vlSelf->rv_core_top__DOT__de_f3))
                ? ((2U & (IData)(vlSelf->rv_core_top__DOT__de_f3))
                    ? ((1U & (IData)(vlSelf->rv_core_top__DOT__de_f3))
                        ? (vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                           >= vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg)
                        : (vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                           < vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg))
                    : ((1U & (IData)(vlSelf->rv_core_top__DOT__de_f3))
                        ? VL_GTES_IQQ(64, vlSelf->rv_core_top__DOT__u_execute__DOT__src1, vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg)
                        : VL_LTS_IQQ(64, vlSelf->rv_core_top__DOT__u_execute__DOT__src1, vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg)))
                : ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__de_f3) 
                             >> 1U))) && ((1U & (IData)(vlSelf->rv_core_top__DOT__de_f3))
                                           ? (vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                              != vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg)
                                           : (vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                              == vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg))));
    } else if ((((((IData)(vlSelf->rv_core_top__DOT__de_jal) 
                   | (IData)(vlSelf->rv_core_top__DOT__de_jalr)) 
                  | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__trap_req_c)) 
                 | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mret_commit)) 
                | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_take))) {
        vlSelf->rv_core_top__DOT__u_execute__DOT__branch_comb = 1U;
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
        = ((IData)(vlSelf->rv_core_top__DOT__de_jalr)
            ? (0xfffffffffffffffeULL & (vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
                                        + vlSelf->rv_core_top__DOT__de_imm))
            : ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_take)
                ? (0xfffffffffffffffcULL & vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q)
                : ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__trap_req_c)
                    ? (0xfffffffffffffffcULL & vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q)
                    : ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mret_commit)
                        ? (0xfffffffffffffffcULL & vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q)
                        : (vlSelf->rv_core_top__DOT__de_imm 
                           + vlSelf->rv_core_top__DOT__de_pc)))));
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res)))) {
        ++(vlSymsp->__Vcoverage[3879]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3880]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3881]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3882]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3883]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3884]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3885]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3886]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3887]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3888]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3889]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3890]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3891]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3892]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3893]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3894]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3895]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3896]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3897]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3898]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3899]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3900]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3901]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3902]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3903]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3904]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3905]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3906]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3907]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3908]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3909]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3910]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3911]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3912]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3913]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3914]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3915]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3916]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3917]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3918]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3919]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3920]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3921]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3922]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3923]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3924]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3925]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3926]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3927]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3928]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3929]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3930]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3931]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3932]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3933]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3934]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3935]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3936]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3937]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3938]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3939]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3940]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3941]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[3942]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__trap_commit) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_commit))) {
        ++(vlSymsp->__Vcoverage[3399]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_commit 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__trap_commit;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__branch_comb) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_comb))) {
        ++(vlSymsp->__Vcoverage[3738]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_comb 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__branch_comb;
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt)))) {
        ++(vlSymsp->__Vcoverage[3750]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3751]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3752]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3753]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3754]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3755]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3756]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3757]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3758]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3759]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3760]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3761]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3762]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3763]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3764]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3765]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3766]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3767]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3768]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3769]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3770]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3771]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3772]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3773]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3774]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3775]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3776]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3777]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3778]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3779]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3780]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3781]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3782]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3783]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3784]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3785]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3786]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3787]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3788]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3789]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3790]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3791]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3792]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3793]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3794]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3795]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3796]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3797]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3798]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3799]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3800]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3801]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3802]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3803]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3804]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3805]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3806]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3807]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3808]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3809]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3810]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3811]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3812]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[3813]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}
