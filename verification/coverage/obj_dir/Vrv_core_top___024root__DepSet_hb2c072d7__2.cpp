// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv_core_top.h for the primary calling header

#include "Vrv_core_top__pch.h"
#include "Vrv_core_top__Syms.h"
#include "Vrv_core_top___024root.h"

VL_INLINE_OPT void Vrv_core_top___024root___nba_sequent__TOP__2(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*5:0*/ rv_core_top__DOT__u_execute__DOT__shamt;
    rv_core_top__DOT__u_execute__DOT__shamt = 0;
    QData/*63:0*/ rv_core_top__DOT__u_execute__DOT__alu_res_comb;
    rv_core_top__DOT__u_execute__DOT__alu_res_comb = 0;
    CData/*0:0*/ rv_core_top__DOT__u_execute__DOT__sys_illegal;
    rv_core_top__DOT__u_execute__DOT__sys_illegal = 0;
    CData/*0:0*/ rv_core_top__DOT__u_execute__DOT__csr_commit;
    rv_core_top__DOT__u_execute__DOT__csr_commit = 0;
    QData/*63:0*/ rv_core_top__DOT__u_execute__DOT__alu_res_w;
    rv_core_top__DOT__u_execute__DOT__alu_res_w = 0;
    QData/*63:0*/ rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h70daa183__0;
    rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h70daa183__0 = 0;
    // Body
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
    vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b 
        = ((0x3bU == (IData)(vlSelf->rv_core_top__DOT__de_op))
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->rv_core_top__DOT__u_execute__DOT__src2 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__src2)))
            : vlSelf->rv_core_top__DOT__u_execute__DOT__src2);
    rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h70daa183__0 
        = (vlSelf->rv_core_top__DOT__u_execute__DOT__src1 
           + vlSelf->rv_core_top__DOT__u_execute__DOT__src2);
    rv_core_top__DOT__u_execute__DOT__shamt = (0x3fU 
                                               & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__is_wop)
                                                   ? 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__src2))
                                                   : (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__src2)));
    if (((IData)(vlSelf->rv_core_top__DOT__fe_valid) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fe_valid))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_valid 
            = vlSelf->rv_core_top__DOT__fe_valid;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT__pending_r) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pending_r))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pending_r 
            = vlSelf->rv_core_top__DOT__u_fetch__DOT__pending_r;
    }
    if (((IData)(vlSelf->imem_arvalid) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_arvalid))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_arvalid 
            = vlSelf->imem_arvalid;
    }
    vlSelf->rv_core_top__DOT__u_fetch__DOT__ar_fire 
        = ((IData)(vlSelf->imem_arready) & (IData)(vlSelf->imem_arvalid));
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT__fstate) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__fstate)))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__fstate 
            = ((2U & (IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__fstate)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT__fstate)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT__fstate) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__fstate)))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__fstate 
            = ((1U & (IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__fstate)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT__fstate)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT__pc) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT__pc)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                  ^ vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_fetch__DOT__pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__fe_pc) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fe_pc)))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__fe_pc)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__fe_pc ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_pc 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__fe_imem_addr) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr)))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__fe_imem_addr)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__fe_imem_addr 
                  ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__fe_imem_addr 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->imem_araddr = (0xffffffffffULL & vlSelf->rv_core_top__DOT__fe_imem_addr);
    vlSelf->rv_core_top__DOT__u_decode__DOT__mem_r_comb = 0U;
    vlSelf->rv_core_top__DOT__u_decode__DOT__mem_w_comb = 0U;
    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                  >> 6U)))) {
        if ((0x20U & vlSelf->rv_core_top__DOT__fe_instr)) {
            if ((0x10U & vlSelf->rv_core_top__DOT__fe_instr)) {
                if ((8U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                if ((1U != (vlSelf->rv_core_top__DOT__fe_instr 
                                            >> 0x19U))) {
                                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                                  >> 0x1eU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xeU)))) {
                                            if ((0x2000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->rv_core_top__DOT__fe_instr 
                                                         >> 0xcU)))) {
                                                    ++(vlSymsp->__Vcoverage[1432]);
                                                }
                                                if (
                                                    (0x1000U 
                                                     & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                    ++(vlSymsp->__Vcoverage[1433]);
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xdU)))) {
                                                if (
                                                    (0x1000U 
                                                     & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                    ++(vlSymsp->__Vcoverage[1437]);
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->rv_core_top__DOT__fe_instr 
                                                         >> 0xcU)))) {
                                                    ++(vlSymsp->__Vcoverage[1430]);
                                                }
                                            }
                                        }
                                        if ((0x4000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            if ((0x2000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                if (
                                                    (0x1000U 
                                                     & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                    ++(vlSymsp->__Vcoverage[1436]);
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->rv_core_top__DOT__fe_instr 
                                                         >> 0xcU)))) {
                                                    ++(vlSymsp->__Vcoverage[1435]);
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xdU)))) {
                                                if (
                                                    (0x1000U 
                                                     & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                    ++(vlSymsp->__Vcoverage[1438]);
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->rv_core_top__DOT__fe_instr 
                                                         >> 0xcU)))) {
                                                    ++(vlSymsp->__Vcoverage[1434]);
                                                }
                                            }
                                        }
                                    }
                                    if ((0x40000000U 
                                         & vlSelf->rv_core_top__DOT__fe_instr)) {
                                        if ((0x4000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xdU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->rv_core_top__DOT__fe_instr 
                                                         >> 0xcU)))) {
                                                    ++(vlSymsp->__Vcoverage[1440]);
                                                }
                                                if (
                                                    (0x1000U 
                                                     & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                    ++(vlSymsp->__Vcoverage[1439]);
                                                }
                                            }
                                            if ((0x2000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                ++(vlSymsp->__Vcoverage[1440]);
                                            }
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xeU)))) {
                                            if ((0x2000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                ++(vlSymsp->__Vcoverage[1440]);
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xdU)))) {
                                                if (
                                                    (0x1000U 
                                                     & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                    ++(vlSymsp->__Vcoverage[1440]);
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->rv_core_top__DOT__fe_instr 
                                                         >> 0xcU)))) {
                                                    ++(vlSymsp->__Vcoverage[1431]);
                                                }
                                            }
                                        }
                                    }
                                    ++(vlSymsp->__Vcoverage[1442]);
                                }
                                if ((1U == (vlSelf->rv_core_top__DOT__fe_instr 
                                            >> 0x19U))) {
                                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xcU)))) {
                                                ++(vlSymsp->__Vcoverage[1421]);
                                            }
                                            if ((0x1000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                ++(vlSymsp->__Vcoverage[1422]);
                                            }
                                        }
                                        if ((0x2000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            if ((0x1000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                ++(vlSymsp->__Vcoverage[1424]);
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xcU)))) {
                                                ++(vlSymsp->__Vcoverage[1423]);
                                            }
                                        }
                                    }
                                    if ((0x4000U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                        if ((0x2000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xcU)))) {
                                                ++(vlSymsp->__Vcoverage[1427]);
                                            }
                                            if ((0x1000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                ++(vlSymsp->__Vcoverage[1428]);
                                            }
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xdU)))) {
                                            if ((0x1000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                ++(vlSymsp->__Vcoverage[1426]);
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xcU)))) {
                                                ++(vlSymsp->__Vcoverage[1425]);
                                            }
                                        }
                                    }
                                    ++(vlSymsp->__Vcoverage[1441]);
                                }
                                ++(vlSymsp->__Vcoverage[1443]);
                            }
                            if ((1U & (~ vlSelf->rv_core_top__DOT__fe_instr))) {
                                ++(vlSymsp->__Vcoverage[1451]);
                            }
                        }
                        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[1451]);
                        }
                    }
                    if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        ++(vlSymsp->__Vcoverage[1451]);
                    }
                }
                if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                if ((1U != (vlSelf->rv_core_top__DOT__fe_instr 
                                            >> 0x19U))) {
                                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                                  >> 0x1eU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xeU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xdU)))) {
                                                if (
                                                    (0x1000U 
                                                     & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                    ++(vlSymsp->__Vcoverage[1437]);
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->rv_core_top__DOT__fe_instr 
                                                         >> 0xcU)))) {
                                                    ++(vlSymsp->__Vcoverage[1430]);
                                                }
                                            }
                                            if ((0x2000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                if (
                                                    (0x1000U 
                                                     & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                    ++(vlSymsp->__Vcoverage[1433]);
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->rv_core_top__DOT__fe_instr 
                                                         >> 0xcU)))) {
                                                    ++(vlSymsp->__Vcoverage[1432]);
                                                }
                                            }
                                        }
                                        if ((0x4000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            if ((0x2000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                if (
                                                    (0x1000U 
                                                     & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                    ++(vlSymsp->__Vcoverage[1436]);
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->rv_core_top__DOT__fe_instr 
                                                         >> 0xcU)))) {
                                                    ++(vlSymsp->__Vcoverage[1435]);
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xdU)))) {
                                                if (
                                                    (0x1000U 
                                                     & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                    ++(vlSymsp->__Vcoverage[1438]);
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->rv_core_top__DOT__fe_instr 
                                                         >> 0xcU)))) {
                                                    ++(vlSymsp->__Vcoverage[1434]);
                                                }
                                            }
                                        }
                                    }
                                    if ((0x40000000U 
                                         & vlSelf->rv_core_top__DOT__fe_instr)) {
                                        if ((0x4000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            if ((0x2000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                ++(vlSymsp->__Vcoverage[1440]);
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xdU)))) {
                                                if (
                                                    (0x1000U 
                                                     & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                    ++(vlSymsp->__Vcoverage[1439]);
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->rv_core_top__DOT__fe_instr 
                                                         >> 0xcU)))) {
                                                    ++(vlSymsp->__Vcoverage[1440]);
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xeU)))) {
                                            if ((0x2000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                ++(vlSymsp->__Vcoverage[1440]);
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xdU)))) {
                                                if (
                                                    (0x1000U 
                                                     & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                    ++(vlSymsp->__Vcoverage[1440]);
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->rv_core_top__DOT__fe_instr 
                                                         >> 0xcU)))) {
                                                    ++(vlSymsp->__Vcoverage[1431]);
                                                }
                                            }
                                        }
                                    }
                                    ++(vlSymsp->__Vcoverage[1442]);
                                }
                                ++(vlSymsp->__Vcoverage[1443]);
                                if ((1U == (vlSelf->rv_core_top__DOT__fe_instr 
                                            >> 0x19U))) {
                                    if ((0x4000U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                        if ((0x2000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            if ((0x1000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                ++(vlSymsp->__Vcoverage[1428]);
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xcU)))) {
                                                ++(vlSymsp->__Vcoverage[1427]);
                                            }
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xdU)))) {
                                            if ((0x1000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                ++(vlSymsp->__Vcoverage[1426]);
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xcU)))) {
                                                ++(vlSymsp->__Vcoverage[1425]);
                                            }
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            if ((0x1000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                ++(vlSymsp->__Vcoverage[1424]);
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xcU)))) {
                                                ++(vlSymsp->__Vcoverage[1423]);
                                            }
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xdU)))) {
                                            if ((0x1000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)) {
                                                ++(vlSymsp->__Vcoverage[1422]);
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->rv_core_top__DOT__fe_instr 
                                                     >> 0xcU)))) {
                                                ++(vlSymsp->__Vcoverage[1421]);
                                            }
                                        }
                                    }
                                    ++(vlSymsp->__Vcoverage[1441]);
                                }
                            }
                            if ((1U & (~ vlSelf->rv_core_top__DOT__fe_instr))) {
                                ++(vlSymsp->__Vcoverage[1451]);
                            }
                        }
                        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[1451]);
                        }
                    }
                    if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                ++(vlSymsp->__Vcoverage[1397]);
                            }
                            if ((1U & (~ vlSelf->rv_core_top__DOT__fe_instr))) {
                                ++(vlSymsp->__Vcoverage[1451]);
                            }
                        }
                        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[1451]);
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                          >> 4U)))) {
                if ((8U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    ++(vlSymsp->__Vcoverage[1451]);
                }
                if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                              >> 3U)))) {
                    if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        ++(vlSymsp->__Vcoverage[1451]);
                    }
                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            if ((1U & (~ vlSelf->rv_core_top__DOT__fe_instr))) {
                                ++(vlSymsp->__Vcoverage[1451]);
                            }
                            if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                ++(vlSymsp->__Vcoverage[1410]);
                                vlSelf->rv_core_top__DOT__u_decode__DOT__mem_w_comb = 1U;
                            }
                        }
                        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[1451]);
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[1451]);
                        }
                        if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            if ((1U & (~ vlSelf->rv_core_top__DOT__fe_instr))) {
                                ++(vlSymsp->__Vcoverage[1451]);
                            }
                            if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                ++(vlSymsp->__Vcoverage[1409]);
                                vlSelf->rv_core_top__DOT__u_decode__DOT__mem_r_comb = 1U;
                            }
                        }
                    }
                    if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        ++(vlSymsp->__Vcoverage[1451]);
                    }
                }
                if ((8U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    ++(vlSymsp->__Vcoverage[1451]);
                }
            }
            if ((0x10U & vlSelf->rv_core_top__DOT__fe_instr)) {
                if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            if ((1U & (~ vlSelf->rv_core_top__DOT__fe_instr))) {
                                ++(vlSymsp->__Vcoverage[1451]);
                            }
                            if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                ++(vlSymsp->__Vcoverage[1420]);
                                if ((0x4000U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[1414]);
                                        }
                                        if ((0x1000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            ++(vlSymsp->__Vcoverage[1418]);
                                        }
                                    }
                                    if ((0x2000U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                        if ((0x1000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            ++(vlSymsp->__Vcoverage[1416]);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[1415]);
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                              >> 0xeU)))) {
                                    if ((0x2000U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                        if ((0x1000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            ++(vlSymsp->__Vcoverage[1413]);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[1412]);
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            ++(vlSymsp->__Vcoverage[1417]);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[1411]);
                                        }
                                    }
                                }
                            }
                        }
                        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[1451]);
                        }
                    }
                    if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                ++(vlSymsp->__Vcoverage[1398]);
                            }
                            if ((1U & (~ vlSelf->rv_core_top__DOT__fe_instr))) {
                                ++(vlSymsp->__Vcoverage[1451]);
                            }
                        }
                        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[1451]);
                        }
                    }
                }
                if ((8U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                if ((0x4000U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            ++(vlSymsp->__Vcoverage[1418]);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[1414]);
                                        }
                                    }
                                    if ((0x2000U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                        if ((0x1000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            ++(vlSymsp->__Vcoverage[1416]);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[1415]);
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            ++(vlSymsp->__Vcoverage[1417]);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[1411]);
                                        }
                                    }
                                    if ((0x2000U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                        if ((0x1000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            ++(vlSymsp->__Vcoverage[1413]);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[1412]);
                                        }
                                    }
                                }
                                ++(vlSymsp->__Vcoverage[1420]);
                            }
                            if ((1U & (~ vlSelf->rv_core_top__DOT__fe_instr))) {
                                ++(vlSymsp->__Vcoverage[1451]);
                            }
                        }
                        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[1451]);
                        }
                    }
                    if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        ++(vlSymsp->__Vcoverage[1451]);
                    }
                }
            }
        }
    }
    vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = 0U;
    vlSelf->rv_core_top__DOT__u_decode__DOT__br_comb = 0U;
    vlSelf->rv_core_top__DOT__u_decode__DOT__jal_comb = 0U;
    vlSelf->rv_core_top__DOT__u_decode__DOT__jalr_comb = 0U;
    vlSelf->rv_core_top__DOT__u_decode__DOT__csr_comb = 0U;
    vlSelf->rv_core_top__DOT__u_decode__DOT__ec_comb = 0U;
    vlSelf->rv_core_top__DOT__u_decode__DOT__eb_comb = 0U;
    vlSelf->rv_core_top__DOT__u_decode__DOT__mret_comb = 0U;
    vlSelf->rv_core_top__DOT__u_decode__DOT__zimm_form 
        = (IData)((0x4073U == (0x407fU & vlSelf->rv_core_top__DOT__fe_instr)));
    vlSelf->rv_core_top__DOT__u_decode__DOT__csrop_comb = 0U;
    if ((1U & (vlSelf->rv_core_top__DOT__fe_instr ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfffffffeU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (1U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((2U & (vlSelf->rv_core_top__DOT__fe_instr ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfffffffdU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (2U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((4U & (vlSelf->rv_core_top__DOT__fe_instr ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfffffffbU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (4U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((8U & (vlSelf->rv_core_top__DOT__fe_instr ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfffffff7U & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (8U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x10U & (vlSelf->rv_core_top__DOT__fe_instr 
                  ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xffffffefU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x10U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x20U & (vlSelf->rv_core_top__DOT__fe_instr 
                  ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xffffffdfU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x20U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x40U & (vlSelf->rv_core_top__DOT__fe_instr 
                  ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xffffffbfU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x40U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x80U & (vlSelf->rv_core_top__DOT__fe_instr 
                  ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xffffff7fU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x80U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x100U & (vlSelf->rv_core_top__DOT__fe_instr 
                   ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfffffeffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x100U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x200U & (vlSelf->rv_core_top__DOT__fe_instr 
                   ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfffffdffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x200U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x400U & (vlSelf->rv_core_top__DOT__fe_instr 
                   ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfffffbffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x400U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x800U & (vlSelf->rv_core_top__DOT__fe_instr 
                   ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfffff7ffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x800U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x1000U & (vlSelf->rv_core_top__DOT__fe_instr 
                    ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xffffefffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x1000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x2000U & (vlSelf->rv_core_top__DOT__fe_instr 
                    ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xffffdfffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x2000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x4000U & (vlSelf->rv_core_top__DOT__fe_instr 
                    ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xffffbfffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x4000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x8000U & (vlSelf->rv_core_top__DOT__fe_instr 
                    ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xffff7fffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x8000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x10000U & (vlSelf->rv_core_top__DOT__fe_instr 
                     ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfffeffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x10000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x20000U & (vlSelf->rv_core_top__DOT__fe_instr 
                     ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfffdffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x20000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x40000U & (vlSelf->rv_core_top__DOT__fe_instr 
                     ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfffbffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x40000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x80000U & (vlSelf->rv_core_top__DOT__fe_instr 
                     ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfff7ffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x80000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x100000U & (vlSelf->rv_core_top__DOT__fe_instr 
                      ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xffefffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x100000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x200000U & (vlSelf->rv_core_top__DOT__fe_instr 
                      ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xffdfffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x200000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x400000U & (vlSelf->rv_core_top__DOT__fe_instr 
                      ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xffbfffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x400000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x800000U & (vlSelf->rv_core_top__DOT__fe_instr 
                      ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xff7fffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x800000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x1000000U & (vlSelf->rv_core_top__DOT__fe_instr 
                       ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfeffffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x1000000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x2000000U & (vlSelf->rv_core_top__DOT__fe_instr 
                       ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfdffffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x2000000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x4000000U & (vlSelf->rv_core_top__DOT__fe_instr 
                       ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xfbffffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x4000000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x8000000U & (vlSelf->rv_core_top__DOT__fe_instr 
                       ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xf7ffffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x8000000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x10000000U & (vlSelf->rv_core_top__DOT__fe_instr 
                        ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xefffffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x10000000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x20000000U & (vlSelf->rv_core_top__DOT__fe_instr 
                        ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xdfffffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x20000000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if ((0x40000000U & (vlSelf->rv_core_top__DOT__fe_instr 
                        ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0xbfffffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x40000000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    if (((vlSelf->rv_core_top__DOT__fe_instr ^ vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_instr 
            = ((0x7fffffffU & vlSelf->rv_core_top__DOT____Vtogcov__fe_instr) 
               | (0x80000000U & vlSelf->rv_core_top__DOT__fe_instr));
    }
    vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb = 0U;
    vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb = 0ULL;
    if ((0x40U & vlSelf->rv_core_top__DOT__fe_instr)) {
        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                      >> 5U)))) {
            ++(vlSymsp->__Vcoverage[1451]);
        }
        if ((0x20U & vlSelf->rv_core_top__DOT__fe_instr)) {
            if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[1451]);
                        }
                        if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            if ((1U & (~ vlSelf->rv_core_top__DOT__fe_instr))) {
                                ++(vlSymsp->__Vcoverage[1451]);
                            }
                            if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                ++(vlSymsp->__Vcoverage[1408]);
                                if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[1401]);
                                        }
                                        if ((0x1000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            ++(vlSymsp->__Vcoverage[1402]);
                                        }
                                    }
                                    if ((0x2000U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                        ++(vlSymsp->__Vcoverage[1407]);
                                    }
                                }
                                if ((0x4000U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[1403]);
                                        }
                                        if ((0x1000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            ++(vlSymsp->__Vcoverage[1404]);
                                        }
                                    }
                                    if ((0x2000U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                        if ((0x1000U 
                                             & vlSelf->rv_core_top__DOT__fe_instr)) {
                                            ++(vlSymsp->__Vcoverage[1406]);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[1405]);
                                        }
                                    }
                                }
                                vlSelf->rv_core_top__DOT__u_decode__DOT__br_comb = 1U;
                            }
                        }
                    }
                    if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            if ((1U & (~ vlSelf->rv_core_top__DOT__fe_instr))) {
                                ++(vlSymsp->__Vcoverage[1451]);
                            }
                            if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                ++(vlSymsp->__Vcoverage[1400]);
                                vlSelf->rv_core_top__DOT__u_decode__DOT__jalr_comb = 1U;
                            }
                        }
                        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[1451]);
                        }
                    }
                }
                if ((8U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                ++(vlSymsp->__Vcoverage[1399]);
                                vlSelf->rv_core_top__DOT__u_decode__DOT__jal_comb = 1U;
                                vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb = 0U;
                            }
                            if ((1U & (~ vlSelf->rv_core_top__DOT__fe_instr))) {
                                ++(vlSymsp->__Vcoverage[1451]);
                            }
                        }
                        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[1451]);
                        }
                    }
                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                  >> 2U)))) {
                        ++(vlSymsp->__Vcoverage[1451]);
                    }
                } else if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb = 0U;
                        }
                    }
                } else if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb 
                            = ((0x4000U & vlSelf->rv_core_top__DOT__fe_instr)
                                ? ((0x2000U & vlSelf->rv_core_top__DOT__fe_instr)
                                    ? 3U : 2U) : 1U);
                    }
                }
            }
            if ((0x10U & vlSelf->rv_core_top__DOT__fe_instr)) {
                if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                                if ((0U == (7U & (vlSelf->rv_core_top__DOT__fe_instr 
                                                  >> 0xcU)))) {
                                    if ((0U != (vlSelf->rv_core_top__DOT__fe_instr 
                                                >> 0x14U))) {
                                        if ((1U == 
                                             (vlSelf->rv_core_top__DOT__fe_instr 
                                              >> 0x14U))) {
                                            ++(vlSymsp->__Vcoverage[1445]);
                                            vlSelf->rv_core_top__DOT__u_decode__DOT__eb_comb = 1U;
                                        }
                                        if ((1U != 
                                             (vlSelf->rv_core_top__DOT__fe_instr 
                                              >> 0x14U))) {
                                            if ((0x302U 
                                                 == 
                                                 (vlSelf->rv_core_top__DOT__fe_instr 
                                                  >> 0x14U))) {
                                                ++(vlSymsp->__Vcoverage[1446]);
                                                vlSelf->rv_core_top__DOT__u_decode__DOT__mret_comb = 1U;
                                            }
                                            if ((0x302U 
                                                 != 
                                                 (vlSelf->rv_core_top__DOT__fe_instr 
                                                  >> 0x14U))) {
                                                ++(vlSymsp->__Vcoverage[1447]);
                                            }
                                        }
                                    }
                                    if ((0U == (vlSelf->rv_core_top__DOT__fe_instr 
                                                >> 0x14U))) {
                                        ++(vlSymsp->__Vcoverage[1444]);
                                        vlSelf->rv_core_top__DOT__u_decode__DOT__ec_comb = 1U;
                                    }
                                    ++(vlSymsp->__Vcoverage[1448]);
                                }
                                if ((0U != (7U & (vlSelf->rv_core_top__DOT__fe_instr 
                                                  >> 0xcU)))) {
                                    ++(vlSymsp->__Vcoverage[1449]);
                                    vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = 1U;
                                    vlSelf->rv_core_top__DOT__u_decode__DOT__csr_comb = 1U;
                                    vlSelf->rv_core_top__DOT__u_decode__DOT__csrop_comb 
                                        = (3U & (vlSelf->rv_core_top__DOT__fe_instr 
                                                 >> 0xcU));
                                    vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                        = (QData)((IData)(
                                                          (vlSelf->rv_core_top__DOT__fe_instr 
                                                           >> 0x14U)));
                                }
                                ++(vlSymsp->__Vcoverage[1450]);
                            }
                            if ((1U & (~ vlSelf->rv_core_top__DOT__fe_instr))) {
                                ++(vlSymsp->__Vcoverage[1451]);
                            }
                        }
                        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[1451]);
                        }
                    }
                    if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        ++(vlSymsp->__Vcoverage[1451]);
                    }
                }
                if ((8U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    ++(vlSymsp->__Vcoverage[1451]);
                }
            } else if ((8U & vlSelf->rv_core_top__DOT__fe_instr)) {
                if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = 1U;
                            vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                = (((- (QData)((IData)(
                                                       (vlSelf->rv_core_top__DOT__fe_instr 
                                                        >> 0x1fU)))) 
                                    << 0x14U) | (QData)((IData)(
                                                                ((0xff000U 
                                                                  & vlSelf->rv_core_top__DOT__fe_instr) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->rv_core_top__DOT__fe_instr 
                                                                        >> 9U)) 
                                                                    | (0x7feU 
                                                                       & (vlSelf->rv_core_top__DOT__fe_instr 
                                                                          >> 0x14U)))))));
                        }
                    }
                }
            } else if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = 1U;
                        vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                            = (((- (QData)((IData)(
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           (vlSelf->rv_core_top__DOT__fe_instr 
                                                            >> 0x14U))));
                    }
                }
            } else if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        = (((- (QData)((IData)((vlSelf->rv_core_top__DOT__fe_instr 
                                                >> 0x1fU)))) 
                            << 0xdU) | (QData)((IData)(
                                                       ((0x1000U 
                                                         & (vlSelf->rv_core_top__DOT__fe_instr 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->rv_core_top__DOT__fe_instr 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->rv_core_top__DOT__fe_instr 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->rv_core_top__DOT__fe_instr 
                                                                    >> 7U))))))));
                }
            }
        }
    } else if ((0x20U & vlSelf->rv_core_top__DOT__fe_instr)) {
        if ((0x10U & vlSelf->rv_core_top__DOT__fe_instr)) {
            if ((8U & vlSelf->rv_core_top__DOT__fe_instr)) {
                if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = 1U;
                            vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb 
                                = ((1U == (vlSelf->rv_core_top__DOT__fe_instr 
                                           >> 0x19U))
                                    ? ((0x4000U & vlSelf->rv_core_top__DOT__fe_instr)
                                        ? ((0x2000U 
                                            & vlSelf->rv_core_top__DOT__fe_instr)
                                            ? ((0x1000U 
                                                & vlSelf->rv_core_top__DOT__fe_instr)
                                                ? 0x13U
                                                : 0x12U)
                                            : ((0x1000U 
                                                & vlSelf->rv_core_top__DOT__fe_instr)
                                                ? 0x11U
                                                : 0x10U))
                                        : ((0x2000U 
                                            & vlSelf->rv_core_top__DOT__fe_instr)
                                            ? ((0x1000U 
                                                & vlSelf->rv_core_top__DOT__fe_instr)
                                                ? 0xfU
                                                : 0xeU)
                                            : ((0x1000U 
                                                & vlSelf->rv_core_top__DOT__fe_instr)
                                                ? 0xdU
                                                : 0xcU)))
                                    : ((0x40000000U 
                                        & vlSelf->rv_core_top__DOT__fe_instr)
                                        ? ((0x4000U 
                                            & vlSelf->rv_core_top__DOT__fe_instr)
                                            ? ((0x2000U 
                                                & vlSelf->rv_core_top__DOT__fe_instr)
                                                ? 0U
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->rv_core_top__DOT__fe_instr)
                                                    ? 9U
                                                    : 0U))
                                            : ((0x2000U 
                                                & vlSelf->rv_core_top__DOT__fe_instr)
                                                ? 0U
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->rv_core_top__DOT__fe_instr)
                                                    ? 0U
                                                    : 1U)))
                                        : ((0x4000U 
                                            & vlSelf->rv_core_top__DOT__fe_instr)
                                            ? ((0x2000U 
                                                & vlSelf->rv_core_top__DOT__fe_instr)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->rv_core_top__DOT__fe_instr)
                                                    ? 6U
                                                    : 5U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->rv_core_top__DOT__fe_instr)
                                                    ? 8U
                                                    : 4U))
                                            : ((0x2000U 
                                                & vlSelf->rv_core_top__DOT__fe_instr)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->rv_core_top__DOT__fe_instr)
                                                    ? 3U
                                                    : 2U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->rv_core_top__DOT__fe_instr)
                                                    ? 7U
                                                    : 0U)))));
                        }
                    }
                }
            } else if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = 1U;
                        vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb = 0xaU;
                    }
                }
            } else if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = 1U;
                    vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb 
                        = ((1U == (vlSelf->rv_core_top__DOT__fe_instr 
                                   >> 0x19U)) ? ((0x4000U 
                                                  & vlSelf->rv_core_top__DOT__fe_instr)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->rv_core_top__DOT__fe_instr)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->rv_core_top__DOT__fe_instr)
                                                    ? 0x13U
                                                    : 0x12U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->rv_core_top__DOT__fe_instr)
                                                    ? 0x11U
                                                    : 0x10U))
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->rv_core_top__DOT__fe_instr)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->rv_core_top__DOT__fe_instr)
                                                    ? 0xfU
                                                    : 0xeU)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->rv_core_top__DOT__fe_instr)
                                                    ? 0xdU
                                                    : 0xcU)))
                            : ((0x40000000U & vlSelf->rv_core_top__DOT__fe_instr)
                                ? ((0x4000U & vlSelf->rv_core_top__DOT__fe_instr)
                                    ? ((0x2000U & vlSelf->rv_core_top__DOT__fe_instr)
                                        ? 0U : ((0x1000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)
                                                 ? 9U
                                                 : 0U))
                                    : ((0x2000U & vlSelf->rv_core_top__DOT__fe_instr)
                                        ? 0U : ((0x1000U 
                                                 & vlSelf->rv_core_top__DOT__fe_instr)
                                                 ? 0U
                                                 : 1U)))
                                : ((0x4000U & vlSelf->rv_core_top__DOT__fe_instr)
                                    ? ((0x2000U & vlSelf->rv_core_top__DOT__fe_instr)
                                        ? ((0x1000U 
                                            & vlSelf->rv_core_top__DOT__fe_instr)
                                            ? 6U : 5U)
                                        : ((0x1000U 
                                            & vlSelf->rv_core_top__DOT__fe_instr)
                                            ? 8U : 4U))
                                    : ((0x2000U & vlSelf->rv_core_top__DOT__fe_instr)
                                        ? ((0x1000U 
                                            & vlSelf->rv_core_top__DOT__fe_instr)
                                            ? 3U : 2U)
                                        : ((0x1000U 
                                            & vlSelf->rv_core_top__DOT__fe_instr)
                                            ? 7U : 0U)))));
                }
            }
            if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                          >> 3U)))) {
                if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                            vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                = (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->rv_core_top__DOT__fe_instr 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (0xfffff000U 
                                                                 & vlSelf->rv_core_top__DOT__fe_instr))));
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                          >> 2U)))) {
                if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                            = (((- (QData)((IData)(
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->rv_core_top__DOT__fe_instr 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->rv_core_top__DOT__fe_instr 
                                                                  >> 7U))))));
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->rv_core_top__DOT__fe_instr)) {
        if ((8U & vlSelf->rv_core_top__DOT__fe_instr)) {
            if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                          >> 2U)))) {
                if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = 1U;
                        vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb 
                            = ((0x4000U & vlSelf->rv_core_top__DOT__fe_instr)
                                ? ((0x2000U & vlSelf->rv_core_top__DOT__fe_instr)
                                    ? ((0x1000U & vlSelf->rv_core_top__DOT__fe_instr)
                                        ? 6U : 5U) : 
                                   ((0x1000U & vlSelf->rv_core_top__DOT__fe_instr)
                                     ? ((0x40000000U 
                                         & vlSelf->rv_core_top__DOT__fe_instr)
                                         ? 9U : 8U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelf->rv_core_top__DOT__fe_instr)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->rv_core_top__DOT__fe_instr)
                                                    ? 3U
                                                    : 2U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->rv_core_top__DOT__fe_instr)
                                                    ? 7U
                                                    : 0U)));
                        vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                            = (((- (QData)((IData)(
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           (vlSelf->rv_core_top__DOT__fe_instr 
                                                            >> 0x14U))));
                    }
                }
            }
        } else if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
            if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = 1U;
                    vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb = 0xbU;
                    vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->rv_core_top__DOT__fe_instr 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & vlSelf->rv_core_top__DOT__fe_instr))));
                }
            }
        } else if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
            if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = 1U;
                vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb 
                    = ((0x4000U & vlSelf->rv_core_top__DOT__fe_instr)
                        ? ((0x2000U & vlSelf->rv_core_top__DOT__fe_instr)
                            ? ((0x1000U & vlSelf->rv_core_top__DOT__fe_instr)
                                ? 6U : 5U) : ((0x1000U 
                                               & vlSelf->rv_core_top__DOT__fe_instr)
                                               ? ((0x40000000U 
                                                   & vlSelf->rv_core_top__DOT__fe_instr)
                                                   ? 9U
                                                   : 8U)
                                               : 4U))
                        : ((0x2000U & vlSelf->rv_core_top__DOT__fe_instr)
                            ? ((0x1000U & vlSelf->rv_core_top__DOT__fe_instr)
                                ? 3U : 2U) : ((0x1000U 
                                               & vlSelf->rv_core_top__DOT__fe_instr)
                                               ? 7U
                                               : 0U)));
                vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                    = (((- (QData)((IData)((vlSelf->rv_core_top__DOT__fe_instr 
                                            >> 0x1fU)))) 
                        << 0xcU) | (QData)((IData)(
                                                   (vlSelf->rv_core_top__DOT__fe_instr 
                                                    >> 0x14U))));
            }
        }
    } else if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                      >> 2U)))) {
            if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = 1U;
                    vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        = (((- (QData)((IData)((vlSelf->rv_core_top__DOT__fe_instr 
                                                >> 0x1fU)))) 
                            << 0xcU) | (QData)((IData)(
                                                       (vlSelf->rv_core_top__DOT__fe_instr 
                                                        >> 0x14U))));
                }
            }
        }
    }
    vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
        = ((0U == (0x1fU & (vlSelf->rv_core_top__DOT__fe_instr 
                            >> 0xfU))) ? 0ULL : (((IData)(vlSelf->rv_core_top__DOT__wb_we) 
                                                  & ((0x1fU 
                                                      & (vlSelf->rv_core_top__DOT__fe_instr 
                                                         >> 0xfU)) 
                                                     == (IData)(vlSelf->rv_core_top__DOT__wb_rd)))
                                                  ? vlSelf->rv_core_top__DOT__wb_data
                                                  : 
                                                 vlSelf->rv_core_top__DOT__u_decode__DOT__u_rf__DOT__mem
                                                 [(0x1fU 
                                                   & (vlSelf->rv_core_top__DOT__fe_instr 
                                                      >> 0xfU))]));
    vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
        = ((0U == (0x1fU & (vlSelf->rv_core_top__DOT__fe_instr 
                            >> 0x14U))) ? 0ULL : (((IData)(vlSelf->rv_core_top__DOT__wb_we) 
                                                   & ((0x1fU 
                                                       & (vlSelf->rv_core_top__DOT__fe_instr 
                                                          >> 0x14U)) 
                                                      == (IData)(vlSelf->rv_core_top__DOT__wb_rd)))
                                                   ? vlSelf->rv_core_top__DOT__wb_data
                                                   : 
                                                  vlSelf->rv_core_top__DOT__u_decode__DOT__u_rf__DOT__mem
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->rv_core_top__DOT__fe_instr 
                                                      >> 0x14U))]));
    if (vlSelf->rst_n) {
        if (vlSelf->rv_core_top__DOT__branch_taken) {
            vlSelf->rv_core_top__DOT__branch_target = 0ULL;
        } else if ((1U & (((~ (IData)(vlSelf->rv_core_top__DOT__stall_ex)) 
                           & (~ (IData)(vlSelf->rv_core_top__DOT__mul_div_stall))) 
                          & (~ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_fin))))) {
            vlSelf->rv_core_top__DOT__branch_target 
                = vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt;
        }
        if (vlSelf->rv_core_top__DOT__u_fetch__DOT__redirect) {
            vlSelf->rv_core_top__DOT__branch_taken = 0U;
        } else if ((1U & (((~ (IData)(vlSelf->rv_core_top__DOT__stall_ex)) 
                           & (~ (IData)(vlSelf->rv_core_top__DOT__mul_div_stall))) 
                          & (~ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_fin))))) {
            vlSelf->rv_core_top__DOT__branch_taken 
                = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__branch_comb) 
                   & (IData)(vlSelf->rv_core_top__DOT__de_valid));
        } else if (vlSelf->rv_core_top__DOT__u_execute__DOT__mx_done) {
            vlSelf->rv_core_top__DOT__branch_taken = 0U;
        }
    } else {
        vlSelf->rv_core_top__DOT__branch_target = 0ULL;
        vlSelf->rv_core_top__DOT__branch_taken = 0U;
    }
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
    vlSelf->rv_core_top__DOT__u_execute__DOT__ovf = 
        ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__signed_op) 
         & ((0ULL != vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b) 
            & ((0xffffffffffffffffULL == vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b) 
               & ((0x3bU == (IData)(vlSelf->rv_core_top__DOT__de_op))
                   ? (0x80000000U == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a))
                   : (0x8000000000000000ULL == vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a)))));
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
    if (((IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT__ar_fire) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__ar_fire))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__ar_fire 
            = vlSelf->rv_core_top__DOT__u_fetch__DOT__ar_fire;
    }
    if ((1U & ((IData)(vlSelf->imem_araddr) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffffffffeULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->imem_araddr)))));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 1U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffffffffdULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 2U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffffffffbULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 3U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffffffff7ULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 4U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffffffffefULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 5U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffffffffdfULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 6U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffffffffbfULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 7U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffffffff7fULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 8U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffffffeffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 9U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffffffdffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0xaU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffffffbffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0xbU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffffff7ffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0xcU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffffffefffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0xdU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffffffdfffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0xeU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffffffbfffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0xfU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffffff7fffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x10U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffffeffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x11U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffffdffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x12U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffffbffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x13U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffff7ffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x14U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffffefffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x15U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffffdfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x16U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffffbfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x17U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffff7fffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x18U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffeffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x19U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffdffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x1aU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfffbffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x1bU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfff7ffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x1cU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffefffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x1dU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffdfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x1eU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xffbfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x1fU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xff7fffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x20U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfeffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x21U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfdffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x22U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xfbffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x23U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xf7ffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x24U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xefffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x25U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xdfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->imem_araddr >> 0x26U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0xbfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((IData)(((vlSelf->imem_araddr ^ vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
                 >> 0x27U))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr 
            = ((0x7fffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_araddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__mem_r_comb) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__mem_r_comb))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__mem_r_comb 
            = vlSelf->rv_core_top__DOT__u_decode__DOT__mem_r_comb;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__mem_w_comb) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__mem_w_comb))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__mem_w_comb 
            = vlSelf->rv_core_top__DOT__u_decode__DOT__mem_w_comb;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__reg_w_comb))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__reg_w_comb 
            = vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__br_comb) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__br_comb))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__br_comb 
            = vlSelf->rv_core_top__DOT__u_decode__DOT__br_comb;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__jal_comb) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__jal_comb))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__jal_comb 
            = vlSelf->rv_core_top__DOT__u_decode__DOT__jal_comb;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__jalr_comb) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__jalr_comb))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__jalr_comb 
            = vlSelf->rv_core_top__DOT__u_decode__DOT__jalr_comb;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__csr_comb) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__csr_comb))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__csr_comb 
            = vlSelf->rv_core_top__DOT__u_decode__DOT__csr_comb;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__ec_comb) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__ec_comb))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__ec_comb 
            = vlSelf->rv_core_top__DOT__u_decode__DOT__ec_comb;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__eb_comb) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__eb_comb))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__eb_comb 
            = vlSelf->rv_core_top__DOT__u_decode__DOT__eb_comb;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__mret_comb) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__mret_comb))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__mret_comb 
            = vlSelf->rv_core_top__DOT__u_decode__DOT__mret_comb;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__zimm_form) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__zimm_form))) {
        ++(vlSymsp->__Vcoverage[1453]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__zimm_form 
            = vlSelf->rv_core_top__DOT__u_decode__DOT__zimm_form;
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__csrop_comb) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__csrop_comb)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__csrop_comb 
            = ((2U & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__csrop_comb)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__csrop_comb)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__csrop_comb) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__csrop_comb)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__csrop_comb 
            = ((1U & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__csrop_comb)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__csrop_comb)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb)))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb 
            = ((0x1eU & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb)))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb 
            = ((0x1dU & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb)))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb 
            = ((0x1bU & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb)))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb 
            = ((0x17U & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb) 
                  ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb)))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb 
            = ((0xfU & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb)))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                  ^ vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data)))) {
        ++(vlSymsp->__Vcoverage[1454]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1455]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1456]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1457]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1458]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1459]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1460]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1461]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1462]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1463]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1464]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1465]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1466]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1467]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1468]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1469]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1470]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1471]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1472]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1473]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1474]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1475]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1476]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1477]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1478]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1479]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1480]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1481]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1482]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1483]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1484]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1485]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1486]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1487]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1488]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1489]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1490]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1491]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1492]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1493]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1494]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1495]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1496]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1497]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1498]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1499]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1500]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1501]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1502]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1503]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1504]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1505]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1506]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1507]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1508]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1509]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1510]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1511]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1512]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1513]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1514]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1515]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1516]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                  ^ vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1517]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data)))) {
        ++(vlSymsp->__Vcoverage[1518]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1519]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1520]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1521]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1522]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1523]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1524]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1525]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1526]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1527]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1528]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1529]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1530]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1531]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1532]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1533]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1534]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1535]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1536]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1537]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1538]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1539]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1540]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1541]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1542]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1543]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1544]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1545]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1546]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1547]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1548]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1549]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1550]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1551]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1552]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1553]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1554]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1555]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1556]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1557]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1558]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1559]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1560]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1561]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1562]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1563]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1564]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1565]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1566]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1567]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1568]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1569]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1570]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1571]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1572]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                  ^ vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__ovf) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__ovf 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__ovf;
    }
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
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__branch_target) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__branch_target)))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__branch_target)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__branch_target 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__branch_target 
                  ^ vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_target 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__branch_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__branch_target 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
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
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_fin 
        = vlSelf->__Vdly__rv_core_top__DOT__u_execute__DOT__mx_fin;
    vlSelf->rv_core_top__DOT__stall_ex = ((IData)(vlSelf->halt_req) 
                                          | (IData)(vlSelf->rv_core_top__DOT__mem_stall));
    vlSelf->rv_core_top__DOT__de_valid = vlSelf->__Vdly__rv_core_top__DOT__de_valid;
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
    if (((IData)(vlSelf->rv_core_top__DOT__branch_taken) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__branch_taken))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_taken 
            = vlSelf->rv_core_top__DOT__branch_taken;
    }
    vlSelf->rv_core_top__DOT__u_fetch__DOT__redirect 
        = vlSelf->rv_core_top__DOT__branch_taken;
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_fin) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_fin))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_fin 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__mx_fin;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__stall_ex) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__stall_ex))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->rv_core_top__DOT____Vtogcov__stall_ex 
            = vlSelf->rv_core_top__DOT__stall_ex;
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_done 
        = ((~ (IData)(vlSelf->rv_core_top__DOT__stall_ex)) 
           & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_ready));
    if (((IData)(vlSelf->rv_core_top__DOT__de_valid) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_valid))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_valid 
            = vlSelf->rv_core_top__DOT__de_valid;
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_raw_start 
        = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__is_mext) 
           & ((IData)(vlSelf->rv_core_top__DOT__de_valid) 
              & ((~ (IData)(vlSelf->rv_core_top__DOT__stall_ex)) 
                 & ((~ (IData)(vlSelf->rv_core_top__DOT__branch_taken)) 
                    & ((~ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_fin)) 
                       & (0U == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_state)))))));
    vlSelf->rv_core_top__DOT__u_execute__DOT__sys_present 
        = ((IData)(vlSelf->rv_core_top__DOT__de_valid) 
           & (0x73U == (IData)(vlSelf->rv_core_top__DOT__de_op)));
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
    vlSelf->rv_core_top__DOT__u_execute__DOT__mret_commit 
        = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__ex_exit) 
           & (IData)(vlSelf->rv_core_top__DOT__de_mret));
    if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_ext)))) {
        if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_soft)))) {
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
    vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w 
        = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_ext)
            ? 0x800000000000000bULL : ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_soft)
                                        ? 0x8000000000000003ULL
                                        : ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_timer)
                                            ? 0x8000000000000007ULL
                                            : ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h0abe2d2d__0)
                                                ? 2ULL
                                                : ((IData)(vlSelf->rv_core_top__DOT__de_ebreak)
                                                    ? 3ULL
                                                    : 0xbULL)))));
    vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_heb811627__0 
        = ((IData)(vlSelf->rv_core_top__DOT__de_ecall) 
           | ((IData)(vlSelf->rv_core_top__DOT__de_ebreak) 
              | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h0abe2d2d__0)));
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
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mret_commit) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mret_commit))) {
        ++(vlSymsp->__Vcoverage[3398]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mret_commit 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__mret_commit;
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
    vlSelf->rv_core_top__DOT__u_execute__DOT__trap_req_c 
        = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__ex_exit) 
           & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_heb811627__0));
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__csr_we_w) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_we_w))) {
        ++(vlSymsp->__Vcoverage[3403]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_we_w 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__csr_we_w;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__trap_req_c) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_req_c))) {
        ++(vlSymsp->__Vcoverage[3736]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_req_c 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__trap_req_c;
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__irq_take 
        = ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__ex_exit) 
           & ((~ ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mret_commit) 
                  | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__trap_req_c))) 
              & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_ext) 
                 | ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_soft) 
                    | (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_timer)))));
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
