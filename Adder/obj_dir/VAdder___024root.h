// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAdder.h for the primary calling header

#ifndef VERILATED_VADDER___024ROOT_H_
#define VERILATED_VADDER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VAdder__Syms;

class alignas(VL_CACHE_LINE_BYTES) VAdder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ Adder_16_tb__DOT__cin;
    CData/*0:0*/ Adder_16_tb__DOT__cout;
    CData/*3:0*/ Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_1__sum;
    CData/*3:0*/ Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_2__sum;
    CData/*3:0*/ Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_3__sum;
    CData/*3:0*/ Adder_16_tb__DOT__DUT__DOT____Vcellout__adder_4__sum;
    CData/*4:0*/ __VdfgTmp_hf1099b48__0;
    CData/*4:0*/ __VdfgTmp_h5211c869__0;
    CData/*4:0*/ __VdfgTmp_h9f433a7a__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ Adder_16_tb__DOT__x;
    SData/*15:0*/ Adder_16_tb__DOT__y;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VAdder__Syms* const vlSymsp;

    // CONSTRUCTORS
    VAdder___024root(VAdder__Syms* symsp, const char* v__name);
    ~VAdder___024root();
    VL_UNCOPYABLE(VAdder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
