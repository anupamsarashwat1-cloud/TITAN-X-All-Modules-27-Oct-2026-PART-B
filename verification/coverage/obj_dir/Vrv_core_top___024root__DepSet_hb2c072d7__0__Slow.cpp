// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv_core_top.h for the primary calling header

#include "Vrv_core_top__pch.h"
#include "Vrv_core_top__Syms.h"
#include "Vrv_core_top___024root.h"

extern const VlWide<16>/*511:0*/ Vrv_core_top__ConstPool__CONST_h93e1b771_0;

VL_ATTR_COLD void Vrv_core_top___024root___eval_initial__TOP(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_initial__TOP\n"); );
    // Body
    if ((1U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_arlen))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_arlen 
            = (0xfeU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_arlen));
    }
    if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_arsize) 
                  >> 1U)))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_arsize 
            = (2U | (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_arsize));
    }
    ++(vlSymsp->__Vcoverage[1452]);
    ++(vlSymsp->__Vcoverage[1962]);
    ++(vlSymsp->__Vcoverage[3131]);
    ++(vlSymsp->__Vcoverage[3328]);
    ++(vlSymsp->__Vcoverage[3541]);
    ++(vlSymsp->__Vcoverage[3749]);
    ++(vlSymsp->__Vcoverage[4495]);
    vlSelf->imem_arlen = 0U;
    vlSelf->imem_arsize = 2U;
    vlSelf->imem_arburst = 0U;
    vlSelf->dmem_awlen = 0U;
    vlSelf->dmem_awsize = 3U;
    vlSelf->dmem_awburst = 0U;
    vlSelf->dmem_wlast = 1U;
    vlSelf->dmem_arlen = 0U;
    vlSelf->dmem_arsize = 3U;
    vlSelf->dmem_arburst = 0U;
    vlSelf->dmem_arlock = 0U;
    vlSelf->snoop_ack = 0U;
    vlSelf->snoop_data_valid = 0U;
    vlSelf->snoop_data[0U] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[0U];
    vlSelf->snoop_data[1U] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[1U];
    vlSelf->snoop_data[2U] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[2U];
    vlSelf->snoop_data[3U] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[3U];
    vlSelf->snoop_data[4U] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[4U];
    vlSelf->snoop_data[5U] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[5U];
    vlSelf->snoop_data[6U] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[6U];
    vlSelf->snoop_data[7U] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[7U];
    vlSelf->snoop_data[8U] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[8U];
    vlSelf->snoop_data[9U] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[9U];
    vlSelf->snoop_data[0xaU] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelf->snoop_data[0xbU] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelf->snoop_data[0xcU] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelf->snoop_data[0xdU] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelf->snoop_data[0xeU] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelf->snoop_data[0xfU] = Vrv_core_top__ConstPool__CONST_h93e1b771_0[0xfU];
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv_core_top___024root___dump_triggers__stl(Vrv_core_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv_core_top___024root___eval_triggers__stl(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrv_core_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vrv_core_top___024root___stl_sequent__TOP__0(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
            if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
                        ++(vlSymsp->__Vcoverage[1957]);
                    }
                    if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__de_aluop)))) {
                        ++(vlSymsp->__Vcoverage[1956]);
                    }
                }
                if ((2U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
                    if ((1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
                        ++(vlSymsp->__Vcoverage[1959]);
                    }
                    if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__de_aluop)))) {
                        ++(vlSymsp->__Vcoverage[1958]);
                    }
                }
            }
            if ((4U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
                ++(vlSymsp->__Vcoverage[1961]);
            }
        }
        if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
                if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__de_aluop)))) {
                        ++(vlSymsp->__Vcoverage[1952]);
                    }
                    if ((1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
                        ++(vlSymsp->__Vcoverage[1953]);
                    }
                }
                if ((2U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
                    if ((1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
                        ++(vlSymsp->__Vcoverage[1955]);
                    }
                    if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__de_aluop)))) {
                        ++(vlSymsp->__Vcoverage[1954]);
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__de_aluop)))) {
                        ++(vlSymsp->__Vcoverage[1948]);
                    }
                    if ((1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
                        ++(vlSymsp->__Vcoverage[1949]);
                    }
                }
                if ((2U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
                    if ((1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
                        ++(vlSymsp->__Vcoverage[1951]);
                    }
                    if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__de_aluop)))) {
                        ++(vlSymsp->__Vcoverage[1950]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
        if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
                if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
                        ++(vlSymsp->__Vcoverage[1961]);
                    }
                    if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__de_aluop)))) {
                        ++(vlSymsp->__Vcoverage[1960]);
                    }
                }
                if ((2U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
                    ++(vlSymsp->__Vcoverage[1961]);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
                          >> 2U)))) {
                ++(vlSymsp->__Vcoverage[1961]);
            }
        }
        if ((8U & (IData)(vlSelf->rv_core_top__DOT__de_aluop))) {
            ++(vlSymsp->__Vcoverage[1961]);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))) {
            if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q) 
                          >> 2U)))) {
                ++(vlSymsp->__Vcoverage[3130]);
            }
            if ((4U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))) {
                if ((2U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))) {
                    if ((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))) {
                        ++(vlSymsp->__Vcoverage[3129]);
                    }
                    if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q)))) {
                        ++(vlSymsp->__Vcoverage[3128]);
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q)))) {
                        ++(vlSymsp->__Vcoverage[3126]);
                    }
                    if ((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))) {
                        ++(vlSymsp->__Vcoverage[3127]);
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q) 
                      >> 3U)))) {
            ++(vlSymsp->__Vcoverage[3130]);
        }
    }
    if ((0x10U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))) {
        ++(vlSymsp->__Vcoverage[3130]);
    }
    if ((0x10U != (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))) {
        if ((0x11U != (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))) {
            if ((0x12U == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))) {
                ++(vlSymsp->__Vcoverage[3326]);
            }
            if ((0x12U != (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))) {
                ++(vlSymsp->__Vcoverage[3327]);
            }
        }
        if ((0x11U == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))) {
            ++(vlSymsp->__Vcoverage[3325]);
        }
    }
    if ((0x10U == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q))) {
        ++(vlSymsp->__Vcoverage[3324]);
    }
    if (vlSelf->rv_core_top__DOT__de_branch) {
        ++(vlSymsp->__Vcoverage[3748]);
        if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__de_f3) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->rv_core_top__DOT__de_f3))) {
                ++(vlSymsp->__Vcoverage[3745]);
            }
            if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__de_f3) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->rv_core_top__DOT__de_f3))) {
                    ++(vlSymsp->__Vcoverage[3740]);
                }
                if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__de_f3)))) {
                    ++(vlSymsp->__Vcoverage[3739]);
                }
            }
        }
        if ((4U & (IData)(vlSelf->rv_core_top__DOT__de_f3))) {
            if ((2U & (IData)(vlSelf->rv_core_top__DOT__de_f3))) {
                if ((1U & (IData)(vlSelf->rv_core_top__DOT__de_f3))) {
                    ++(vlSymsp->__Vcoverage[3744]);
                }
                if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__de_f3)))) {
                    ++(vlSymsp->__Vcoverage[3743]);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->rv_core_top__DOT__de_f3) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->rv_core_top__DOT__de_f3)))) {
                    ++(vlSymsp->__Vcoverage[3741]);
                }
                if ((1U & (IData)(vlSelf->rv_core_top__DOT__de_f3))) {
                    ++(vlSymsp->__Vcoverage[3742]);
                }
            }
        }
    }
    if (((((((((0x300U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm))) 
               | (0x301U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) 
              | (0x304U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) 
             | (0x305U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) 
            | (0x340U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) 
           | (0x341U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) 
          | (0x342U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) 
         | (0x343U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm))))) {
        if ((0x300U != (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
            if ((0x301U != (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                if ((0x304U != (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                    if ((0x305U != (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                        if ((0x340U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                            ++(vlSymsp->__Vcoverage[4485]);
                        }
                        if ((0x340U != (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                            if ((0x341U == (0xfffU 
                                            & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                                ++(vlSymsp->__Vcoverage[4486]);
                            }
                            if ((0x341U != (0xfffU 
                                            & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                                if ((0x342U == (0xfffU 
                                                & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                                    ++(vlSymsp->__Vcoverage[4487]);
                                }
                                if ((0x342U != (0xfffU 
                                                & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                                    ++(vlSymsp->__Vcoverage[4488]);
                                }
                            }
                        }
                    }
                    if ((0x305U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                        ++(vlSymsp->__Vcoverage[4484]);
                    }
                }
                if ((0x304U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                    ++(vlSymsp->__Vcoverage[4483]);
                }
            }
            if ((0x301U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                ++(vlSymsp->__Vcoverage[4482]);
            }
        }
        if ((0x300U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
            ++(vlSymsp->__Vcoverage[4481]);
        }
    }
    if ((1U & (~ ((((((((0x300U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm))) 
                        | (0x301U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) 
                       | (0x304U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) 
                      | (0x305U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) 
                     | (0x340U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) 
                    | (0x341U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) 
                   | (0x342U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) 
                  | (0x343U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm))))))) {
        if ((0xf14U != (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
            if ((0xb00U != (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                if ((0xb02U != (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                    if ((0xc00U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                        ++(vlSymsp->__Vcoverage[4492]);
                    }
                    if ((0xc00U != (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                        if ((0xc02U != (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                            ++(vlSymsp->__Vcoverage[4494]);
                        }
                        if ((0xc02U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                            ++(vlSymsp->__Vcoverage[4493]);
                        }
                    }
                }
                if ((0xb02U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                    ++(vlSymsp->__Vcoverage[4491]);
                }
            }
            if ((0xb00U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
                ++(vlSymsp->__Vcoverage[4490]);
            }
        }
        if ((0xf14U == (0xfffU & (IData)(vlSelf->rv_core_top__DOT__de_imm)))) {
            ++(vlSymsp->__Vcoverage[4489]);
        }
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->rv_core_top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst_n) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->rv_core_top__DOT____Vtogcov__rst_n 
            = vlSelf->rst_n;
    }
    if (((IData)(vlSelf->irq_m_ext) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__irq_m_ext))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->rv_core_top__DOT____Vtogcov__irq_m_ext 
            = vlSelf->irq_m_ext;
    }
    if (((IData)(vlSelf->irq_m_timer) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__irq_m_timer))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->rv_core_top__DOT____Vtogcov__irq_m_timer 
            = vlSelf->irq_m_timer;
    }
    if (((IData)(vlSelf->irq_m_soft) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__irq_m_soft))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->rv_core_top__DOT____Vtogcov__irq_m_soft 
            = vlSelf->irq_m_soft;
    }
    if (((IData)(vlSelf->imem_arvalid) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_arvalid))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_arvalid 
            = vlSelf->imem_arvalid;
    }
    if (((IData)(vlSelf->imem_arready) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_arready))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_arready 
            = vlSelf->imem_arready;
    }
    if (((IData)(vlSelf->imem_rvalid) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_rvalid))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rvalid 
            = vlSelf->imem_rvalid;
    }
    if (((IData)(vlSelf->imem_rlast) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_rlast))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rlast 
            = vlSelf->imem_rlast;
    }
    if (((IData)(vlSelf->dmem_awvalid) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_awvalid))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awvalid 
            = vlSelf->dmem_awvalid;
    }
    if (((IData)(vlSelf->dmem_awready) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_awready))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awready 
            = vlSelf->dmem_awready;
    }
    if (((IData)(vlSelf->dmem_wvalid) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wvalid))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wvalid 
            = vlSelf->dmem_wvalid;
    }
    if (((IData)(vlSelf->dmem_wready) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wready))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wready 
            = vlSelf->dmem_wready;
    }
    if (((IData)(vlSelf->dmem_bvalid) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_bvalid))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_bvalid 
            = vlSelf->dmem_bvalid;
    }
    if (((IData)(vlSelf->dmem_bready) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_bready))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_bready 
            = vlSelf->dmem_bready;
    }
    if (((IData)(vlSelf->dmem_arvalid) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_arvalid))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_arvalid 
            = vlSelf->dmem_arvalid;
    }
    if (((IData)(vlSelf->dmem_arready) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_arready))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_arready 
            = vlSelf->dmem_arready;
    }
    if (((IData)(vlSelf->dmem_rvalid) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_rvalid))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rvalid 
            = vlSelf->dmem_rvalid;
    }
    if (((IData)(vlSelf->dmem_rready) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_rready))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rready 
            = vlSelf->dmem_rready;
    }
    if (((IData)(vlSelf->dmem_rlast) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_rlast))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rlast 
            = vlSelf->dmem_rlast;
    }
    if (((IData)(vlSelf->snoop_valid) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__snoop_valid))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_valid 
            = vlSelf->snoop_valid;
    }
    if (((IData)(vlSelf->halt_req) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__halt_req))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->rv_core_top__DOT____Vtogcov__halt_req 
            = vlSelf->halt_req;
    }
    if (((IData)(vlSelf->resume_req) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__resume_req))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->rv_core_top__DOT____Vtogcov__resume_req 
            = vlSelf->resume_req;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__branch_taken) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__branch_taken))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->rv_core_top__DOT____Vtogcov__branch_taken 
            = vlSelf->rv_core_top__DOT__branch_taken;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__fe_valid) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fe_valid))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->rv_core_top__DOT____Vtogcov__fe_valid 
            = vlSelf->rv_core_top__DOT__fe_valid;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__de_memr) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_memr))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_memr 
            = vlSelf->rv_core_top__DOT__de_memr;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__de_memw) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_memw))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_memw 
            = vlSelf->rv_core_top__DOT__de_memw;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__de_regw) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_regw))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_regw 
            = vlSelf->rv_core_top__DOT__de_regw;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__de_branch) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_branch))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_branch 
            = vlSelf->rv_core_top__DOT__de_branch;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__de_jal) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_jal))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_jal 
            = vlSelf->rv_core_top__DOT__de_jal;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__de_jalr) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_jalr))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_jalr 
            = vlSelf->rv_core_top__DOT__de_jalr;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__de_valid) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_valid))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_valid 
            = vlSelf->rv_core_top__DOT__de_valid;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__de_iscsr) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_iscsr))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_iscsr 
            = vlSelf->rv_core_top__DOT__de_iscsr;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__de_ecall) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_ecall))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_ecall 
            = vlSelf->rv_core_top__DOT__de_ecall;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__de_ebreak) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_ebreak))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_ebreak 
            = vlSelf->rv_core_top__DOT__de_ebreak;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__de_mret) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_mret))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_mret 
            = vlSelf->rv_core_top__DOT__de_mret;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__wb_we) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__wb_we))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->rv_core_top__DOT____Vtogcov__wb_we 
            = vlSelf->rv_core_top__DOT__wb_we;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__ex_memr) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_memr))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_memr 
            = vlSelf->rv_core_top__DOT__ex_memr;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__ex_memw) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_memw))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_memw 
            = vlSelf->rv_core_top__DOT__ex_memw;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__ex_regw) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_regw))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_regw 
            = vlSelf->rv_core_top__DOT__ex_regw;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__ex_valid) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_valid))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_valid 
            = vlSelf->rv_core_top__DOT__ex_valid;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__mem_regw) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__mem_regw))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelf->rv_core_top__DOT____Vtogcov__mem_regw 
            = vlSelf->rv_core_top__DOT__mem_regw;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__mem_valid) 
         ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__mem_valid))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelf->rv_core_top__DOT____Vtogcov__mem_valid 
            = vlSelf->rv_core_top__DOT__mem_valid;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT__pending_r) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pending_r))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pending_r 
            = vlSelf->rv_core_top__DOT__u_fetch__DOT__pending_r;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__is_amo_out) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_amo_out))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_amo_out 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__is_amo_out;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__lr_valid) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__lr_valid))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__lr_valid 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__lr_valid;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_rw_q) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rw_q))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rw_q 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__mx_rw_q;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_v_q) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_v_q))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_v_q 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__mx_v_q;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_fin) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_fin))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_fin 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__mx_fin;
    }
    if (((0x3bU == (IData)(vlSelf->rv_core_top__DOT__de_op)) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mxw))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mxw 
            = (0x3bU == (IData)(vlSelf->rv_core_top__DOT__de_op));
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_special) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_special))) {
        ++(vlSymsp->__Vcoverage[2517]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_special 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__d_special;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_last) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_last))) {
        ++(vlSymsp->__Vcoverage[2518]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_last 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__d_last;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_neg_q) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_neg_q))) {
        ++(vlSymsp->__Vcoverage[2519]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_neg_q 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__d_neg_q;
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_neg_r) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_neg_r))) {
        ++(vlSymsp->__Vcoverage[2520]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_neg_r 
            = vlSelf->rv_core_top__DOT__u_execute__DOT__d_neg_r;
    }
    if (((0x3bU == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q)) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mxw_q))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mxw_q 
            = (0x3bU == (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q));
    }
    if (((IData)(vlSelf->rv_core_top__DOT__u_mem__DOT__mem_active) 
         ^ (IData)(vlSelf->rv_core_top__DOT__u_mem__DOT____Vtogcov__mem_active))) {
        ++(vlSymsp->__Vcoverage[4581]);
        vlSelf->rv_core_top__DOT__u_mem__DOT____Vtogcov__mem_active 
            = vlSelf->rv_core_top__DOT__u_mem__DOT__mem_active;
    }
    vlSelf->rv_core_top__DOT__u_fetch__DOT__redirect 
        = vlSelf->rv_core_top__DOT__branch_taken;
    if ((1U & ((IData)(vlSelf->imem_rresp) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_rresp)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rresp 
            = ((2U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_rresp)) 
               | (1U & (IData)(vlSelf->imem_rresp)));
    }
    if ((2U & ((IData)(vlSelf->imem_rresp) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_rresp)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rresp 
            = ((1U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_rresp)) 
               | (2U & (IData)(vlSelf->imem_rresp)));
    }
    if ((1U & ((IData)(vlSelf->dmem_bresp) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_bresp)))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_bresp 
            = ((2U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_bresp)) 
               | (1U & (IData)(vlSelf->dmem_bresp)));
    }
    if ((2U & ((IData)(vlSelf->dmem_bresp) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_bresp)))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_bresp 
            = ((1U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_bresp)) 
               | (2U & (IData)(vlSelf->dmem_bresp)));
    }
    if ((1U & ((IData)(vlSelf->dmem_rresp) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_rresp)))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rresp 
            = ((2U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_rresp)) 
               | (1U & (IData)(vlSelf->dmem_rresp)));
    }
    if ((2U & ((IData)(vlSelf->dmem_rresp) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_rresp)))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rresp 
            = ((1U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_rresp)) 
               | (2U & (IData)(vlSelf->dmem_rresp)));
    }
    if ((1U & ((IData)(vlSelf->snoop_type) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__snoop_type)))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_type 
            = ((2U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__snoop_type)) 
               | (1U & (IData)(vlSelf->snoop_type)));
    }
    if ((2U & ((IData)(vlSelf->snoop_type) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__snoop_type)))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_type 
            = ((1U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__snoop_type)) 
               | (2U & (IData)(vlSelf->snoop_type)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__de_csrop) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_csrop)))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_csrop 
            = ((2U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_csrop)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__de_csrop)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__de_csrop) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_csrop)))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_csrop 
            = ((1U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_csrop)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__de_csrop)));
    }
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
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_state) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_state)))) {
        ++(vlSymsp->__Vcoverage[1966]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_state 
            = ((2U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_state)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_state)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_state) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_state)))) {
        ++(vlSymsp->__Vcoverage[1967]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_state 
            = ((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_state)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_state)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mtvec_q)))) {
        ++(vlSymsp->__Vcoverage[4157]);
        vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mtvec_q) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mtvec_q 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4158]);
        vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mepc_q)))) {
        ++(vlSymsp->__Vcoverage[4223]);
        vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mepc_q) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mepc_q 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4224]);
        vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_mem__DOT__mstate) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_mem__DOT____Vtogcov__mstate)))) {
        ++(vlSymsp->__Vcoverage[4515]);
        vlSelf->rv_core_top__DOT__u_mem__DOT____Vtogcov__mstate 
            = ((2U & (IData)(vlSelf->rv_core_top__DOT__u_mem__DOT____Vtogcov__mstate)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__u_mem__DOT__mstate)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__u_mem__DOT__mstate) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_mem__DOT____Vtogcov__mstate)))) {
        ++(vlSymsp->__Vcoverage[4516]);
        vlSelf->rv_core_top__DOT__u_mem__DOT____Vtogcov__mstate 
            = ((1U & (IData)(vlSelf->rv_core_top__DOT__u_mem__DOT____Vtogcov__mstate)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__u_mem__DOT__mstate)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__de_f3) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f3)))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_f3 
            = ((6U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f3)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__de_f3)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__de_f3) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f3)))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_f3 
            = ((5U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f3)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__de_f3)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__de_f3) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f3)))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_f3 
            = ((3U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f3)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__de_f3)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__ex_f3) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_f3)))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_f3 
            = ((6U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_f3)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__ex_f3)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__ex_f3) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_f3)))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_f3 
            = ((5U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_f3)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__ex_f3)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__ex_f3) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_f3)))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_f3 
            = ((3U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_f3)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__ex_f3)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_f3_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_f3_q)))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_f3_q 
            = ((6U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_f3_q)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_f3_q)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_f3_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_f3_q)))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_f3_q 
            = ((5U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_f3_q)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_f3_q)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_f3_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_f3_q)))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_f3_q 
            = ((3U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_f3_q)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_f3_q)));
    }
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
    vlSelf->hart_halted = vlSelf->halt_req;
    vlSelf->hart_running = (1U & (~ (IData)(vlSelf->halt_req)));
    vlSelf->rv_core_top__DOT__u_decode__DOT__zimm_form 
        = (IData)((0x4073U == (0x407fU & vlSelf->rv_core_top__DOT__fe_instr)));
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__de_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rd)))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rd 
            = ((0x1eU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rd)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__de_rd)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__de_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rd)))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rd 
            = ((0x1dU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rd)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__de_rd)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__de_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rd)))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rd 
            = ((0x1bU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rd)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__de_rd)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__de_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rd)))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rd 
            = ((0x17U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rd)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__de_rd)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__de_rd) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rd)))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rd 
            = ((0xfU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rd)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__de_rd)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__de_rs1a) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a)))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a 
            = ((0x1eU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__de_rs1a)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__de_rs1a) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a)))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a 
            = ((0x1dU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__de_rs1a)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__de_rs1a) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a)))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a 
            = ((0x1bU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__de_rs1a)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__de_rs1a) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a)))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a 
            = ((0x17U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__de_rs1a)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__de_rs1a) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a)))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a 
            = ((0xfU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__de_rs1a)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__de_rs2a) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a)))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a 
            = ((0x1eU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__de_rs2a)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__de_rs2a) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a)))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a 
            = ((0x1dU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__de_rs2a)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__de_rs2a) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a)))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a 
            = ((0x1bU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__de_rs2a)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__de_rs2a) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a)))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a 
            = ((0x17U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__de_rs2a)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__de_rs2a) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a)))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a 
            = ((0xfU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__de_rs2a)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_aluop)))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_aluop 
            = ((0x1eU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_aluop)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__de_aluop)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_aluop)))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_aluop 
            = ((0x1dU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_aluop)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__de_aluop)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_aluop)))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_aluop 
            = ((0x1bU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_aluop)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__de_aluop)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_aluop)))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_aluop 
            = ((0x17U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_aluop)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__de_aluop)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__de_aluop) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_aluop)))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_aluop 
            = ((0xfU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_aluop)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__de_aluop)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__wb_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__wb_rd)))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->rv_core_top__DOT____Vtogcov__wb_rd 
            = ((0x1eU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__wb_rd)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__wb_rd)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__wb_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__wb_rd)))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->rv_core_top__DOT____Vtogcov__wb_rd 
            = ((0x1dU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__wb_rd)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__wb_rd)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__wb_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__wb_rd)))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->rv_core_top__DOT____Vtogcov__wb_rd 
            = ((0x1bU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__wb_rd)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__wb_rd)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__wb_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__wb_rd)))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->rv_core_top__DOT____Vtogcov__wb_rd 
            = ((0x17U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__wb_rd)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__wb_rd)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__wb_rd) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__wb_rd)))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->rv_core_top__DOT____Vtogcov__wb_rd 
            = ((0xfU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__wb_rd)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__wb_rd)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__ex_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_rd)))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_rd 
            = ((0x1eU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_rd)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__ex_rd)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__ex_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_rd)))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_rd 
            = ((0x1dU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_rd)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__ex_rd)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__ex_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_rd)))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_rd 
            = ((0x1bU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_rd)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__ex_rd)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__ex_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_rd)))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_rd 
            = ((0x17U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_rd)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__ex_rd)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__ex_rd) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_rd)))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_rd 
            = ((0xfU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_rd)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__ex_rd)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__mem_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd)))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd 
            = ((0x1eU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__mem_rd)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__mem_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd)))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd 
            = ((0x1dU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__mem_rd)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__mem_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd)))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd 
            = ((0x1bU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__mem_rd)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__mem_rd) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd)))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd 
            = ((0x17U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__mem_rd)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__mem_rd) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd)))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd 
            = ((0xfU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__mem_rd)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__amo_funct5_out) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out)))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out 
            = ((0x1eU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__amo_funct5_out)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__amo_funct5_out) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out)))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out 
            = ((0x1dU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__amo_funct5_out)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__amo_funct5_out) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out)))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out 
            = ((0x1bU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__amo_funct5_out)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__amo_funct5_out) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out)))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out 
            = ((0x17U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__amo_funct5_out)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__amo_funct5_out) 
                  ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out)))) {
        ++(vlSymsp->__Vcoverage[1617]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out 
            = ((0xfU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__amo_funct5_out)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q)))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q 
            = ((0x1eU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q)))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q 
            = ((0x1dU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q)))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q 
            = ((0x1bU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q)))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q 
            = ((0x17U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q) 
                  ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q)))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q 
            = ((0xfU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_rd_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q)))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q 
            = ((0x1eU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_rd_q)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_rd_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q)))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q 
            = ((0x1dU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_rd_q)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_rd_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q)))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q 
            = ((0x1bU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_rd_q)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_rd_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q)))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q 
            = ((0x17U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_rd_q)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_rd_q) 
                  ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q)))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q 
            = ((0xfU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_rd_q)));
    }
    vlSelf->rv_core_top__DOT__u_fetch__DOT__ar_fire 
        = ((IData)(vlSelf->imem_arready) & (IData)(vlSelf->imem_arvalid));
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_cnt) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt)))) {
        ++(vlSymsp->__Vcoverage[2511]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt 
            = ((0x3eU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_cnt)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_cnt) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt)))) {
        ++(vlSymsp->__Vcoverage[2512]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt 
            = ((0x3dU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_cnt)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_cnt) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt)))) {
        ++(vlSymsp->__Vcoverage[2513]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt 
            = ((0x3bU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_cnt)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_cnt) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt)))) {
        ++(vlSymsp->__Vcoverage[2514]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt 
            = ((0x37U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_cnt) 
                  ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt)))) {
        ++(vlSymsp->__Vcoverage[2515]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt 
            = ((0x2fU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_cnt) 
                  ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt)))) {
        ++(vlSymsp->__Vcoverage[2516]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt 
            = ((0x1fU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt)) 
               | (0x20U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__d_cnt)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__de_f7) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f7)))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_f7 
            = ((0x7eU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f7)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__de_f7)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__de_f7) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f7)))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_f7 
            = ((0x7dU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f7)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__de_f7)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__de_f7) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f7)))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_f7 
            = ((0x7bU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f7)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__de_f7)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__de_f7) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f7)))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_f7 
            = ((0x77U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f7)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__de_f7)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__de_f7) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f7)))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_f7 
            = ((0x6fU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f7)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__de_f7)));
    }
    if ((0x20U & ((IData)(vlSelf->rv_core_top__DOT__de_f7) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f7)))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_f7 
            = ((0x5fU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f7)) 
               | (0x20U & (IData)(vlSelf->rv_core_top__DOT__de_f7)));
    }
    if ((0x40U & ((IData)(vlSelf->rv_core_top__DOT__de_f7) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f7)))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_f7 
            = ((0x3fU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_f7)) 
               | (0x40U & (IData)(vlSelf->rv_core_top__DOT__de_f7)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__de_op) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_op)))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_op 
            = ((0x7eU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_op)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__de_op)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__de_op) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_op)))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_op 
            = ((0x7dU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_op)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__de_op)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__de_op) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_op)))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_op 
            = ((0x7bU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_op)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__de_op)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__de_op) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_op)))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_op 
            = ((0x77U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_op)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__de_op)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__de_op) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_op)))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_op 
            = ((0x6fU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_op)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__de_op)));
    }
    if ((0x20U & ((IData)(vlSelf->rv_core_top__DOT__de_op) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_op)))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_op 
            = ((0x5fU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_op)) 
               | (0x20U & (IData)(vlSelf->rv_core_top__DOT__de_op)));
    }
    if ((0x40U & ((IData)(vlSelf->rv_core_top__DOT__de_op) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_op)))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_op 
            = ((0x3fU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_op)) 
               | (0x40U & (IData)(vlSelf->rv_core_top__DOT__de_op)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__ex_op) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_op)))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_op 
            = ((0x7eU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_op)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__ex_op)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__ex_op) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_op)))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_op 
            = ((0x7dU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_op)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__ex_op)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__ex_op) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_op)))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_op 
            = ((0x7bU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_op)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__ex_op)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__ex_op) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_op)))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_op 
            = ((0x77U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_op)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__ex_op)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__ex_op) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_op)))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_op 
            = ((0x6fU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_op)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__ex_op)));
    }
    if ((0x20U & ((IData)(vlSelf->rv_core_top__DOT__ex_op) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_op)))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_op 
            = ((0x5fU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_op)) 
               | (0x20U & (IData)(vlSelf->rv_core_top__DOT__ex_op)));
    }
    if ((0x40U & ((IData)(vlSelf->rv_core_top__DOT__ex_op) 
                  ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_op)))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelf->rv_core_top__DOT____Vtogcov__ex_op 
            = ((0x3fU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__ex_op)) 
               | (0x40U & (IData)(vlSelf->rv_core_top__DOT__ex_op)));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q)))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q 
            = ((0x7eU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q)) 
               | (1U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q)));
    }
    if ((2U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q)))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q 
            = ((0x7dU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q)) 
               | (2U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q)));
    }
    if ((4U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q)))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q 
            = ((0x7bU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q)) 
               | (4U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q)));
    }
    if ((8U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q) 
               ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q)))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q 
            = ((0x77U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q)) 
               | (8U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q)));
    }
    if ((0x10U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q) 
                  ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q)))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q 
            = ((0x6fU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q)) 
               | (0x10U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q)));
    }
    if ((0x20U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q) 
                  ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q)))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q 
            = ((0x5fU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q)) 
               | (0x20U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q)));
    }
    if ((0x40U & ((IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q) 
                  ^ (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q)))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q 
            = ((0x3fU & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q)) 
               | (0x40U & (IData)(vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q)));
    }
    if ((1U & ((IData)(vlSelf->dmem_wstrb) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb 
            = ((0xfeU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)) 
               | (1U & (IData)(vlSelf->dmem_wstrb)));
    }
    if ((2U & ((IData)(vlSelf->dmem_wstrb) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb 
            = ((0xfdU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)) 
               | (2U & (IData)(vlSelf->dmem_wstrb)));
    }
    if ((4U & ((IData)(vlSelf->dmem_wstrb) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb 
            = ((0xfbU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)) 
               | (4U & (IData)(vlSelf->dmem_wstrb)));
    }
    if ((8U & ((IData)(vlSelf->dmem_wstrb) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb 
            = ((0xf7U & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)) 
               | (8U & (IData)(vlSelf->dmem_wstrb)));
    }
    if ((0x10U & ((IData)(vlSelf->dmem_wstrb) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb 
            = ((0xefU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)) 
               | (0x10U & (IData)(vlSelf->dmem_wstrb)));
    }
    if ((0x20U & ((IData)(vlSelf->dmem_wstrb) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb 
            = ((0xdfU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)) 
               | (0x20U & (IData)(vlSelf->dmem_wstrb)));
    }
    if ((0x40U & ((IData)(vlSelf->dmem_wstrb) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb 
            = ((0xbfU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)) 
               | (0x40U & (IData)(vlSelf->dmem_wstrb)));
    }
    if ((0x80U & ((IData)(vlSelf->dmem_wstrb) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb 
            = ((0x7fU & (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb)) 
               | (0x80U & (IData)(vlSelf->dmem_wstrb)));
    }
    vlSelf->rv_core_top__DOT__u_decode__DOT__csrop_comb = 0U;
    vlSelf->rv_core_top__DOT__u_execute__DOT__signed_op 
        = ((0x10U == (IData)(vlSelf->rv_core_top__DOT__de_aluop)) 
           | (0x12U == (IData)(vlSelf->rv_core_top__DOT__de_aluop)));
    vlSelf->rv_core_top__DOT__u_execute__DOT__csr_rmw 
        = ((2U == (IData)(vlSelf->rv_core_top__DOT__de_csrop)) 
           | (3U == (IData)(vlSelf->rv_core_top__DOT__de_csrop)));
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
                        }
                    }
                }
            } else if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
                if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                        vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = 1U;
                    }
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
                    }
                }
            }
        } else if ((4U & vlSelf->rv_core_top__DOT__fe_instr)) {
            if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = 1U;
                    vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb = 0xbU;
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
            }
        }
    } else if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->rv_core_top__DOT__fe_instr 
                      >> 2U)))) {
            if ((2U & vlSelf->rv_core_top__DOT__fe_instr)) {
                if ((1U & vlSelf->rv_core_top__DOT__fe_instr)) {
                    vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = 1U;
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->dmem_awaddr) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr)))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffffffffeULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->dmem_awaddr)))));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 1U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffffffffdULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 2U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffffffffbULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 3U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffffffff7ULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 4U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffffffffefULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 5U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffffffffdfULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 6U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffffffffbfULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 7U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffffffff7fULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 8U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffffffeffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 9U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffffffdffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0xaU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffffffbffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0xbU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffffff7ffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0xcU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffffffefffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0xdU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffffffdfffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0xeU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffffffbfffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0xfU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffffff7fffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x10U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffffeffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x11U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffffdffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x12U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffffbffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x13U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffff7ffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x14U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffffefffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x15U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffffdfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x16U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffffbfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x17U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffff7fffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x18U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffeffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x19U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffdffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x1aU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfffbffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x1bU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfff7ffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x1cU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffefffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x1dU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffdfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x1eU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xffbfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x1fU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xff7fffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x20U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfeffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x21U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfdffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x22U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xfbffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x23U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xf7ffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x24U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xefffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x25U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xdfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->dmem_awaddr >> 0x26U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0xbfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((IData)(((vlSelf->dmem_awaddr ^ vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
                 >> 0x27U))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr 
            = ((0x7fffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_awaddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(vlSelf->dmem_araddr) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffffffffeULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->dmem_araddr)))));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 1U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffffffffdULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 2U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffffffffbULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 3U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffffffff7ULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 4U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffffffffefULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 5U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffffffffdfULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 6U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffffffffbfULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 7U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffffffff7fULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 8U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffffffeffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 9U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffffffdffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0xaU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffffffbffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0xbU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffffff7ffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0xcU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffffffefffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0xdU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffffffdfffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0xeU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffffffbfffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0xfU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffffff7fffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x10U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffffeffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x11U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffffdffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x12U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffffbffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x13U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffff7ffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x14U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffffefffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x15U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffffdfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x16U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffffbfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x17U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffff7fffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x18U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffeffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x19U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffdffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x1aU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfffbffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x1bU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfff7ffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x1cU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffefffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x1dU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffdfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x1eU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xffbfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x1fU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xff7fffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x20U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfeffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x21U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfdffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x22U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xfbffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x23U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xf7ffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x24U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xefffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x25U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xdfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->dmem_araddr >> 0x26U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0xbfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((IData)(((vlSelf->dmem_araddr ^ vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
                 >> 0x27U))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr 
            = ((0x7fffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_araddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(vlSelf->snoop_addr) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr)))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffffffffeULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | (IData)((IData)((1U & (IData)(vlSelf->snoop_addr)))));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 1U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffffffffdULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 2U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffffffffbULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 3U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffffffff7ULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 4U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffffffffefULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 5U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffffffffdfULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 6U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffffffffbfULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 7U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffffffff7fULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 8U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffffffeffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 9U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffffffdffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0xaU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffffffbffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0xbU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffffff7ffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0xcU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffffffefffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0xdU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffffffdfffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0xeU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffffffbfffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0xfU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffffff7fffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x10U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffffeffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x11U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffffdffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x12U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffffbffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x13U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffff7ffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x14U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffffefffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x15U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffffdfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x16U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffffbfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x17U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffff7fffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x18U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffeffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x19U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffdffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x1aU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfffbffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x1bU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfff7ffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x1cU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffefffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x1dU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffdfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x1eU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xffbfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x1fU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xff7fffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x20U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfeffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x21U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfdffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x22U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xfbffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x23U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xf7ffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x24U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xefffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x25U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xdfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->snoop_addr >> 0x26U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0xbfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((IData)(((vlSelf->snoop_addr ^ vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
                 >> 0x27U))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr 
            = ((0x7fffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->snoop_addr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3606]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3607]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3608]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3609]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3610]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3611]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3612]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3613]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3614]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3615]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3616]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3617]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3618]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3619]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3620]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3621]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3622]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3623]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3624]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3625]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3626]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3627]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3628]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3629]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3630]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3631]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3632]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3633]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3634]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3635]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3636]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3637]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3638]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3639]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3640]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3641]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3642]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3643]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3644]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3645]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3646]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3647]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3648]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3649]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3650]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3651]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3652]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3653]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3654]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3655]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3656]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3657]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3658]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3659]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3660]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3661]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3662]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3663]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3664]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3665]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3666]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[3667]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3668]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3669]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3670]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3671]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3672]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3673]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3674]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3675]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3676]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3677]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3678]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3679]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3680]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3681]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3682]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3683]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3684]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3685]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3686]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3687]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3688]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3689]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3690]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3691]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3692]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3693]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3694]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3695]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3696]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3697]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3698]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3699]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3700]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3701]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3702]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3703]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3704]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3705]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3706]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3707]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3708]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3709]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3710]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3711]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3712]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3713]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3714]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3715]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3716]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3717]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3718]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3719]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3720]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3721]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3722]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3723]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3724]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3725]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3726]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3727]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3728]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                  ^ vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[3729]);
        vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->imem_rdata) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->imem_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 1U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 2U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 3U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 4U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 5U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 6U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 7U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 8U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 9U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0xaU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0xbU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0xcU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0xdU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0xeU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0xfU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x10U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x11U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x12U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x13U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x14U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x15U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x16U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x17U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x18U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x19U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x1aU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x1bU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x1cU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x1dU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x1eU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x1fU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x20U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x21U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x22U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x23U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x24U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x25U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x26U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x27U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x28U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x29U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x2aU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x2bU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x2cU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x2dU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x2eU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x2fU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x30U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x31U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x32U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x33U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x34U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x35U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x36U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x37U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x38U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x39U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x3aU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x3bU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x3cU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x3dU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->imem_rdata >> 0x3eU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->imem_rdata ^ vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->imem_rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->dmem_wdata) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->dmem_wdata)))));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 1U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 2U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 3U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 4U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 5U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 6U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 7U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 8U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 9U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0xaU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0xbU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0xcU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0xdU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0xeU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0xfU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x10U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x11U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x12U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x13U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x14U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x15U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x16U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x17U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x18U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x19U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x1aU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x1bU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x1cU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x1dU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x1eU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x1fU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x20U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x21U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x22U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x23U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x24U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x25U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x26U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x27U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x28U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x29U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x2aU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x2bU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x2cU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x2dU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x2eU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x2fU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x30U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x31U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x32U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x33U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x34U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x35U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x36U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x37U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x38U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x39U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x3aU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x3bU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x3cU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x3dU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->dmem_wdata >> 0x3eU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->dmem_wdata ^ vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_wdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->dmem_rdata) ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata)))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->dmem_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 1U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 2U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 3U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 4U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 5U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 6U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 7U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 8U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 9U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0xaU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0xbU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0xcU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0xdU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0xeU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0xfU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x10U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x11U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x12U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x13U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x14U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x15U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x16U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x17U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x18U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x19U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x1aU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x1bU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x1cU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x1dU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x1eU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x1fU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x20U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x21U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x22U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x23U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x24U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x25U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x26U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x27U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x28U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x29U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x2aU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x2bU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x2cU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x2dU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x2eU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x2fU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x30U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x31U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x32U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x33U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x34U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x35U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x36U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x37U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x38U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x39U)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x3aU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x3bU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x3cU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x3dU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->dmem_rdata >> 0x3eU)) 
               ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->dmem_rdata ^ vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->dmem_rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
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
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__de_pc) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_pc)))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__de_pc)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__de_pc ^ vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_pc 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__de_rs1) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs1)))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__de_rs1)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs1 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__de_rs1 
                  ^ vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__de_rs2) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_rs2)))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__de_rs2)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x2bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffff7ffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x2cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffefffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x2dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffdfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x2eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffffbfffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x2fU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffff7fffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x30U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffeffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x31U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffdffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x32U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfffbffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x33U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfff7ffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x34U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffefffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x35U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffdfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x36U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xffbfffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x37U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xff7fffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x38U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfeffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x39U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfdffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x3aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xfbffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x3bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xf7ffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x3cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xefffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x3dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xdfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_rs2 
                        >> 0x3eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0xbfffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->rv_core_top__DOT__de_rs2 
                  ^ vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 
            = ((0x7fffffffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_rs2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_rs2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->rv_core_top__DOT__de_imm) 
               ^ (IData)(vlSelf->rv_core_top__DOT____Vtogcov__de_imm)))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffffffffeULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | (IData)((IData)((1U & (IData)(vlSelf->rv_core_top__DOT__de_imm)))));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 1U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffffffffdULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 2U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffffffffbULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 3U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffffffff7ULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 4U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffffffffefULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 5U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffffffffdfULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 6U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffffffffbfULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 7U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffffffff7fULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 8U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffffffeffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 9U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffffffdffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0xaU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffffffbffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0xbU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffffff7ffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0xcU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffffffefffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0xdU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffffffdfffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0xeU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffffffbfffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0xfU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffffff7fffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x10U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffffeffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x11U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffffdffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x12U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffffbffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x13U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffff7ffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x14U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffffefffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x15U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffffdfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x16U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffffbfffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x17U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffff7fffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x18U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffeffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x19U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffdffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x1aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffffbffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x1bU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffff7ffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x1cU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffefffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x1dU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffdfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x1eU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffffbfffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x1fU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffff7fffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x20U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffeffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x21U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffdffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x22U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffffbffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x23U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffff7ffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x24U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffefffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x25U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffdfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x26U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffffbfffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x27U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xffffff7fffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x28U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffeffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x29U)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffdffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->rv_core_top__DOT__de_imm 
                        >> 0x2aU)) ^ (IData)((vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->rv_core_top__DOT____Vtogcov__de_imm 
            = ((0xfffffbffffffffffULL & vlSelf->rv_core_top__DOT____Vtogcov__de_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->rv_core_top__DOT__de_imm 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
}
