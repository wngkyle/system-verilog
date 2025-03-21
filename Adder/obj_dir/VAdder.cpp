// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAdder__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAdder::VAdder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VAdder__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VAdder::VAdder(const char* _vcname__)
    : VAdder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VAdder::~VAdder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VAdder___024root___eval_debug_assertions(VAdder___024root* vlSelf);
#endif  // VL_DEBUG
void VAdder___024root___eval_static(VAdder___024root* vlSelf);
void VAdder___024root___eval_initial(VAdder___024root* vlSelf);
void VAdder___024root___eval_settle(VAdder___024root* vlSelf);
void VAdder___024root___eval(VAdder___024root* vlSelf);

void VAdder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAdder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAdder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VAdder___024root___eval_static(&(vlSymsp->TOP));
        VAdder___024root___eval_initial(&(vlSymsp->TOP));
        VAdder___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VAdder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VAdder::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VAdder::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VAdder::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VAdder::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VAdder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VAdder___024root___eval_final(VAdder___024root* vlSelf);

VL_ATTR_COLD void VAdder::final() {
    VAdder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAdder::hierName() const { return vlSymsp->name(); }
const char* VAdder::modelName() const { return "VAdder"; }
unsigned VAdder::threads() const { return 1; }
void VAdder::prepareClone() const { contextp()->prepareClone(); }
void VAdder::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VAdder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VAdder___024root__trace_decl_types(VerilatedVcd* tracep);

void VAdder___024root__trace_init_top(VAdder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder___024root*>(voidSelf);
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VAdder___024root__trace_decl_types(tracep);
    VAdder___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VAdder___024root__trace_register(VAdder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAdder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VAdder::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAdder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
