// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrv_core_top__pch.h"

//============================================================
// Constructors

Vrv_core_top::Vrv_core_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrv_core_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , irq_m_ext{vlSymsp->TOP.irq_m_ext}
    , irq_m_timer{vlSymsp->TOP.irq_m_timer}
    , irq_m_soft{vlSymsp->TOP.irq_m_soft}
    , imem_arvalid{vlSymsp->TOP.imem_arvalid}
    , imem_arready{vlSymsp->TOP.imem_arready}
    , imem_arlen{vlSymsp->TOP.imem_arlen}
    , imem_arsize{vlSymsp->TOP.imem_arsize}
    , imem_arburst{vlSymsp->TOP.imem_arburst}
    , imem_rvalid{vlSymsp->TOP.imem_rvalid}
    , imem_rready{vlSymsp->TOP.imem_rready}
    , imem_rlast{vlSymsp->TOP.imem_rlast}
    , imem_rresp{vlSymsp->TOP.imem_rresp}
    , dmem_awvalid{vlSymsp->TOP.dmem_awvalid}
    , dmem_awready{vlSymsp->TOP.dmem_awready}
    , dmem_awlen{vlSymsp->TOP.dmem_awlen}
    , dmem_awsize{vlSymsp->TOP.dmem_awsize}
    , dmem_awburst{vlSymsp->TOP.dmem_awburst}
    , dmem_wvalid{vlSymsp->TOP.dmem_wvalid}
    , dmem_wready{vlSymsp->TOP.dmem_wready}
    , dmem_wstrb{vlSymsp->TOP.dmem_wstrb}
    , dmem_wlast{vlSymsp->TOP.dmem_wlast}
    , dmem_bvalid{vlSymsp->TOP.dmem_bvalid}
    , dmem_bready{vlSymsp->TOP.dmem_bready}
    , dmem_bresp{vlSymsp->TOP.dmem_bresp}
    , dmem_arvalid{vlSymsp->TOP.dmem_arvalid}
    , dmem_arready{vlSymsp->TOP.dmem_arready}
    , dmem_arlen{vlSymsp->TOP.dmem_arlen}
    , dmem_arsize{vlSymsp->TOP.dmem_arsize}
    , dmem_arburst{vlSymsp->TOP.dmem_arburst}
    , dmem_arlock{vlSymsp->TOP.dmem_arlock}
    , dmem_rvalid{vlSymsp->TOP.dmem_rvalid}
    , dmem_rready{vlSymsp->TOP.dmem_rready}
    , dmem_rlast{vlSymsp->TOP.dmem_rlast}
    , dmem_rresp{vlSymsp->TOP.dmem_rresp}
    , snoop_valid{vlSymsp->TOP.snoop_valid}
    , snoop_type{vlSymsp->TOP.snoop_type}
    , snoop_ack{vlSymsp->TOP.snoop_ack}
    , snoop_data_valid{vlSymsp->TOP.snoop_data_valid}
    , halt_req{vlSymsp->TOP.halt_req}
    , resume_req{vlSymsp->TOP.resume_req}
    , hart_halted{vlSymsp->TOP.hart_halted}
    , hart_running{vlSymsp->TOP.hart_running}
    , snoop_data{vlSymsp->TOP.snoop_data}
    , imem_araddr{vlSymsp->TOP.imem_araddr}
    , imem_rdata{vlSymsp->TOP.imem_rdata}
    , dmem_awaddr{vlSymsp->TOP.dmem_awaddr}
    , dmem_wdata{vlSymsp->TOP.dmem_wdata}
    , dmem_araddr{vlSymsp->TOP.dmem_araddr}
    , dmem_rdata{vlSymsp->TOP.dmem_rdata}
    , snoop_addr{vlSymsp->TOP.snoop_addr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrv_core_top::Vrv_core_top(const char* _vcname__)
    : Vrv_core_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrv_core_top::~Vrv_core_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrv_core_top___024root___eval_debug_assertions(Vrv_core_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vrv_core_top___024root___eval_static(Vrv_core_top___024root* vlSelf);
void Vrv_core_top___024root___eval_initial(Vrv_core_top___024root* vlSelf);
void Vrv_core_top___024root___eval_settle(Vrv_core_top___024root* vlSelf);
void Vrv_core_top___024root___eval(Vrv_core_top___024root* vlSelf);

void Vrv_core_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrv_core_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrv_core_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrv_core_top___024root___eval_static(&(vlSymsp->TOP));
        Vrv_core_top___024root___eval_initial(&(vlSymsp->TOP));
        Vrv_core_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrv_core_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrv_core_top::eventsPending() { return false; }

uint64_t Vrv_core_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrv_core_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrv_core_top___024root___eval_final(Vrv_core_top___024root* vlSelf);

VL_ATTR_COLD void Vrv_core_top::final() {
    Vrv_core_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrv_core_top::hierName() const { return vlSymsp->name(); }
const char* Vrv_core_top::modelName() const { return "Vrv_core_top"; }
unsigned Vrv_core_top::threads() const { return 1; }
void Vrv_core_top::prepareClone() const { contextp()->prepareClone(); }
void Vrv_core_top::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vrv_core_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrv_core_top::trace()' called on model that was Verilated without --trace option");
}
