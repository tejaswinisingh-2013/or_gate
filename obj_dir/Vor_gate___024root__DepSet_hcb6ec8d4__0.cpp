// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor_gate.h for the primary calling header

#include "Vor_gate__pch.h"
#include "Vor_gate__Syms.h"
#include "Vor_gate___024root.h"

VL_INLINE_OPT VlCoroutine Vor_gate___024root___eval_initial__TOP__Vtiming__0(Vor_gate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_gate___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    VL_WRITEF("a b | y\n");
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->or_gate_tb__DOT__a = 0U;
    vlSelf->or_gate_tb__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "or_gate_tb.v", 
                                       15);
    vlSelf->or_gate_tb__DOT__a = 0U;
    vlSelf->or_gate_tb__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "or_gate_tb.v", 
                                       16);
    vlSelf->or_gate_tb__DOT__a = 1U;
    vlSelf->or_gate_tb__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "or_gate_tb.v", 
                                       17);
    vlSelf->or_gate_tb__DOT__a = 1U;
    vlSelf->or_gate_tb__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "or_gate_tb.v", 
                                       18);
    VL_FINISH_MT("or_gate_tb.v", 20, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vor_gate___024root___dump_triggers__act(Vor_gate___024root* vlSelf);
#endif  // VL_DEBUG

void Vor_gate___024root___eval_triggers__act(Vor_gate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_gate___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vor_gate___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vor_gate___024root___act_sequent__TOP__0(Vor_gate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_gate___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("%0# %0# | %0#\n",1,vlSelf->or_gate_tb__DOT__a,
                  1,(IData)(vlSelf->or_gate_tb__DOT__b),
                  1,((IData)(vlSelf->or_gate_tb__DOT__a) 
                     | (IData)(vlSelf->or_gate_tb__DOT__b)));
    }
}
