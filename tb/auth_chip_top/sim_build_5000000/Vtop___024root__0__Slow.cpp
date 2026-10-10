// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__clk__0 
        = vlSelfRef.auth_chip_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__rst_n__0 
        = vlSelfRef.auth_chip_top__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__clk__0 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__rst_n__0 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__clk__0 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n__0 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__clk__0 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__rst_n__0 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_store__DOT__clk__0 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_store__DOT__rst_n__0 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_protocol__DOT__clk__0 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_protocol__DOT__rst_n__0 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_uart__DOT__clk__0 
        = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_uart__DOT__rst_n__0 
        = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rst_n;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__len_inner = 0x00000000000002e0ULL;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ena = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_stl(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge auth_chip_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge auth_chip_top.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge auth_chip_top.u_hmac.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge auth_chip_top.u_hmac.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge auth_chip_top.u_hmac.u_sha256.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(negedge auth_chip_top.u_hmac.u_sha256.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge auth_chip_top.u_hmac.u_sha256.u_tt07.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(negedge auth_chip_top.u_hmac.u_sha256.u_tt07.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge auth_chip_top.u_store.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(negedge auth_chip_top.u_store.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(posedge auth_chip_top.u_protocol.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(negedge auth_chip_top.u_protocol.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @(posedge auth_chip_top.u_uart.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @(negedge auth_chip_top.u_uart.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2399467654730215438ull);
    vlSelf->tamper_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8239877440065014369ull);
    vlSelf->uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1761512799854230840ull);
    vlSelf->busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6386567572483775230ull);
    vlSelf->locked = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15600921276423554462ull);
    vlSelf->alarm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1582462501373564908ull);
    vlSelf->auth_chip_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16226916005949760468ull);
    vlSelf->auth_chip_top__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12873555747230990464ull);
    vlSelf->auth_chip_top__DOT__uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11651245303409309370ull);
    vlSelf->auth_chip_top__DOT__tamper_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3451077540783427169ull);
    vlSelf->auth_chip_top__DOT__uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1401788975926299900ull);
    vlSelf->auth_chip_top__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7246006524876197356ull);
    vlSelf->auth_chip_top__DOT__locked = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18300500526863035203ull);
    vlSelf->auth_chip_top__DOT__alarm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3661750127038227294ull);
    vlSelf->auth_chip_top__DOT__rst_ff = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5069923454759439512ull);
    vlSelf->auth_chip_top__DOT__rst_n_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7206698622054754794ull);
    vlSelf->auth_chip_top__DOT__rx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3507850516239795038ull);
    vlSelf->auth_chip_top__DOT__tx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4681681687217331668ull);
    vlSelf->auth_chip_top__DOT__rx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10145348436023316527ull);
    vlSelf->auth_chip_top__DOT__tx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17051576368249647640ull);
    vlSelf->auth_chip_top__DOT__tx_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11602104616360674486ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__wr_data, __VscopeHash, 17720658750402450184ull);
    vlSelf->auth_chip_top__DOT__key_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15391842010633358479ull);
    vlSelf->auth_chip_top__DOT__uid_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9986153251290963638ull);
    vlSelf->auth_chip_top__DOT__lock_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13527774238943787124ull);
    vlSelf->auth_chip_top__DOT__ctr_incr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3196481301572978431ull);
    vlSelf->auth_chip_top__DOT__uid = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17509321500861164505ull);
    vlSelf->auth_chip_top__DOT__ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2747914993196129384ull);
    vlSelf->auth_chip_top__DOT__tamper = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2371015161287924726ull);
    vlSelf->auth_chip_top__DOT__ctr_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8554351411873774187ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__key, __VscopeHash, 17796951345744540317ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->auth_chip_top__DOT__nonce, __VscopeHash, 14334792904385032251ull);
    vlSelf->auth_chip_top__DOT__auth_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16171161068613526693ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__tag, __VscopeHash, 3060969416697324902ull);
    vlSelf->auth_chip_top__DOT__tag_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8985573144664861805ull);
    VL_SCOPED_RAND_RESET_W(224, vlSelf->auth_chip_top__DOT__msg, __VscopeHash, 11469061339472861857ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2791082816431990714ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17117889281267537043ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7100899094844310260ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__u_hmac__DOT__key, __VscopeHash, 16948496539127716156ull);
    VL_SCOPED_RAND_RESET_W(224, vlSelf->auth_chip_top__DOT__u_hmac__DOT__msg, __VscopeHash, 16252255094471864435ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16095341477915572278ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__tag_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 501822636256636891ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__u_hmac__DOT__tag, __VscopeHash, 10074895861134252821ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 659158496549561692ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__phase = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14628699756280227347ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__u_hmac__DOT__inner, __VscopeHash, 1100813008343933344ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__core_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6379128417004183017ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__core_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8594257681893861911ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__core_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1316778568149192350ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__core_dvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5430298730434163664ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__u_hmac__DOT__core_digest, __VscopeHash, 7058862939452848802ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->auth_chip_top__DOT__u_hmac__DOT__core_block, __VscopeHash, 15550321913596255033ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->auth_chip_top__DOT__u_hmac__DOT__blk_ipad, __VscopeHash, 6697390070169067605ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->auth_chip_top__DOT__u_hmac__DOT__blk_opad, __VscopeHash, 12611503664295543861ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__len_inner = 736U;
    ;
    VL_SCOPED_RAND_RESET_W(512, vlSelf->auth_chip_top__DOT__u_hmac__DOT__blk_msg, __VscopeHash, 11614984801615670976ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->auth_chip_top__DOT__u_hmac__DOT__blk_inner, __VscopeHash, 1853820067615020262ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17194118286412202255ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13126135636353732119ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13075932520044935356ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16151394625664665464ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block, __VscopeHash, 17504534356673757644ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3837216727070962670ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5242141570732491048ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest, __VscopeHash, 6961173276662857666ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8010049894654770584ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7192594191515497207ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1467630037447751788ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg, __VscopeHash, 15138260824450406389ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg, __VscopeHash, 15440850564705993355ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14006658051191786825ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13315801082180043661ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10470943795482409356ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6707382270295052314ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14882955869418051943ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16578917864627953458ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13537007065018958213ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_new = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6069882836925489898ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3094406883348703023ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17926076719426445745ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12934076180514567724ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17723639719913590289ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7129706812926088905ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__tt_uo_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15606692722201845786ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__tt_uio_oe = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3556105210508347504ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9881764001444807907ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18017966060905482397ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__k_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13027739823499573438ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__b_base = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5163821953354423188ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ui_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9850226742038943448ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uo_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17801012111879232178ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 914968136020026051ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5146822924587959881ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_oe = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6011814628073577133ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ena = 1U;
    ;
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13861474800786791935ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5947412006622814884ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9110147529725329371ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11537942015438261973ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8021138152527977596ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17912958800090475265ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7836423554124456451ull);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4909936105333245142ull);
    }
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6421738629731765858ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9480406039194686644ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11744470261023556138ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6411326651589435410ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__maj = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9052448896214023996ull);
    vlSelf->auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8706142970520794122ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11784008261914896592ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15396736936165824996ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__tamper_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10223550522379187872ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__u_store__DOT__wr_data, __VscopeHash, 210082348074927559ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__key_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18183759369181182369ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__uid_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3914029703339188027ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__lock_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15294788259121836865ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__ctr_incr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2137452779985180637ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__u_store__DOT__key, __VscopeHash, 16391102778495901043ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__uid = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16217101677847369018ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6070973958714711530ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__locked = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2221936426521502870ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__tamper = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 611964332876267228ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__ctr_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2875564186460230112ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__u_store__DOT__key_reg, __VscopeHash, 8979229428931754118ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__uid_reg = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8798987800588082805ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__ctr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10185133186887395381ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__lock_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6714470507351618278ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__tamper_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 169547359534314367ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__tamper_s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15801766450892880898ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__tamper_s2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7763130245996798190ull);
    vlSelf->auth_chip_top__DOT__u_store__DOT__tamper_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6975712138583529675ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15318943130050402344ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6249036763556488402ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__rx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4357125559896263737ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__rx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17668730301192580250ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__tx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3252077416314806373ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__tx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8662129360209586146ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__tx_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17482565083768308201ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->auth_chip_top__DOT__u_protocol__DOT__nonce, __VscopeHash, 8812317488460881124ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__auth_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5260979352005163961ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__u_protocol__DOT__tag, __VscopeHash, 8500253650542698106ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__tag_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15876465887796839994ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__u_protocol__DOT__wr_data, __VscopeHash, 17504984500641306091ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__key_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9540303516828391251ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__uid_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14179868024997579942ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__lock_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7797802608094658884ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__ctr_incr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1955513414395469943ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__uid = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15075499004035376928ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17163048852021841533ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__locked = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17808464447666108291ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__tamper = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6646245764982865499ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__ctr_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2877324650357568632ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10937856395377669470ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__cmd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 459198764874273466ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__need = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5432010354631652111ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__got = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11544810620392223205ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->auth_chip_top__DOT__u_protocol__DOT__data_reg, __VscopeHash, 263814164930423282ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__timer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17138152311314694306ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__started = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13119656206404617101ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__resp_status = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2379501808651273763ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__resp_len = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11133379701705666993ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__resp_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5538322336845379249ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__status = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1725884951186957936ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__in_exec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 597443710974819895ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18272026480695054478ull);
    vlSelf->auth_chip_top__DOT__u_protocol__DOT__resp_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7104235608450255883ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5357500145968558387ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6251957820823719572ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15354197307116226470ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7826375489772681244ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__rx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1961318865174356548ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__rx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1787697446579624867ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__tx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8354917766380142760ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__tx_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5792949093078807615ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__tx_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3609749528077118353ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__rx_s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14202380771341892306ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__rx_s2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4805600919338233395ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__r_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2871921819973339819ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__r_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3632259538195009846ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__r_bit = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3025428160550941418ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__r_sh = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7664403174300750355ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__t_sh = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9135201974795560187ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__t_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15682086658523765726ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__t_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7730902206338023015ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__t_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16597676352310521215ull);
    vlSelf->auth_chip_top__DOT__u_uart__DOT__t_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1149866604382127537ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__auth_chip_top__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__auth_chip_top__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_store__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_store__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_protocol__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_protocol__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_uart__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_uart__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
