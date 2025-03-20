// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdder.h for the primary calling header

#include "VAdder__pch.h"
#include "VAdder___024root.h"

VL_ATTR_COLD void VAdder___024root___eval_initial__TOP(VAdder___024root* vlSelf);
VlCoroutine VAdder___024root___eval_initial__TOP__Vtiming__0(VAdder___024root* vlSelf);

void VAdder___024root___eval_initial(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_initial\n"); );
    // Body
    VAdder___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VAdder___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine VAdder___024root___eval_initial__TOP__Vtiming__0(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->Adder_16_tb__DOT__x = 0x1111U;
    vlSelf->Adder_16_tb__DOT__y = 0x4444U;
    vlSelf->Adder_16_tb__DOT__cin = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "Adder_16_tb.sv", 
                                       18);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Current Sum: %b  Current Cout: %b\n",
              16,(((IData)(vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_4__sum) 
                   << 0xcU) | (((IData)(vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_3__sum) 
                                << 8U) | (((IData)(vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_2__sum) 
                                           << 4U) | (IData)(vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_1__sum)))),
              1,(IData)(vlSelf->Adder_16_tb__DOT__cout));
    vlSelf->Adder_16_tb__DOT__x = 0U;
    vlSelf->Adder_16_tb__DOT__y = 0U;
    vlSelf->Adder_16_tb__DOT__cin = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "Adder_16_tb.sv", 
                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Current Sum: %b  Current Cout: %b\n",
              16,(((IData)(vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_4__sum) 
                   << 0xcU) | (((IData)(vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_3__sum) 
                                << 8U) | (((IData)(vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_2__sum) 
                                           << 4U) | (IData)(vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_1__sum)))),
              1,(IData)(vlSelf->Adder_16_tb__DOT__cout));
    VL_FINISH_MT("Adder_16_tb.sv", 27, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void VAdder___024root___act_sequent__TOP__0(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_1__sum 
        = (0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                   + ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                      + (IData)(vlSelf->Adder_16_tb__DOT__cin))));
    vlSelf->__VdfgTmp_h5211c869__0 = (0x1fU & ((0xfU 
                                                & (IData)(vlSelf->Adder_16_tb__DOT__x)) 
                                               + ((0xfU 
                                                   & (IData)(vlSelf->Adder_16_tb__DOT__y)) 
                                                  + (IData)(vlSelf->Adder_16_tb__DOT__cin))));
    vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_2__sum 
        = (0xfU & (((IData)(vlSelf->Adder_16_tb__DOT__x) 
                    >> 4U) + (((IData)(vlSelf->Adder_16_tb__DOT__y) 
                               >> 4U) + (1U & ((IData)(vlSelf->__VdfgTmp_h5211c869__0) 
                                               >> 4U)))));
    vlSelf->__VdfgTmp_h9f433a7a__0 = (0x1fU & ((0xfU 
                                                & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                                   >> 4U)) 
                                               + ((0xfU 
                                                   & ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                                      >> 4U)) 
                                                  + 
                                                  VL_SHIFTR_III(5,5,32, (IData)(vlSelf->__VdfgTmp_h5211c869__0), 4U))));
    vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_3__sum 
        = (0xfU & (((IData)(vlSelf->Adder_16_tb__DOT__x) 
                    >> 8U) + (((IData)(vlSelf->Adder_16_tb__DOT__y) 
                               >> 8U) + (1U & ((IData)(vlSelf->__VdfgTmp_h9f433a7a__0) 
                                               >> 4U)))));
    vlSelf->__VdfgTmp_hf1099b48__0 = (0x1fU & ((0xfU 
                                                & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                                   >> 8U)) 
                                               + ((0xfU 
                                                   & ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                                      >> 8U)) 
                                                  + 
                                                  VL_SHIFTR_III(5,5,32, (IData)(vlSelf->__VdfgTmp_h9f433a7a__0), 4U))));
    vlSelf->Adder_16_tb__DOT__cout = (1U & (((0xfU 
                                              & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                                 >> 0xcU)) 
                                             + ((0xfU 
                                                 & ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                                    >> 0xcU)) 
                                                + VL_SHIFTR_III(5,5,32, (IData)(vlSelf->__VdfgTmp_hf1099b48__0), 4U))) 
                                            >> 4U));
    vlSelf->Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_4__sum 
        = (0xfU & (((IData)(vlSelf->Adder_16_tb__DOT__x) 
                    >> 0xcU) + (((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                 >> 0xcU) + (1U & ((IData)(vlSelf->__VdfgTmp_hf1099b48__0) 
                                                   >> 4U)))));
}

void VAdder___024root___eval_act(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VAdder___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VAdder___024root___eval_nba(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VAdder___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VAdder___024root___timing_resume(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VAdder___024root___eval_triggers__act(VAdder___024root* vlSelf);

bool VAdder___024root___eval_phase__act(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VAdder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VAdder___024root___timing_resume(vlSelf);
        VAdder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VAdder___024root___eval_phase__nba(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VAdder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdder___024root___dump_triggers__nba(VAdder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VAdder___024root___dump_triggers__act(VAdder___024root* vlSelf);
#endif  // VL_DEBUG

void VAdder___024root___eval(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VAdder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Adder_16_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VAdder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Adder_16_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VAdder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VAdder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VAdder___024root___eval_debug_assertions(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
