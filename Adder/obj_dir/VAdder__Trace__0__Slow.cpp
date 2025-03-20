// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdder__Syms.h"


VL_ATTR_COLD void VAdder___024root__trace_init_sub__TOP__0(VAdder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("Adder_16_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+3,0,"cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+3,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+14,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"cout1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"cout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"cout3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+15,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("adder_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+15,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+16,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("adder_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+16,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("adder_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VAdder___024root__trace_init_top(VAdder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root__trace_init_top\n"); );
    // Body
    VAdder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAdder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VAdder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAdder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAdder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAdder___024root__trace_register(VAdder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VAdder___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VAdder___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VAdder___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VAdder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAdder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root__trace_const_0\n"); );
    // Init
    VAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder___024root*>(voidSelf);
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VAdder___024root__trace_full_0_sub_0(VAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VAdder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root__trace_full_0\n"); );
    // Init
    VAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder___024root*>(voidSelf);
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAdder___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VAdder___024root__trace_full_0_sub_0(VAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->Adder_16_tb__DOT__x),16);
    bufp->fullSData(oldp+2,(vlSelf->Adder_16_tb__DOT__y),16);
    bufp->fullBit(oldp+3,(vlSelf->Adder_16_tb__DOT__cin));
    bufp->fullCData(oldp+4,((0xfU & (IData)(vlSelf->Adder_16_tb__DOT__x))),4);
    bufp->fullCData(oldp+5,((0xfU & (IData)(vlSelf->Adder_16_tb__DOT__y))),4);
    bufp->fullCData(oldp+6,((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                     + ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                        + (IData)(vlSelf->Adder_16_tb__DOT__cin))))),4);
    bufp->fullCData(oldp+7,((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                     >> 4U))),4);
    bufp->fullCData(oldp+8,((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                     >> 4U))),4);
    bufp->fullCData(oldp+9,((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                     >> 8U))),4);
    bufp->fullCData(oldp+10,((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                      >> 8U))),4);
    bufp->fullCData(oldp+11,((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                      >> 0xcU))),4);
    bufp->fullCData(oldp+12,((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                      >> 0xcU))),4);
    bufp->fullSData(oldp+13,(((0xf000U & ((((IData)(vlSelf->Adder_16_tb__DOT__x) 
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
    bufp->fullBit(oldp+14,((1U & (((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                            >> 0xcU)) 
                                   + ((0xfU & ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                               >> 0xcU)) 
                                      + VL_SHIFTR_III(5,5,32, (IData)(vlSelf->__VdfgTmp_hf1099b48__0), 4U))) 
                                  >> 4U))));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->__VdfgTmp_h5211c869__0) 
                                  >> 4U))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->__VdfgTmp_h9f433a7a__0) 
                                  >> 4U))));
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->__VdfgTmp_hf1099b48__0) 
                                  >> 4U))));
    bufp->fullCData(oldp+18,((0xfU & (((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                       >> 4U) + (((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                                  >> 4U) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelf->__VdfgTmp_h5211c869__0) 
                                                     >> 4U)))))),4);
    bufp->fullCData(oldp+19,((0xfU & (((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                       >> 8U) + (((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                                  >> 8U) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelf->__VdfgTmp_h9f433a7a__0) 
                                                     >> 4U)))))),4);
    bufp->fullCData(oldp+20,((0xfU & (((IData)(vlSelf->Adder_16_tb__DOT__x) 
                                       >> 0xcU) + (
                                                   ((IData)(vlSelf->Adder_16_tb__DOT__y) 
                                                    >> 0xcU) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelf->__VdfgTmp_hf1099b48__0) 
                                                       >> 4U)))))),4);
}
