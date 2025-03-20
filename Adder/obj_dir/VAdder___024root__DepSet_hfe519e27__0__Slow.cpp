// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdder.h for the primary calling header

#include "VAdder__pch.h"
#include "VAdder___024root.h"

VL_ATTR_COLD void VAdder___024root___eval_static(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_static\n"); );
}

VL_ATTR_COLD void VAdder___024root___eval_final(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdder___024root___dump_triggers__stl(VAdder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VAdder___024root___eval_phase__stl(VAdder___024root* vlSelf);

VL_ATTR_COLD void VAdder___024root___eval_settle(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_settle\n"); );
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
            VAdder___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Adder_16_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VAdder___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdder___024root___dump_triggers__stl(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VAdder___024root___act_sequent__TOP__0(VAdder___024root* vlSelf);

VL_ATTR_COLD void VAdder___024root___eval_stl(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VAdder___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VAdder___024root___eval_triggers__stl(VAdder___024root* vlSelf);

VL_ATTR_COLD bool VAdder___024root___eval_phase__stl(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VAdder___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VAdder___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdder___024root___dump_triggers__act(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdder___024root___dump_triggers__nba(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VAdder___024root___ctor_var_reset(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Adder_16_tb__DOT__x = VL_RAND_RESET_I(16);
    vlSelf->Adder_16_tb__DOT__y = VL_RAND_RESET_I(16);
    vlSelf->Adder_16_tb__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->Adder_16_tb__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_1__sum = VL_RAND_RESET_I(4);
    vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_2__sum = VL_RAND_RESET_I(4);
    vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_3__sum = VL_RAND_RESET_I(4);
    vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_4__sum = VL_RAND_RESET_I(4);
    vlSelf->__VdfgTmp_hf1099b48__0 = 0;
    vlSelf->__VdfgTmp_h5211c869__0 = 0;
    vlSelf->__VdfgTmp_h9f433a7a__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
