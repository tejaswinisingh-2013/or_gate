// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vor_gate.h for the primary calling header

#ifndef VERILATED_VOR_GATE___024ROOT_H_
#define VERILATED_VOR_GATE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vor_gate___024unit;


class Vor_gate__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vor_gate___024root final : public VerilatedModule {
  public:
    // CELLS
    Vor_gate___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ or_gate_tb__DOT__a;
    CData/*0:0*/ or_gate_tb__DOT__b;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vor_gate__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vor_gate___024root(Vor_gate__Syms* symsp, const char* v__name);
    ~Vor_gate___024root();
    VL_UNCOPYABLE(Vor_gate___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
