// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdder.h for the primary calling header

#include "VAdder__pch.h"
#include "VAdder__Syms.h"
#include "VAdder___024root.h"

void VAdder___024root___ctor_var_reset(VAdder___024root* vlSelf);

VAdder___024root::VAdder___024root(VAdder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VAdder___024root___ctor_var_reset(this);
}

void VAdder___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VAdder___024root::~VAdder___024root() {
}
