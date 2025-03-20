// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdder__Syms.h"


void VAdder___024root__trace_chg_0_sub_0(VAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VAdder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root__trace_chg_0\n"); );
    // Init
    VAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder___024root*>(voidSelf);
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VAdder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VAdder___024root__trace_chg_0_sub_0(VAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgSData(oldp+0,(vlSelf->Adder_16_tb__DOT__x),16);
        bufp->chgSData(oldp+1,(vlSelf->Adder_16_tb__DOT__y),16);
        bufp->chgBit(oldp+2,(vlSelf->Adder_16_tb__DOT__cin));
        bufp->chgCData(oldp+3,((0xfU & (IData)(vlSelf->Adder_16_tb__DOT__x))),4);
        bufp->chgCData(oldp+4,((0xfU & (IData)(vlSelf->Adder_16_tb__DOT__y))),4);
        bufp->chgCData(oldp+5,((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                        + ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                           + (IData)(vlSelf->Adder_16_tb__DOT__cin))))),4);
        bufp->chgCData(oldp+6,((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                        >> 4U))),4);
        bufp->chgCData(oldp+7,((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                        >> 4U))),4);
        bufp->chgCData(oldp+8,((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                        >> 8U))),4);
        bufp->chgCData(oldp+9,((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                        >> 8U))),4);
        bufp->chgCData(oldp+10,((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+11,((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                         >> 0xcU))),4);
    }
    bufp->chgSData(oldp+12,(((0xf000U & ((((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                           >> 0xcU) 
                                          + (((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                              >> 0xcU) 
                                             + (1U 
                                                & ((IData)(vlSelf->__VdfgTmp_hf1099b48__0) 
                                                   >> 4U)))) 
                                         << 0xcU)) 
                             | ((0xf00U & ((((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                             >> 8U) 
                                            + (((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                                >> 8U) 
                                               + (1U 
                                                  & ((IData)(vlSelf->__VdfgTmp_h9f433a7a__0) 
                                                     >> 4U)))) 
                                           << 8U)) 
                                | ((0xf0U & ((((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                               >> 4U) 
                                              + (((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                                  >> 4U) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelf->__VdfgTmp_h5211c869__0) 
                                                     >> 4U)))) 
                                             << 4U)) 
                                   | (0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                              + ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                                 + (IData)(vlSelf->Adder_16_tb__DOT__cin)))))))),16);
    bufp->chgBit(oldp+13,((1U & (((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                           >> 0xcU)) 
                                  + ((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                              >> 0xcU)) 
                                     + VL_SHIFTR_III(5,5,32, (IData)(vlSelf->__VdfgTmp_hf1099b48__0), 4U))) 
                                 >> 4U))));
    bufp->chgBit(oldp+14,((1U & ((IData)(vlSelf->__VdfgTmp_h5211c869__0) 
                                 >> 4U))));
    bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->__VdfgTmp_h9f433a7a__0) 
                                 >> 4U))));
    bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->__VdfgTmp_hf1099b48__0) 
                                 >> 4U))));
    bufp->chgCData(oldp+17,((0xfU & (((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                      >> 4U) + (((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                                 >> 4U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->__VdfgTmp_h5211c869__0) 
                                                      >> 4U)))))),4);
    bufp->chgCData(oldp+18,((0xfU & (((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                      >> 8U) + (((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                                 >> 8U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->__VdfgTmp_h9f433a7a__0) 
                                                      >> 4U)))))),4);
    bufp->chgCData(oldp+19,((0xfU & (((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                      >> 0xcU) + (((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                                   >> 0xcU) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__VdfgTmp_hf1099b48__0) 
                                                      >> 4U)))))),4);
}

void VAdder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root__trace_cleanup\n"); );
    // Init
    VAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder___024root*>(voidSelf);
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
