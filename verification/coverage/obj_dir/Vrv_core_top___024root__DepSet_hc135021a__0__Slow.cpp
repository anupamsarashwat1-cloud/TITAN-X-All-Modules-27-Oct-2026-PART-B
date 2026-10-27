// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv_core_top.h for the primary calling header

#include "Vrv_core_top__pch.h"
#include "Vrv_core_top___024root.h"

VL_ATTR_COLD void Vrv_core_top___024root___eval_static(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vrv_core_top___024root___eval_initial__TOP(Vrv_core_top___024root* vlSelf);

VL_ATTR_COLD void Vrv_core_top___024root___eval_initial(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_initial\n"); );
    // Body
    Vrv_core_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vrv_core_top___024root___eval_final(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv_core_top___024root___dump_triggers__stl(Vrv_core_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrv_core_top___024root___eval_phase__stl(Vrv_core_top___024root* vlSelf);

VL_ATTR_COLD void Vrv_core_top___024root___eval_settle(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vrv_core_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("backend/rv_core_top/rv_core_top.v", 25, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vrv_core_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv_core_top___024root___dump_triggers__stl(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv_core_top___024root___stl_sequent__TOP__0(Vrv_core_top___024root* vlSelf);
VL_ATTR_COLD void Vrv_core_top___024root___stl_sequent__TOP__1(Vrv_core_top___024root* vlSelf);
VL_ATTR_COLD void Vrv_core_top___024root___stl_sequent__TOP__2(Vrv_core_top___024root* vlSelf);

VL_ATTR_COLD void Vrv_core_top___024root___eval_stl(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vrv_core_top___024root___stl_sequent__TOP__0(vlSelf);
        Vrv_core_top___024root___stl_sequent__TOP__1(vlSelf);
        Vrv_core_top___024root___stl_sequent__TOP__2(vlSelf);
    }
}

VL_ATTR_COLD void Vrv_core_top___024root___eval_triggers__stl(Vrv_core_top___024root* vlSelf);

VL_ATTR_COLD bool Vrv_core_top___024root___eval_phase__stl(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vrv_core_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vrv_core_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv_core_top___024root___dump_triggers__ico(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv_core_top___024root___dump_triggers__act(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv_core_top___024root___dump_triggers__nba(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv_core_top___024root___ctor_var_reset(Vrv_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_core_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->irq_m_ext = VL_RAND_RESET_I(1);
    vlSelf->irq_m_timer = VL_RAND_RESET_I(1);
    vlSelf->irq_m_soft = VL_RAND_RESET_I(1);
    vlSelf->imem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->imem_arready = VL_RAND_RESET_I(1);
    vlSelf->imem_araddr = VL_RAND_RESET_Q(40);
    vlSelf->imem_arlen = VL_RAND_RESET_I(8);
    vlSelf->imem_arsize = VL_RAND_RESET_I(3);
    vlSelf->imem_arburst = VL_RAND_RESET_I(2);
    vlSelf->imem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->imem_rready = VL_RAND_RESET_I(1);
    vlSelf->imem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->imem_rlast = VL_RAND_RESET_I(1);
    vlSelf->imem_rresp = VL_RAND_RESET_I(2);
    vlSelf->dmem_awvalid = VL_RAND_RESET_I(1);
    vlSelf->dmem_awready = VL_RAND_RESET_I(1);
    vlSelf->dmem_awaddr = VL_RAND_RESET_Q(40);
    vlSelf->dmem_awlen = VL_RAND_RESET_I(8);
    vlSelf->dmem_awsize = VL_RAND_RESET_I(3);
    vlSelf->dmem_awburst = VL_RAND_RESET_I(2);
    vlSelf->dmem_wvalid = VL_RAND_RESET_I(1);
    vlSelf->dmem_wready = VL_RAND_RESET_I(1);
    vlSelf->dmem_wdata = VL_RAND_RESET_Q(64);
    vlSelf->dmem_wstrb = VL_RAND_RESET_I(8);
    vlSelf->dmem_wlast = VL_RAND_RESET_I(1);
    vlSelf->dmem_bvalid = VL_RAND_RESET_I(1);
    vlSelf->dmem_bready = VL_RAND_RESET_I(1);
    vlSelf->dmem_bresp = VL_RAND_RESET_I(2);
    vlSelf->dmem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->dmem_arready = VL_RAND_RESET_I(1);
    vlSelf->dmem_araddr = VL_RAND_RESET_Q(40);
    vlSelf->dmem_arlen = VL_RAND_RESET_I(8);
    vlSelf->dmem_arsize = VL_RAND_RESET_I(3);
    vlSelf->dmem_arburst = VL_RAND_RESET_I(2);
    vlSelf->dmem_arlock = VL_RAND_RESET_I(1);
    vlSelf->dmem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->dmem_rready = VL_RAND_RESET_I(1);
    vlSelf->dmem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->dmem_rlast = VL_RAND_RESET_I(1);
    vlSelf->dmem_rresp = VL_RAND_RESET_I(2);
    vlSelf->snoop_valid = VL_RAND_RESET_I(1);
    vlSelf->snoop_addr = VL_RAND_RESET_Q(40);
    vlSelf->snoop_type = VL_RAND_RESET_I(2);
    vlSelf->snoop_ack = VL_RAND_RESET_I(1);
    vlSelf->snoop_data_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->snoop_data);
    vlSelf->halt_req = VL_RAND_RESET_I(1);
    vlSelf->resume_req = VL_RAND_RESET_I(1);
    vlSelf->hart_halted = VL_RAND_RESET_I(1);
    vlSelf->hart_running = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__branch_target = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__fe_pc = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__fe_imem_addr = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__fe_instr = VL_RAND_RESET_I(32);
    vlSelf->rv_core_top__DOT__fe_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__de_pc = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__de_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__de_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__de_imm = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__de_rd = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__de_rs1a = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__de_rs2a = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__de_f3 = VL_RAND_RESET_I(3);
    vlSelf->rv_core_top__DOT__de_f7 = VL_RAND_RESET_I(7);
    vlSelf->rv_core_top__DOT__de_op = VL_RAND_RESET_I(7);
    vlSelf->rv_core_top__DOT__de_aluop = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__de_memr = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__de_memw = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__de_regw = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__de_branch = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__de_jal = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__de_jalr = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__de_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__de_iscsr = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__de_csrop = VL_RAND_RESET_I(2);
    vlSelf->rv_core_top__DOT__de_ecall = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__de_ebreak = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__de_mret = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__wb_data = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__wb_rd = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__wb_we = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__ex_alures = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__ex_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__ex_rd = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__ex_f3 = VL_RAND_RESET_I(3);
    vlSelf->rv_core_top__DOT__ex_op = VL_RAND_RESET_I(7);
    vlSelf->rv_core_top__DOT__ex_memr = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__ex_memw = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__ex_regw = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__ex_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__mul_div_stall = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__stall_ex = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__fwd_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__mem_result = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__mem_rd = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__mem_regw = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__mem_stall = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__rst_n = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__irq_m_ext = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__irq_m_timer = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__irq_m_soft = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__imem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__imem_arready = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__imem_araddr = VL_RAND_RESET_Q(40);
    vlSelf->rv_core_top__DOT____Vtogcov__imem_arlen = VL_RAND_RESET_I(8);
    vlSelf->rv_core_top__DOT____Vtogcov__imem_arsize = VL_RAND_RESET_I(3);
    vlSelf->rv_core_top__DOT____Vtogcov__imem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__imem_rready = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__imem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT____Vtogcov__imem_rlast = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__imem_rresp = VL_RAND_RESET_I(2);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_awvalid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_awready = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_awaddr = VL_RAND_RESET_Q(40);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_wvalid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_wready = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_wdata = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_wstrb = VL_RAND_RESET_I(8);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_bvalid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_bready = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_bresp = VL_RAND_RESET_I(2);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_arready = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_araddr = VL_RAND_RESET_Q(40);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_rready = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_rlast = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__dmem_rresp = VL_RAND_RESET_I(2);
    vlSelf->rv_core_top__DOT____Vtogcov__snoop_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__snoop_addr = VL_RAND_RESET_Q(40);
    vlSelf->rv_core_top__DOT____Vtogcov__snoop_type = VL_RAND_RESET_I(2);
    vlSelf->rv_core_top__DOT____Vtogcov__halt_req = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__resume_req = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__hart_halted = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__hart_running = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__stall = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__branch_target = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT____Vtogcov__fe_pc = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT____Vtogcov__fe_imem_addr = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT____Vtogcov__fe_instr = VL_RAND_RESET_I(32);
    vlSelf->rv_core_top__DOT____Vtogcov__fe_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__de_pc = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT____Vtogcov__de_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT____Vtogcov__de_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT____Vtogcov__de_imm = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT____Vtogcov__de_rd = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT____Vtogcov__de_rs1a = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT____Vtogcov__de_rs2a = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT____Vtogcov__de_f3 = VL_RAND_RESET_I(3);
    vlSelf->rv_core_top__DOT____Vtogcov__de_f7 = VL_RAND_RESET_I(7);
    vlSelf->rv_core_top__DOT____Vtogcov__de_op = VL_RAND_RESET_I(7);
    vlSelf->rv_core_top__DOT____Vtogcov__de_aluop = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT____Vtogcov__de_memr = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__de_memw = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__de_regw = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__de_branch = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__de_jal = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__de_jalr = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__de_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__de_iscsr = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__de_csrop = VL_RAND_RESET_I(2);
    vlSelf->rv_core_top__DOT____Vtogcov__de_ecall = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__de_ebreak = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__de_mret = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__wb_data = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT____Vtogcov__wb_rd = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT____Vtogcov__wb_we = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__ex_alures = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT____Vtogcov__ex_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT____Vtogcov__ex_rd = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT____Vtogcov__ex_f3 = VL_RAND_RESET_I(3);
    vlSelf->rv_core_top__DOT____Vtogcov__ex_op = VL_RAND_RESET_I(7);
    vlSelf->rv_core_top__DOT____Vtogcov__ex_memr = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__ex_memw = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__ex_regw = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__ex_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__mul_div_stall = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__stall_ex = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_data = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_rd = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT____Vtogcov__fwd_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__mem_regw = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT____Vtogcov__mem_stall = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_fetch__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_fetch__DOT__fstate = VL_RAND_RESET_I(2);
    vlSelf->rv_core_top__DOT__u_fetch__DOT__pending_r = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_fetch__DOT__redirect = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_fetch__DOT__ar_fire = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_fetch__DOT__r_fire = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pc = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__fstate = VL_RAND_RESET_I(2);
    vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__pending_r = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__ar_fire = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_fetch__DOT____Vtogcov__r_fire = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT__imm_comb = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_decode__DOT__alu_op_comb = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__u_decode__DOT__mem_r_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT__mem_w_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT__reg_w_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT__br_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT__jal_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT__jalr_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT__csr_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT__ec_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT__eb_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT__mret_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT__csrop_comb = VL_RAND_RESET_I(2);
    vlSelf->rv_core_top__DOT__u_decode__DOT__zimm_form = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_decode__DOT__rf_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__imm_comb = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__alu_op_comb = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__mem_r_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__mem_w_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__reg_w_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__br_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__jal_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__jalr_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__csr_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__ec_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__eb_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__mret_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__csrop_comb = VL_RAND_RESET_I(2);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__zimm_form = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_decode__DOT____Vtogcov__rf_rs2_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rv_core_top__DOT__u_decode__DOT__u_rf__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->rv_core_top__DOT__u_execute__DOT__is_amo_out = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__amo_funct5_out = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__u_execute__DOT__lr_addr = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__lr_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__fwd_ex_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__src2_reg = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__use_imm = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__is_wop = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__is_mul = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__is_div = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__is_mext = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_state = VL_RAND_RESET_I(2);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_a = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_b = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_opcode_q = VL_RAND_RESET_I(7);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_aluop_q = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_rd_q = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_f3_q = VL_RAND_RESET_I(3);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_rw_q = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_v_q = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_fin = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_raw_start = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_ready = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mx_done = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__eff_a = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__eff_b = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__signed_op = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__d_rem = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__d_quot = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__d_x = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__d_y = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__d_cnt = VL_RAND_RESET_I(6);
    vlSelf->rv_core_top__DOT__u_execute__DOT__d_special = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__d_last = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__d_neg_q = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__d_neg_r = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__d_result_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__d_next_rem = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__d_sub = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->rv_core_top__DOT__u_execute__DOT__prod_ss);
    VL_RAND_RESET_W(128, vlSelf->rv_core_top__DOT__u_execute__DOT__prod_su);
    VL_RAND_RESET_W(128, vlSelf->rv_core_top__DOT__u_execute__DOT__prod_uu);
    vlSelf->rv_core_top__DOT__u_execute__DOT__quot_raw = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__rem_raw = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mext_final = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__sys_present = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__ex_exit = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__mret_commit = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__trap_commit = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__csr_rmw = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__csr_impl = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__csr_illegal = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__csr_we_w = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__csr_wd = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_ext = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_soft = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__irq_sel_timer = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__trap_cause_w = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__csr_old = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__trap_req_c = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__irq_take = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__branch_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__branch_tgt = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__is_fp_op = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__final_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_amo_out = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__amo_funct5_out = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__lr_addr = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__lr_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__fwd_ex_valid = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src1 = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2_reg = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__use_imm = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__src2 = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_wop = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__shamt = VL_RAND_RESET_I(6);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_comb = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_mul = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_div = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_mext = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_state = VL_RAND_RESET_I(2);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_a = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_b = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_opcode_q = VL_RAND_RESET_I(7);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_aluop_q = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rd_q = VL_RAND_RESET_I(5);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_f3_q = VL_RAND_RESET_I(3);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_rw_q = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_v_q = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_fin = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_raw_start = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_ready = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mx_done = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mxw = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_a = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__eff_b = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__signed_op = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__b_zero = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__b_m1 = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__ovf = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_rem = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_quot = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_x = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_y = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_cnt = VL_RAND_RESET_I(6);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_special = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_last = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_neg_q = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_neg_r = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_result_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_next_rem = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__d_sub = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_ss);
    VL_RAND_RESET_W(128, vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_su);
    VL_RAND_RESET_W(128, vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__prod_uu);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mul_r = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__quot_raw = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__rem_raw = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__div_r = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mxw_q = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mext_final = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__sys_present = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__sys_illegal = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__ex_exit = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_commit = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mret_commit = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_commit = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_rmw = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_impl = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_illegal = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_we_w = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_wd = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_sel_ext = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_sel_soft = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_sel_timer = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_cause_w = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__csr_old = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mtvec_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__mepc_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_pend = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__trap_req_c = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__irq_take = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_comb = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__branch_tgt = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__is_fp_op = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__alu_res_w = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____Vtogcov__final_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgExtracted_h0abe2d2d__0 = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_h84d002a0__0 = 0;
    vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_hade43b39__0 = 0;
    vlSelf->rv_core_top__DOT__u_execute__DOT____VdfgTmp_heb811627__0 = 0;
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mstatus_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__misa_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mie_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtvec_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mscratch_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mepc_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mcause_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mtval_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__mcycle_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__minstret_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT__irq_any = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mstatus_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__misa_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mie_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mtvec_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mscratch_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mepc_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mcause_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mtval_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__mcycle_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__minstret_q = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_execute__DOT__u_csr__DOT____Vtogcov__irq_any = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_mem__DOT__mstate = VL_RAND_RESET_I(2);
    vlSelf->rv_core_top__DOT__u_mem__DOT__load_data = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_mem__DOT__mem_active = VL_RAND_RESET_I(1);
    vlSelf->rv_core_top__DOT__u_mem__DOT____Vtogcov__mstate = VL_RAND_RESET_I(2);
    vlSelf->rv_core_top__DOT__u_mem__DOT____Vtogcov__load_data = VL_RAND_RESET_Q(64);
    vlSelf->rv_core_top__DOT__u_mem__DOT____Vtogcov__mem_active = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rv_core_top__DOT__u_fetch__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__imem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rv_core_top__DOT__u_fetch__DOT__fstate = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__rv_core_top__DOT__u_fetch__DOT__pending_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rv_core_top__DOT__de_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rv_core_top__DOT__u_execute__DOT__mx_fin = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rv_core_top__DOT__u_execute__DOT__mx_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__rv_core_top__DOT__u_execute__DOT__d_special = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rv_core_top__DOT__u_execute__DOT__d_last = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rv_core_top__DOT__u_execute__DOT__d_cnt = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__rv_core_top__DOT__u_execute__DOT__d_x = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__rv_core_top__DOT__u_execute__DOT__d_y = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__rv_core_top__DOT__u_execute__DOT__d_quot = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
