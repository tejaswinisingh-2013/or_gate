// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor_gate.h for the primary calling header

#include "Vor_gate__pch.h"
#include "Vor_gate__Syms.h"
#include "Vor_gate___024unit.h"

void Vor_gate___024unit___ctor_var_reset(Vor_gate___024unit* vlSelf);

Vor_gate___024unit::Vor_gate___024unit(Vor_gate__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vor_gate___024unit___ctor_var_reset(this);
}

void Vor_gate___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vor_gate___024unit::~Vor_gate___024unit() {
}
