// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vor_gate.h for the primary calling header

#ifndef VERILATED_VOR_GATE___024UNIT_H_
#define VERILATED_VOR_GATE___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vor_gate__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vor_gate___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vor_gate__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vor_gate___024unit(Vor_gate__Syms* symsp, const char* v__name);
    ~Vor_gate___024unit();
    VL_UNCOPYABLE(Vor_gate___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
