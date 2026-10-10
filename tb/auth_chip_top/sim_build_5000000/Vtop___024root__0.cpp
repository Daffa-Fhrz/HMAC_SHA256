// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_sample(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_sample\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

bool Vtop___024root___eval_ico(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((((((~ (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_uart__DOT__rst_n__0)) 
                                                             << 5U) 
                                                            | (((IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_uart__DOT__clk__0))) 
                                                               << 4U)) 
                                                           | (((((~ (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_protocol__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_protocol__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_store__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_store__DOT__clk__0)))))) 
                                                          << 8U) 
                                                         | (((((((~ (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__clk__0))))) 
                                                             << 4U) 
                                                            | (((((~ (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.auth_chip_top__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.auth_chip_top__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__auth_chip_top__DOT__clk__0)))))))));
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
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vtop___024root___eval_inact(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_inact\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___eval_body__nba(Vtop___024root* vlSelf);
void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_body__nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtop___024root___eval_obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___eval_react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtop___024root___eval_postponed(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_postponed\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
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

extern const VlWide<64>/*2047:0*/ Vtop__ConstPool__CONST_h7be248c9_0;

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    // Body
    vlSelfRef.auth_chip_top__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__init 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_init;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__next 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_next;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_dvalid 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest_valid;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_hit 
        = (1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_s2)));
    vlSelfRef.auth_chip_top__DOT__uart_rx = vlSelfRef.uart_rx;
    vlSelfRef.auth_chip_top__DOT__tamper_n = vlSelfRef.tamper_n;
    vlSelfRef.auth_chip_top__DOT__tag_valid = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag_valid;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__ready 
        = (0U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[0U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[1U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[2U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[3U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[4U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[5U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[6U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[6U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[7U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[7U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_out 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_out;
    vlSelfRef.auth_chip_top__DOT__rx_data = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_data;
    vlSelfRef.auth_chip_top__DOT__rx_valid = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_valid;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s0 
        = (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
             << 0x0000001eU) | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
                                >> 2U)) ^ (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
                                             << 0x00000013U) 
                                            | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
                                               >> 0x0000000dU)) 
                                           ^ ((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
                                               << 0x0000000aU) 
                                              | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
                                                 >> 0x00000016U))));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__maj 
        = ((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
            & vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[1U]) 
           ^ ((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
               & vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[2U]) 
              ^ (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[1U] 
                 & vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[2U])));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s1 
        = (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
             << 0x0000001aU) | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
                                >> 6U)) ^ (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
                                             << 0x00000015U) 
                                            | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
                                               >> 0x0000000bU)) 
                                           ^ ((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
                                               << 7U) 
                                              | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
                                                 >> 0x00000019U))));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ch 
        = ((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
            & vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[5U]) 
           ^ ((~ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U]) 
              & vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[6U]));
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_out;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__busy 
        = (0U != (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__state));
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tx_valid 
        = (4U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w9 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[6U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[0U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[0U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[1U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[1U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[2U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[2U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[3U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[3U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[4U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[4U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[5U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[5U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[6U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[6U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[7U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[7U];
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx_ready 
        = (1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_busy)));
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__auth_start 
        = ((~ (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__started)) 
           & (3U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state)));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[14U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[0U] = 0x00000300U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[1U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[2U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[3U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[4U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[5U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[6U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[7U] = 0x80000000U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[8U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[9U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[10U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[11U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[12U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[13U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[14U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[6U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[15U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[7U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__b_base 
        = (0x00000018U & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt) 
                          << 3U));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__k_word 
        = Vtop__ConstPool__CONST_h7be248c9_0[(0x07ffffffU 
                                              & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t))];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base 
        = (0x000000e0U & ((~ ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt) 
                              >> 2U)) << 5U));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w0 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[15U];
    vlSelfRef.auth_chip_top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.auth_chip_top__DOT__rst_n_s = (1U & ((IData)(vlSelfRef.auth_chip_top__DOT__rst_ff) 
                                                   >> 1U));
    vlSelfRef.auth_chip_top__DOT__tag[0U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[0U];
    vlSelfRef.auth_chip_top__DOT__tag[1U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[1U];
    vlSelfRef.auth_chip_top__DOT__tag[2U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[2U];
    vlSelfRef.auth_chip_top__DOT__tag[3U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[3U];
    vlSelfRef.auth_chip_top__DOT__tag[4U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[4U];
    vlSelfRef.auth_chip_top__DOT__tag[5U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[5U];
    vlSelfRef.auth_chip_top__DOT__tag[6U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[6U];
    vlSelfRef.auth_chip_top__DOT__tag[7U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[7U];
    vlSelfRef.auth_chip_top__DOT__nonce[0U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[0U];
    vlSelfRef.auth_chip_top__DOT__nonce[1U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[1U];
    vlSelfRef.auth_chip_top__DOT__nonce[2U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[2U];
    vlSelfRef.auth_chip_top__DOT__nonce[3U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rd = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_stb = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_addr = 0U;
    if ((4U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state)))) {
                vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_stb = 1U;
                vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_addr 
                    = (0x00000020U | (3U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt)));
            }
        }
    } else if ((2U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_stb 
            = ((1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) 
               || (1U & (~ ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt) 
                            >> 5U))));
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_addr 
            = ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))
                ? (0x0000001fU & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))
                : ((8U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))
                    ? 0x3fU : ((4U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))
                                ? (0x00000024U | (3U 
                                                  & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt)))
                                : (0x00000020U | (3U 
                                                  & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))))));
    } else if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_stb = 1U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_addr 
            = (0x0000001fU & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt));
    }
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[0U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[0U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[1U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[1U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[2U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[2U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[3U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[3U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[4U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[4U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[5U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[5U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[6U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[6U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[7U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[7U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__uid 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__uid_reg;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_reg;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__in_exec 
        = (2U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state));
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__locked 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__lock_reg;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_reg;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_full 
        = (0xffffffffU == vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_reg);
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx = vlSelfRef.auth_chip_top__DOT__uart_rx;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_n 
        = vlSelfRef.auth_chip_top__DOT__tamper_n;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag_valid 
        = vlSelfRef.auth_chip_top__DOT__tag_valid;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_ready 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__ready;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[0U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[1U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[2U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[3U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[4U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[5U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[6U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[6U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[7U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[7U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rdata 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_out;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rx_data 
        = vlSelfRef.auth_chip_top__DOT__rx_data;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rx_valid 
        = vlSelfRef.auth_chip_top__DOT__rx_valid;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp2 
        = (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s0 
           + vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__maj);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp1 
        = (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s1 
           + (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ch 
              + (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[7U] 
                 + (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[9U] 
                    + vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[8U]))));
    vlSelfRef.auth_chip_top__DOT__uart_tx = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx;
    vlSelfRef.auth_chip_top__DOT__busy = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__busy;
    vlSelfRef.auth_chip_top__DOT__tx_valid = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tx_valid;
    vlSelfRef.auth_chip_top__DOT__wr_data[0U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[0U];
    vlSelfRef.auth_chip_top__DOT__wr_data[1U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[1U];
    vlSelfRef.auth_chip_top__DOT__wr_data[2U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[2U];
    vlSelfRef.auth_chip_top__DOT__wr_data[3U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[3U];
    vlSelfRef.auth_chip_top__DOT__wr_data[4U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[4U];
    vlSelfRef.auth_chip_top__DOT__wr_data[5U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[5U];
    vlSelfRef.auth_chip_top__DOT__wr_data[6U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[6U];
    vlSelfRef.auth_chip_top__DOT__wr_data[7U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[7U];
    vlSelfRef.auth_chip_top__DOT__tx_ready = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx_ready;
    vlSelfRef.auth_chip_top__DOT__auth_start = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__auth_start;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig0 
        = (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1 
             << 0x00000019U) | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1 
                                >> 7U)) ^ (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1 
                                               >> 0x00000012U)) 
                                           ^ (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1 
                                              >> 3U)));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig1 
        = (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14 
             << 0x0000000fU) | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14 
                                >> 0x00000011U)) ^ 
           (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14 
              << 0x0000000dU) | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14 
                                 >> 0x00000013U)) ^ 
            (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14 
             >> 0x0000000aU)));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_word 
        = (((0U == (0x0000001fU & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base)))
             ? 0U : (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg
                     [(((IData)(0x0000001fU) + (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base)) 
                       >> 5U)] << ((IData)(0x00000020U) 
                                   - (0x0000001fU & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base))))) 
           | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg
              [((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base) 
                >> 5U)] >> (0x0000001fU & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base))));
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__clk 
        = vlSelfRef.auth_chip_top__DOT__clk;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__clk 
        = vlSelfRef.auth_chip_top__DOT__clk;
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__clk 
        = vlSelfRef.auth_chip_top__DOT__clk;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__clk 
        = vlSelfRef.auth_chip_top__DOT__clk;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__rst_n 
        = vlSelfRef.auth_chip_top__DOT__rst_n_s;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rst_n 
        = vlSelfRef.auth_chip_top__DOT__rst_n_s;
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rst_n 
        = vlSelfRef.auth_chip_top__DOT__rst_n_s;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__rst_n 
        = vlSelfRef.auth_chip_top__DOT__rst_n_s;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[0U] 
        = vlSelfRef.auth_chip_top__DOT__tag[0U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[1U] 
        = vlSelfRef.auth_chip_top__DOT__tag[1U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[2U] 
        = vlSelfRef.auth_chip_top__DOT__tag[2U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[3U] 
        = vlSelfRef.auth_chip_top__DOT__tag[3U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[4U] 
        = vlSelfRef.auth_chip_top__DOT__tag[4U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[5U] 
        = vlSelfRef.auth_chip_top__DOT__tag[5U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[6U] 
        = vlSelfRef.auth_chip_top__DOT__tag[6U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[7U] 
        = vlSelfRef.auth_chip_top__DOT__tag[7U];
    if ((1U & (~ ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
                vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rd = 1U;
            }
        }
    }
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ui_in 
        = (((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_stb) 
            << 7U) | (((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rd) 
                       << 6U) | (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_addr)));
    vlSelfRef.auth_chip_top__DOT__key[0U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[0U];
    vlSelfRef.auth_chip_top__DOT__key[1U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[1U];
    vlSelfRef.auth_chip_top__DOT__key[2U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[2U];
    vlSelfRef.auth_chip_top__DOT__key[3U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[3U];
    vlSelfRef.auth_chip_top__DOT__key[4U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[4U];
    vlSelfRef.auth_chip_top__DOT__key[5U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[5U];
    vlSelfRef.auth_chip_top__DOT__key[6U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[6U];
    vlSelfRef.auth_chip_top__DOT__key[7U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[7U];
    vlSelfRef.auth_chip_top__DOT__uid = vlSelfRef.auth_chip_top__DOT__u_store__DOT__uid;
    vlSelfRef.auth_chip_top__DOT__ctr = vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr;
    vlSelfRef.auth_chip_top__DOT__locked = vlSelfRef.auth_chip_top__DOT__u_store__DOT__locked;
    vlSelfRef.auth_chip_top__DOT__tamper = vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper;
    vlSelfRef.auth_chip_top__DOT__ctr_full = vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_full;
    vlSelfRef.uart_tx = vlSelfRef.auth_chip_top__DOT__uart_tx;
    vlSelfRef.busy = vlSelfRef.auth_chip_top__DOT__busy;
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx_valid 
        = vlSelfRef.auth_chip_top__DOT__tx_valid;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[0U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[0U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[1U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[1U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[2U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[2U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[3U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[3U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[4U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[4U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[5U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[5U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[6U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[6U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[7U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[7U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tx_ready 
        = vlSelfRef.auth_chip_top__DOT__tx_ready;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__start 
        = vlSelfRef.auth_chip_top__DOT__auth_start;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_new 
        = (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig1 
           + (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w9 
              + (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w0 
                 + vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig0)));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_wdata = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state)))) {
                if ((1U & (~ ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt) 
                              >> 3U)))) {
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_wdata 
                        = (0x000000ffU & ((4U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))
                                           ? (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__k_word 
                                              >> (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__b_base))
                                           : (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w0 
                                              >> (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__b_base))));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_wdata 
                = (0x000000ffU & (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_word 
                                  >> (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__b_base)));
        }
    }
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__clk 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__clk;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__rst_n;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr 
        = (0x0000003fU & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ui_in));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_clk 
        = (1U & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ui_in) 
                 >> 7U));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_we 
        = (1U & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ui_in) 
                 >> 6U));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[0U] 
        = vlSelfRef.auth_chip_top__DOT__key[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[1U] 
        = vlSelfRef.auth_chip_top__DOT__key[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[2U] 
        = vlSelfRef.auth_chip_top__DOT__key[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[3U] 
        = vlSelfRef.auth_chip_top__DOT__key[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[4U] 
        = vlSelfRef.auth_chip_top__DOT__key[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[5U] 
        = vlSelfRef.auth_chip_top__DOT__key[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[6U] 
        = vlSelfRef.auth_chip_top__DOT__key[6U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[7U] 
        = vlSelfRef.auth_chip_top__DOT__key[7U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__uid 
        = vlSelfRef.auth_chip_top__DOT__uid;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr 
        = vlSelfRef.auth_chip_top__DOT__ctr;
    vlSelfRef.auth_chip_top__DOT__msg[0U] = vlSelfRef.auth_chip_top__DOT__ctr;
    vlSelfRef.auth_chip_top__DOT__msg[1U] = vlSelfRef.auth_chip_top__DOT__nonce[0U];
    vlSelfRef.auth_chip_top__DOT__msg[2U] = vlSelfRef.auth_chip_top__DOT__nonce[1U];
    vlSelfRef.auth_chip_top__DOT__msg[3U] = vlSelfRef.auth_chip_top__DOT__nonce[2U];
    vlSelfRef.auth_chip_top__DOT__msg[4U] = vlSelfRef.auth_chip_top__DOT__nonce[3U];
    vlSelfRef.auth_chip_top__DOT__msg[5U] = (IData)(vlSelfRef.auth_chip_top__DOT__uid);
    vlSelfRef.auth_chip_top__DOT__msg[6U] = (IData)(
                                                    (vlSelfRef.auth_chip_top__DOT__uid 
                                                     >> 0x00000020U));
    vlSelfRef.locked = vlSelfRef.auth_chip_top__DOT__locked;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__locked 
        = vlSelfRef.auth_chip_top__DOT__locked;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tamper 
        = vlSelfRef.auth_chip_top__DOT__tamper;
    vlSelfRef.auth_chip_top__DOT__alarm = ((IData)(vlSelfRef.auth_chip_top__DOT__tamper) 
                                           | (IData)(vlSelfRef.auth_chip_top__DOT__ctr_full));
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr_full 
        = vlSelfRef.auth_chip_top__DOT__ctr_full;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_in 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_wdata;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__clk 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__clk;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__rst_n 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_oe 
        = (0x000000ffU & (- (IData)((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_we))));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uo_out 
        = (((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_we) 
            << 1U) | (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_ready));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[0U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[1U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[2U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[3U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[4U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[5U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[6U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[7U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[8U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[0U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[9U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[1U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[10U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[2U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[11U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[3U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[12U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[4U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[13U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[5U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[14U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[6U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[15U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[7U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[0U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[1U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[2U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[3U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[4U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[5U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[6U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[7U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[8U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[0U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[9U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[1U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[10U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[2U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[11U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[3U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[12U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[4U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[13U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[5U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[14U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[6U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[15U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[7U]);
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_byte 
        = (0x000000ffU & ((0U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx))
                           ? (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_status)
                           : ((8U >= (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx))
                               ? (IData)((vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__uid 
                                          >> (0x00000038U 
                                              & ((- (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)) 
                                                 << 3U))))
                               : ((0x0cU >= (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx))
                                   ? (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr 
                                      >> (0x00000018U 
                                          & ((- (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)) 
                                             << 3U)))
                                   : (((0U == (0x00000018U 
                                               & (((IData)(0x0cU) 
                                                   - (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)) 
                                                  << 3U)))
                                        ? 0U : (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag
                                                [(((IData)(7U) 
                                                   + 
                                                   (0x000000f8U 
                                                    & (((IData)(0x0cU) 
                                                        - (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)) 
                                                       << 3U))) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x00000018U 
                                                  & (((IData)(0x0cU) 
                                                      - (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)) 
                                                     << 3U))))) 
                                      | (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag
                                         [(7U & (((IData)(0x0cU) 
                                                  - (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)) 
                                                 >> 2U))] 
                                         >> (0x00000018U 
                                             & (((IData)(0x0cU) 
                                                 - (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)) 
                                                << 3U))))))));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[0U] 
        = vlSelfRef.auth_chip_top__DOT__msg[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[1U] 
        = vlSelfRef.auth_chip_top__DOT__msg[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[2U] 
        = vlSelfRef.auth_chip_top__DOT__msg[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[3U] 
        = vlSelfRef.auth_chip_top__DOT__msg[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[4U] 
        = vlSelfRef.auth_chip_top__DOT__msg[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[5U] 
        = vlSelfRef.auth_chip_top__DOT__msg[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[6U] 
        = vlSelfRef.auth_chip_top__DOT__msg[6U];
    vlSelfRef.alarm = vlSelfRef.auth_chip_top__DOT__alarm;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__status 
        = (((2U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd))
             ? ((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tamper)
                 ? 0xe2U : ((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__locked)
                             ? (0xe4U & (- (IData)((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr_full))))
                             : 0xe1U)) : (((0x10U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)) 
                                           | ((0x11U 
                                               == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)) 
                                              | (0x1fU 
                                                 == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd))))
                                           ? ((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tamper)
                                               ? 0xe2U
                                               : (0xe1U 
                                                  & (- (IData)((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__locked)))))
                                           : 0xe3U)) 
           & (- (IData)((1U != (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)))));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__tt_uio_oe 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_oe;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__tt_uo_out 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uo_out;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tx_data 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_byte;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[0U] = 0x000002e0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[1U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[2U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[3U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[4U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[5U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[6U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[7U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[8U] = 0x80000000U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[9U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[10U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[11U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[12U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[13U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[14U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[15U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[6U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ok 
        = (0U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__status));
    vlSelfRef.auth_chip_top__DOT__tx_data = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tx_data;
    if ((0U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__phase))) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[0U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[0U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[1U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[1U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[2U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[2U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[3U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[3U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[4U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[4U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[5U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[5U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[6U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[6U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[7U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[7U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[8U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[8U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[9U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[9U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[10U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[10U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[11U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[11U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[12U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[12U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[13U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[13U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[14U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[14U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[15U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[15U];
    } else if ((1U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__phase))) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[0U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[0U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[1U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[1U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[2U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[2U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[3U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[3U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[4U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[4U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[5U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[5U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[6U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[6U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[7U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[7U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[8U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[8U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[9U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[9U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[10U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[10U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[11U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[11U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[12U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[12U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[13U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[13U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[14U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[14U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[15U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[15U];
    } else if ((2U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__phase))) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[0U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[0U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[1U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[1U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[2U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[2U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[3U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[3U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[4U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[4U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[5U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[5U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[6U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[6U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[7U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[7U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[8U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[8U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[9U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[9U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[10U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[10U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[11U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[11U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[12U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[12U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[13U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[13U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[14U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[14U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[15U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[15U];
    } else {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[0U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[0U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[1U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[1U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[2U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[2U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[3U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[3U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[4U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[4U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[5U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[5U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[6U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[6U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[7U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[7U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[8U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[8U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[9U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[9U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[10U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[10U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[11U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[11U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[12U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[12U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[13U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[13U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[14U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[14U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[15U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[15U];
    }
    __VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__in_exec) 
                                      & (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ok));
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx_data 
        = vlSelfRef.auth_chip_top__DOT__tx_data;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[0U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[1U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[2U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[3U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[4U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[5U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[6U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[6U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[7U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[7U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[8U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[8U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[9U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[9U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[10U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[10U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[11U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[11U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[12U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[12U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[13U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[13U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[14U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[14U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[15U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[15U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__key_we 
        = ((0x10U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__uid_we 
        = ((0x11U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__lock_set 
        = ((0x1fU == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr_incr 
        = ((2U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.auth_chip_top__DOT__key_we = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__key_we;
    vlSelfRef.auth_chip_top__DOT__uid_we = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__uid_we;
    vlSelfRef.auth_chip_top__DOT__lock_set = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__lock_set;
    vlSelfRef.auth_chip_top__DOT__ctr_incr = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr_incr;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_we 
        = vlSelfRef.auth_chip_top__DOT__key_we;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__uid_we 
        = vlSelfRef.auth_chip_top__DOT__uid_we;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__lock_set 
        = vlSelfRef.auth_chip_top__DOT__lock_set;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_incr 
        = vlSelfRef.auth_chip_top__DOT__ctr_incr;
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
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

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__auth_chip_top__DOT__u_uart__DOT__r_state;
    __Vdly__auth_chip_top__DOT__u_uart__DOT__r_state = 0;
    SData/*15:0*/ __Vdly__auth_chip_top__DOT__u_uart__DOT__r_cnt;
    __Vdly__auth_chip_top__DOT__u_uart__DOT__r_cnt = 0;
    SData/*15:0*/ __Vdly__auth_chip_top__DOT__u_uart__DOT__t_cnt;
    __Vdly__auth_chip_top__DOT__u_uart__DOT__t_cnt = 0;
    // Body
    __Vdly__auth_chip_top__DOT__u_uart__DOT__t_cnt 
        = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_cnt;
    __Vdly__auth_chip_top__DOT__u_uart__DOT__r_state 
        = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_state;
    __Vdly__auth_chip_top__DOT__u_uart__DOT__r_cnt 
        = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_cnt;
    if (vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rst_n) {
        if (vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_busy) {
            if ((9U == (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_cnt))) {
                __Vdly__auth_chip_top__DOT__u_uart__DOT__t_cnt = 0U;
                if ((9U == (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_n))) {
                    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_busy = 0U;
                    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_out = 1U;
                } else {
                    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_out 
                        = ((9U >= (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_n)))) 
                           && (1U & ((IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_sh) 
                                     >> (0x0000000fU 
                                         & ((IData)(1U) 
                                            + (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_n))))));
                    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_n 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_n)));
                }
            } else {
                __Vdly__auth_chip_top__DOT__u_uart__DOT__t_cnt 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_cnt)));
            }
        } else if (vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx_valid) {
            vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_n = 0U;
            vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_sh 
                = (0x00000200U | ((IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx_data) 
                                  << 1U));
            __Vdly__auth_chip_top__DOT__u_uart__DOT__t_cnt = 0U;
            vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_busy = 1U;
            vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_out = 0U;
        }
        vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_valid = 0U;
        if ((4U & (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_state))) {
            if ((2U & (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_state))) {
                __Vdly__auth_chip_top__DOT__u_uart__DOT__r_state = 0U;
            } else if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_state))) {
                __Vdly__auth_chip_top__DOT__u_uart__DOT__r_state = 0U;
            } else if (vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_s2) {
                __Vdly__auth_chip_top__DOT__u_uart__DOT__r_state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_state))) {
            if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_state))) {
                if ((9U == (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_cnt))) {
                    __Vdly__auth_chip_top__DOT__u_uart__DOT__r_cnt = 0U;
                    if (vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_s2) {
                        vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_data 
                            = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_sh;
                        vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_valid = 1U;
                        __Vdly__auth_chip_top__DOT__u_uart__DOT__r_state = 0U;
                    } else {
                        __Vdly__auth_chip_top__DOT__u_uart__DOT__r_state = 4U;
                    }
                } else {
                    __Vdly__auth_chip_top__DOT__u_uart__DOT__r_cnt 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_cnt)));
                }
            } else if ((9U == (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_cnt))) {
                vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_sh 
                    = (((IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_s2) 
                        << 7U) | (0x0000007fU & ((IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_sh) 
                                                 >> 1U)));
                __Vdly__auth_chip_top__DOT__u_uart__DOT__r_cnt = 0U;
                if ((7U == (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_bit))) {
                    __Vdly__auth_chip_top__DOT__u_uart__DOT__r_state = 3U;
                } else {
                    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_bit 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_bit)));
                }
            } else {
                __Vdly__auth_chip_top__DOT__u_uart__DOT__r_cnt 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_cnt)));
            }
        } else if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_state))) {
            if ((4U == (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_cnt))) {
                __Vdly__auth_chip_top__DOT__u_uart__DOT__r_cnt = 0U;
                if (vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_s2) {
                    __Vdly__auth_chip_top__DOT__u_uart__DOT__r_state = 0U;
                } else {
                    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_bit = 0U;
                    __Vdly__auth_chip_top__DOT__u_uart__DOT__r_state = 2U;
                }
            } else {
                __Vdly__auth_chip_top__DOT__u_uart__DOT__r_cnt 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_cnt)));
            }
        } else if ((1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_s2)))) {
            __Vdly__auth_chip_top__DOT__u_uart__DOT__r_cnt = 0U;
            __Vdly__auth_chip_top__DOT__u_uart__DOT__r_state = 1U;
        }
    } else {
        vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_n = 0U;
        vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_sh = 0x03ffU;
        __Vdly__auth_chip_top__DOT__u_uart__DOT__t_cnt = 0U;
        vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_busy = 0U;
        vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_out = 1U;
        vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_bit = 0U;
        vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_sh = 0U;
        __Vdly__auth_chip_top__DOT__u_uart__DOT__r_state = 0U;
        __Vdly__auth_chip_top__DOT__u_uart__DOT__r_cnt = 0U;
        vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_data = 0U;
        vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_valid = 0U;
    }
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_cnt 
        = __Vdly__auth_chip_top__DOT__u_uart__DOT__t_cnt;
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_state 
        = __Vdly__auth_chip_top__DOT__u_uart__DOT__r_state;
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_cnt 
        = __Vdly__auth_chip_top__DOT__u_uart__DOT__r_cnt;
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx_ready 
        = (1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_busy)));
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_out;
    vlSelfRef.auth_chip_top__DOT__rx_valid = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_valid;
    vlSelfRef.auth_chip_top__DOT__rx_data = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_data;
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_s2 
        = ((1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rst_n))) 
           || (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_s1));
    vlSelfRef.auth_chip_top__DOT__tx_ready = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx_ready;
    vlSelfRef.auth_chip_top__DOT__uart_tx = vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx;
    vlSelfRef.uart_tx = vlSelfRef.auth_chip_top__DOT__uart_tx;
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_s1 
        = ((1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rst_n))) 
           || (IData)(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx));
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_h9e67c271_0;

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__auth_chip_top__DOT__u_hmac__DOT__phase;
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__phase = 0;
    CData/*1:0*/ __Vdly__auth_chip_top__DOT__u_hmac__DOT__state;
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__state = 0;
    // Body
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__state 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__state;
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__phase 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__phase;
    if (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__rst_n) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag_valid = 0U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_init = 0U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_next = 0U;
        if ((0U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__state))) {
            if (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__start) {
                __Vdly__auth_chip_top__DOT__u_hmac__DOT__phase = 0U;
                __Vdly__auth_chip_top__DOT__u_hmac__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__state))) {
            if (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_ready) {
                vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_init 
                    = (1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__phase)));
                __Vdly__auth_chip_top__DOT__u_hmac__DOT__state = 2U;
                vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_next 
                    = (1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__phase));
            }
        } else if ((2U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__state))) {
            if (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_dvalid) {
                if ((1U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__phase))) {
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[0U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[0U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[1U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[1U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[2U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[2U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[3U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[3U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[4U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[4U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[5U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[5U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[6U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[6U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[7U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[7U];
                }
                if ((3U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__phase))) {
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[0U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[0U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[1U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[1U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[2U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[2U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[3U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[3U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[4U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[4U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[5U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[5U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[6U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[6U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[7U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[7U];
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag_valid = 1U;
                    VL_ASSIGN_W(256, vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner, Vtop__ConstPool__CONST_h9e67c271_0);
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__state = 0U;
                } else {
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__phase 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__phase)));
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__state = 1U;
                }
            }
        } else {
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__state = 0U;
        }
    } else {
        __Vdly__auth_chip_top__DOT__u_hmac__DOT__state = 0U;
        __Vdly__auth_chip_top__DOT__u_hmac__DOT__phase = 0U;
        VL_ASSIGN_W(256, vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner, Vtop__ConstPool__CONST_h9e67c271_0);
        VL_ASSIGN_W(256, vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag, Vtop__ConstPool__CONST_h9e67c271_0);
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag_valid = 0U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_init = 0U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_next = 0U;
    }
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__state 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__state;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__phase 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__phase;
    vlSelfRef.auth_chip_top__DOT__tag_valid = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag_valid;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__busy 
        = (0U != (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__state));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[0U] = 0x00000300U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[1U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[2U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[3U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[4U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[5U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[6U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[7U] = 0x80000000U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[8U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[9U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[10U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[11U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[12U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[13U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[14U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[6U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[15U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner[7U];
    vlSelfRef.auth_chip_top__DOT__tag[0U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[0U];
    vlSelfRef.auth_chip_top__DOT__tag[1U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[1U];
    vlSelfRef.auth_chip_top__DOT__tag[2U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[2U];
    vlSelfRef.auth_chip_top__DOT__tag[3U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[3U];
    vlSelfRef.auth_chip_top__DOT__tag[4U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[4U];
    vlSelfRef.auth_chip_top__DOT__tag[5U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[5U];
    vlSelfRef.auth_chip_top__DOT__tag[6U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[6U];
    vlSelfRef.auth_chip_top__DOT__tag[7U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag[7U];
    vlSelfRef.auth_chip_top__DOT__busy = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__busy;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[0U] 
        = vlSelfRef.auth_chip_top__DOT__tag[0U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[1U] 
        = vlSelfRef.auth_chip_top__DOT__tag[1U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[2U] 
        = vlSelfRef.auth_chip_top__DOT__tag[2U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[3U] 
        = vlSelfRef.auth_chip_top__DOT__tag[3U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[4U] 
        = vlSelfRef.auth_chip_top__DOT__tag[4U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[5U] 
        = vlSelfRef.auth_chip_top__DOT__tag[5U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[6U] 
        = vlSelfRef.auth_chip_top__DOT__tag[6U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag[7U] 
        = vlSelfRef.auth_chip_top__DOT__tag[7U];
    vlSelfRef.busy = vlSelfRef.auth_chip_top__DOT__busy;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.auth_chip_top__DOT__u_store__DOT__rst_n) {
        if (((IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_incr) 
             & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_full)))) {
            vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_reg 
                = ((IData)(1U) + vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_reg);
        }
        if (((((IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__uid_we) 
               & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__lock_reg))) 
              & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_reg))) 
             & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_hit)))) {
            vlSelfRef.auth_chip_top__DOT__u_store__DOT__uid_reg 
                = (((QData)((IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[1U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[0U])));
        }
        if (vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_hit) {
            VL_ASSIGN_W(256, vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg, Vtop__ConstPool__CONST_h9e67c271_0);
        } else if ((((IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_we) 
                     & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__lock_reg))) 
                    & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_reg)))) {
            vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[0U] 
                = vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[0U];
            vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[1U] 
                = vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[1U];
            vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[2U] 
                = vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[2U];
            vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[3U] 
                = vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[3U];
            vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[4U] 
                = vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[4U];
            vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[5U] 
                = vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[5U];
            vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[6U] 
                = vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[6U];
            vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[7U] 
                = vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[7U];
        }
        if ((((IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__lock_set) 
              & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_reg))) 
             & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_hit)))) {
            vlSelfRef.auth_chip_top__DOT__u_store__DOT__lock_reg = 1U;
        }
        if (vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_hit) {
            vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_reg = 1U;
        }
    } else {
        vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_reg = 0U;
        VL_ASSIGN_W(256, vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg, Vtop__ConstPool__CONST_h9e67c271_0);
        vlSelfRef.auth_chip_top__DOT__u_store__DOT__uid_reg = 0ULL;
        vlSelfRef.auth_chip_top__DOT__u_store__DOT__lock_reg = 0U;
        vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_reg = 0U;
    }
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_s2 
        = ((1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__rst_n))) 
           || (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_s1));
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_reg;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_full 
        = (0xffffffffU == vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_reg);
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_s1 
        = ((1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__rst_n))) 
           || (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_n));
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[0U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[0U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[1U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[1U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[2U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[2U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[3U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[3U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[4U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[4U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[5U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[5U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[6U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[6U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[7U] 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg[7U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__uid 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__uid_reg;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__locked 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__lock_reg;
    vlSelfRef.auth_chip_top__DOT__ctr = vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr;
    vlSelfRef.auth_chip_top__DOT__ctr_full = vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_full;
    vlSelfRef.auth_chip_top__DOT__key[0U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[0U];
    vlSelfRef.auth_chip_top__DOT__key[1U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[1U];
    vlSelfRef.auth_chip_top__DOT__key[2U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[2U];
    vlSelfRef.auth_chip_top__DOT__key[3U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[3U];
    vlSelfRef.auth_chip_top__DOT__key[4U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[4U];
    vlSelfRef.auth_chip_top__DOT__key[5U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[5U];
    vlSelfRef.auth_chip_top__DOT__key[6U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[6U];
    vlSelfRef.auth_chip_top__DOT__key[7U] = vlSelfRef.auth_chip_top__DOT__u_store__DOT__key[7U];
    vlSelfRef.auth_chip_top__DOT__uid = vlSelfRef.auth_chip_top__DOT__u_store__DOT__uid;
    vlSelfRef.auth_chip_top__DOT__locked = vlSelfRef.auth_chip_top__DOT__u_store__DOT__locked;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_hit 
        = (1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_s2)));
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr 
        = vlSelfRef.auth_chip_top__DOT__ctr;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr_full 
        = vlSelfRef.auth_chip_top__DOT__ctr_full;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[0U] 
        = vlSelfRef.auth_chip_top__DOT__key[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[1U] 
        = vlSelfRef.auth_chip_top__DOT__key[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[2U] 
        = vlSelfRef.auth_chip_top__DOT__key[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[3U] 
        = vlSelfRef.auth_chip_top__DOT__key[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[4U] 
        = vlSelfRef.auth_chip_top__DOT__key[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[5U] 
        = vlSelfRef.auth_chip_top__DOT__key[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[6U] 
        = vlSelfRef.auth_chip_top__DOT__key[6U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[7U] 
        = vlSelfRef.auth_chip_top__DOT__key[7U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__uid 
        = vlSelfRef.auth_chip_top__DOT__uid;
    vlSelfRef.locked = vlSelfRef.auth_chip_top__DOT__locked;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__locked 
        = vlSelfRef.auth_chip_top__DOT__locked;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper 
        = vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_reg;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[0U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[1U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[2U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[3U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[4U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[5U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[6U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[7U] = 0x36363636U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[8U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[0U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[9U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[1U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[10U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[2U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[11U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[3U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[12U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[4U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[13U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[5U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[14U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[6U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[15U] 
        = (0x36363636U ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[7U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[0U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[1U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[2U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[3U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[4U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[5U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[6U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[7U] = 0x5c5c5c5cU;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[8U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[0U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[9U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[1U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[10U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[2U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[11U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[3U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[12U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[4U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[13U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[5U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[14U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[6U]);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[15U] 
        = (0x5c5c5c5cU ^ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key[7U]);
    vlSelfRef.auth_chip_top__DOT__tamper = vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper;
    vlSelfRef.auth_chip_top__DOT__alarm = ((IData)(vlSelfRef.auth_chip_top__DOT__tamper) 
                                           | (IData)(vlSelfRef.auth_chip_top__DOT__ctr_full));
    vlSelfRef.alarm = vlSelfRef.auth_chip_top__DOT__alarm;
}

extern const VlWide<256>/*8191:0*/ Vtop__ConstPool__CONST_h22c7d00a_0;

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__auth_chip_top__DOT__u_protocol__DOT__state;
    __Vdly__auth_chip_top__DOT__u_protocol__DOT__state = 0;
    VlWide<8>/*255:0*/ __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg;
    VL_ZERO_W(256, __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg);
    CData/*5:0*/ __Vdly__auth_chip_top__DOT__u_protocol__DOT__got;
    __Vdly__auth_chip_top__DOT__u_protocol__DOT__got = 0;
    IData/*31:0*/ __Vdly__auth_chip_top__DOT__u_protocol__DOT__timer;
    __Vdly__auth_chip_top__DOT__u_protocol__DOT__timer = 0;
    // Body
    __Vdly__auth_chip_top__DOT__u_protocol__DOT__got 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__got;
    __Vdly__auth_chip_top__DOT__u_protocol__DOT__timer 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__timer;
    __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[0U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[0U];
    __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[1U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[1U];
    __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[2U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[2U];
    __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[3U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[3U];
    __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[4U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[4U];
    __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[5U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[5U];
    __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[6U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[6U];
    __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[7U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[7U];
    __Vdly__auth_chip_top__DOT__u_protocol__DOT__state 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state;
    if (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rst_n) {
        if ((4U & (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state))) {
                __Vdly__auth_chip_top__DOT__u_protocol__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state))) {
                __Vdly__auth_chip_top__DOT__u_protocol__DOT__state = 0U;
            } else if (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tx_ready) {
                if (((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx) 
                     == (0x0000003fU & ((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_len) 
                                        - (IData)(1U))))) {
                    __Vdly__auth_chip_top__DOT__u_protocol__DOT__state = 0U;
                } else {
                    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx 
                        = (0x0000003fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state))) {
                vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__started = 1U;
                if (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tamper) {
                    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_status = 0xe2U;
                    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_len = 1U;
                    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx = 0U;
                    __Vdly__auth_chip_top__DOT__u_protocol__DOT__state = 4U;
                } else if (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag_valid) {
                    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx = 0U;
                    __Vdly__auth_chip_top__DOT__u_protocol__DOT__state = 4U;
                }
            } else {
                vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__started = 0U;
                vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx = 0U;
                vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_status 
                    = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__status;
                vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_len 
                    = (((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ok) 
                        & (1U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)))
                        ? 9U : (((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ok) 
                                 & (2U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)))
                                 ? 0x2dU : 1U));
                if (((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ok) 
                     & (2U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)))) {
                    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[0U] 
                        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[0U];
                    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[1U] 
                        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[1U];
                    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[2U] 
                        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[2U];
                    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[3U] 
                        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[3U];
                    __Vdly__auth_chip_top__DOT__u_protocol__DOT__state = 3U;
                } else {
                    __Vdly__auth_chip_top__DOT__u_protocol__DOT__state = 4U;
                }
                VL_ASSIGN_W(256, __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg, Vtop__ConstPool__CONST_h9e67c271_0);
            }
        } else if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state))) {
            if (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rx_valid) {
                __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[0U] 
                    = ((vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[0U] 
                        << 8U) | (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rx_data));
                __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[1U] 
                    = ((vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[0U] 
                        >> 0x00000018U) | (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[1U] 
                                           << 8U));
                __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[2U] 
                    = ((vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[1U] 
                        >> 0x00000018U) | (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[2U] 
                                           << 8U));
                __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[3U] 
                    = ((vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[2U] 
                        >> 0x00000018U) | (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[3U] 
                                           << 8U));
                __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[4U] 
                    = ((vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[3U] 
                        >> 0x00000018U) | (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[4U] 
                                           << 8U));
                __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[5U] 
                    = ((vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[4U] 
                        >> 0x00000018U) | (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[5U] 
                                           << 8U));
                __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[6U] 
                    = ((vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[5U] 
                        >> 0x00000018U) | (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[6U] 
                                           << 8U));
                __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[7U] 
                    = ((vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[6U] 
                        >> 0x00000018U) | (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[7U] 
                                           << 8U));
                __Vdly__auth_chip_top__DOT__u_protocol__DOT__got 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__got)));
                __Vdly__auth_chip_top__DOT__u_protocol__DOT__timer = 0U;
                if (((0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__got))) 
                     == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__need))) {
                    __Vdly__auth_chip_top__DOT__u_protocol__DOT__state = 2U;
                }
            } else {
                __Vdly__auth_chip_top__DOT__u_protocol__DOT__timer 
                    = ((IData)(1U) + vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__timer);
                if ((0x004c4b3fU <= vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__timer)) {
                    VL_ASSIGN_W(256, __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg, Vtop__ConstPool__CONST_h9e67c271_0);
                    __Vdly__auth_chip_top__DOT__u_protocol__DOT__state = 0U;
                }
            }
        } else {
            __Vdly__auth_chip_top__DOT__u_protocol__DOT__got = 0U;
            __Vdly__auth_chip_top__DOT__u_protocol__DOT__timer = 0U;
            if (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rx_valid) {
                vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd 
                    = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rx_data;
                vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__need 
                    = (0x0000003fU & Vtop__ConstPool__CONST_h22c7d00a_0
                       [(0x07ffffffU & (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rx_data))]);
                __Vdly__auth_chip_top__DOT__u_protocol__DOT__state 
                    = ((((2U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rx_data)) 
                         | (0x10U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rx_data))) 
                        | (0x11U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rx_data)))
                        ? 1U : 2U);
            }
        }
    } else {
        __Vdly__auth_chip_top__DOT__u_protocol__DOT__state = 0U;
        vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd = 0U;
        vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__need = 0U;
        __Vdly__auth_chip_top__DOT__u_protocol__DOT__got = 0U;
        VL_ASSIGN_W(256, __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg, Vtop__ConstPool__CONST_h9e67c271_0);
        vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[0U] = 0U;
        vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[1U] = 0U;
        vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[2U] = 0U;
        vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[3U] = 0U;
        __Vdly__auth_chip_top__DOT__u_protocol__DOT__timer = 0U;
        vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__started = 0U;
        vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_status = 0U;
        vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_len = 1U;
        vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx = 0U;
    }
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__got 
        = __Vdly__auth_chip_top__DOT__u_protocol__DOT__got;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__timer 
        = __Vdly__auth_chip_top__DOT__u_protocol__DOT__timer;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[0U] 
        = __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[0U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[1U] 
        = __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[1U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[2U] 
        = __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[2U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[3U] 
        = __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[3U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[4U] 
        = __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[4U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[5U] 
        = __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[5U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[6U] 
        = __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[6U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[7U] 
        = __Vdly__auth_chip_top__DOT__u_protocol__DOT__data_reg[7U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state 
        = __Vdly__auth_chip_top__DOT__u_protocol__DOT__state;
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[0U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[0U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[1U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[1U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[2U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[2U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[3U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[3U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[4U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[4U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[5U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[5U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[6U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[6U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[7U] 
        = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg[7U];
    vlSelfRef.auth_chip_top__DOT__nonce[0U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[0U];
    vlSelfRef.auth_chip_top__DOT__nonce[1U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[1U];
    vlSelfRef.auth_chip_top__DOT__nonce[2U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[2U];
    vlSelfRef.auth_chip_top__DOT__nonce[3U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce[3U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tx_valid 
        = (4U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state));
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__auth_start 
        = ((~ (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__started)) 
           & (3U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state)));
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__in_exec 
        = (2U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state));
    vlSelfRef.auth_chip_top__DOT__wr_data[0U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[0U];
    vlSelfRef.auth_chip_top__DOT__wr_data[1U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[1U];
    vlSelfRef.auth_chip_top__DOT__wr_data[2U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[2U];
    vlSelfRef.auth_chip_top__DOT__wr_data[3U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[3U];
    vlSelfRef.auth_chip_top__DOT__wr_data[4U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[4U];
    vlSelfRef.auth_chip_top__DOT__wr_data[5U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[5U];
    vlSelfRef.auth_chip_top__DOT__wr_data[6U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[6U];
    vlSelfRef.auth_chip_top__DOT__wr_data[7U] = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data[7U];
    vlSelfRef.auth_chip_top__DOT__tx_valid = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tx_valid;
    vlSelfRef.auth_chip_top__DOT__auth_start = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__auth_start;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[0U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[0U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[1U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[1U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[2U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[2U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[3U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[3U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[4U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[4U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[5U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[5U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[6U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[6U];
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data[7U] 
        = vlSelfRef.auth_chip_top__DOT__wr_data[7U];
    vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx_valid 
        = vlSelfRef.auth_chip_top__DOT__tx_valid;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__start 
        = vlSelfRef.auth_chip_top__DOT__auth_start;
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;
extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_ha51a22ca_0;

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state;
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state = 0;
    CData/*5:0*/ __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt;
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt = 0;
    VlWide<16>/*511:0*/ __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg;
    VL_ZERO_W(512, __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg);
    IData/*23:0*/ __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr;
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr = 0;
    CData/*5:0*/ __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t;
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t = 0;
    VlWide<8>/*255:0*/ __Vtemp_1;
    // Body
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr;
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t;
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[0U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[0U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[1U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[1U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[2U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[2U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[3U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[3U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[4U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[4U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[5U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[5U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[6U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[6U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[7U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[7U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[8U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[8U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[9U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[9U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[10U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[10U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[11U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[11U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[12U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[12U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[13U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[13U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[14U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[14U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[15U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[15U];
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt;
    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state;
    if (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest_valid = 0U;
        if ((4U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
                __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
                __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state = 0U;
            } else {
                __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt)));
                if ((3U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))) {
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt = 0U;
                    VL_ASSIGN_W(512, __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg, Vtop__ConstPool__CONST_h93e1b771_0);
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest_valid = 1U;
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
                __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt)));
                if ((0U != (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))) {
                    if ((0U == (3U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt)))) {
                        __Vtemp_1[1U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[0U];
                        __Vtemp_1[2U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[1U];
                        __Vtemp_1[3U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[2U];
                        __Vtemp_1[4U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[3U];
                        __Vtemp_1[5U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[4U];
                        __Vtemp_1[6U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[5U];
                        __Vtemp_1[7U] = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[6U];
                        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[0U] 
                            = (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[7U] 
                               + (((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rdata) 
                                   << 0x00000018U) 
                                  | vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr));
                        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[1U] 
                            = __Vtemp_1[1U];
                        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[2U] 
                            = __Vtemp_1[2U];
                        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[3U] 
                            = __Vtemp_1[3U];
                        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[4U] 
                            = __Vtemp_1[4U];
                        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[5U] 
                            = __Vtemp_1[5U];
                        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[6U] 
                            = __Vtemp_1[6U];
                        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[7U] 
                            = __Vtemp_1[7U];
                        __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr = 0U;
                    } else {
                        __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr 
                            = (((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rdata) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr 
                                                      >> 8U)));
                    }
                }
                if ((0x20U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))) {
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt = 0U;
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state = 4U;
                }
            } else {
                __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt)));
                if ((8U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))) {
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[0U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_new;
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[1U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[0U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[2U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[1U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[3U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[2U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[4U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[3U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[5U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[4U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[6U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[5U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[7U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[6U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[8U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[7U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[9U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[8U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[10U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[9U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[11U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[10U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[12U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[11U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[13U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[12U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[14U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[13U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[15U] 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[14U];
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t 
                        = (0x0000003fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t)));
                    __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt = 0U;
                    if ((0x3fU == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t))) {
                        __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state = 3U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt)));
            if ((0x1fU == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))) {
                __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt = 0U;
                __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state = 2U;
            }
        } else if (((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__init) 
                    | (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__next))) {
            if (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__init) {
                VL_ASSIGN_W(256, vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg, Vtop__ConstPool__CONST_ha51a22ca_0);
            }
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[0U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[0U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[1U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[1U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[2U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[2U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[3U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[3U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[4U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[4U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[5U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[5U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[6U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[6U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[7U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[7U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[8U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[8U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[9U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[9U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[10U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[10U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[11U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[11U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[12U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[12U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[13U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[13U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[14U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[14U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[15U] 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[15U];
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t = 0U;
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt = 0U;
            __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state = 1U;
        }
    } else {
        VL_ASSIGN_W(256, vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg, Vtop__ConstPool__CONST_ha51a22ca_0);
        __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state = 0U;
        __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t = 0U;
        __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt = 0U;
        VL_ASSIGN_W(512, __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg, Vtop__ConstPool__CONST_h93e1b771_0);
        __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr = 0U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest_valid = 0U;
    }
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[0U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[1U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[2U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[3U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[4U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[5U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[6U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[6U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[7U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[7U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[8U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[8U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[9U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[9U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[10U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[10U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[11U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[11U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[12U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[12U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[13U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[13U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[14U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[14U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[15U] 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[15U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state 
        = __Vdly__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_dvalid 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest_valid;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__k_word 
        = Vtop__ConstPool__CONST_h7be248c9_0[(0x07ffffffU 
                                              & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t))];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[0U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[1U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[2U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[3U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[4U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[5U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[6U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[6U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[7U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg[7U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w9 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[6U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[14U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w0 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg[15U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__b_base 
        = (0x00000018U & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt) 
                          << 3U));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base 
        = (0x000000e0U & ((~ ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt) 
                              >> 2U)) << 5U));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__ready 
        = (0U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rd = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_stb = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_addr = 0U;
    if ((4U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state)))) {
                vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_stb = 1U;
                vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_addr 
                    = (0x00000020U | (3U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt)));
            }
        }
    } else if ((2U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_stb 
            = ((1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) 
               || (1U & (~ ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt) 
                            >> 5U))));
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_addr 
            = ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))
                ? (0x0000001fU & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))
                : ((8U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))
                    ? 0x3fU : ((4U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))
                                ? (0x00000024U | (3U 
                                                  & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt)))
                                : (0x00000020U | (3U 
                                                  & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))))));
    } else if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_stb = 1U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_addr 
            = (0x0000001fU & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt));
    }
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[0U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[1U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[2U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[3U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[4U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[5U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[6U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[6U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest[7U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest[7U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig0 
        = (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1 
             << 0x00000019U) | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1 
                                >> 7U)) ^ (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1 
                                               >> 0x00000012U)) 
                                           ^ (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1 
                                              >> 3U)));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig1 
        = (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14 
             << 0x0000000fU) | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14 
                                >> 0x00000011U)) ^ 
           (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14 
              << 0x0000000dU) | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14 
                                 >> 0x00000013U)) ^ 
            (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14 
             >> 0x0000000aU)));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_word 
        = (((0U == (0x0000001fU & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base)))
             ? 0U : (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg
                     [(((IData)(0x0000001fU) + (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base)) 
                       >> 5U)] << ((IData)(0x00000020U) 
                                   - (0x0000001fU & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base))))) 
           | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg
              [((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base) 
                >> 5U)] >> (0x0000001fU & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base))));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_ready 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__ready;
    if ((1U & (~ ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
                vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rd = 1U;
            }
        }
    }
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ui_in 
        = (((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_stb) 
            << 7U) | (((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rd) 
                       << 6U) | (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_addr)));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_new 
        = (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig1 
           + (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w9 
              + (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w0 
                 + vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig0)));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_wdata = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state)))) {
                if ((1U & (~ ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt) 
                              >> 3U)))) {
                    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_wdata 
                        = (0x000000ffU & ((4U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt))
                                           ? (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__k_word 
                                              >> (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__b_base))
                                           : (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w0 
                                              >> (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__b_base))));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state))) {
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_wdata 
                = (0x000000ffU & (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_word 
                                  >> (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__b_base)));
        }
    }
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v0;
    __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v0 = 0;
    CData/*0:0*/ __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v0;
    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v0 = 0;
    IData/*31:0*/ __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v1;
    __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v1 = 0;
    IData/*31:0*/ __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v2;
    __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v2 = 0;
    IData/*31:0*/ __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v3;
    __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v3 = 0;
    IData/*31:0*/ __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v4;
    __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v4 = 0;
    IData/*31:0*/ __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v5;
    __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v5 = 0;
    IData/*31:0*/ __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v6;
    __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v6 = 0;
    IData/*31:0*/ __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v7;
    __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v7 = 0;
    CData/*7:0*/ __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v8;
    __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v8 = 0;
    CData/*3:0*/ __VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v8;
    __VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v8 = 0;
    CData/*0:0*/ __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v8;
    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v8 = 0;
    CData/*7:0*/ __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v9;
    __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v9 = 0;
    CData/*3:0*/ __VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v9;
    __VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v9 = 0;
    CData/*0:0*/ __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v9;
    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v9 = 0;
    CData/*7:0*/ __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v10;
    __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v10 = 0;
    CData/*3:0*/ __VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v10;
    __VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v10 = 0;
    CData/*0:0*/ __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v10;
    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v10 = 0;
    CData/*7:0*/ __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v11;
    __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v11 = 0;
    CData/*3:0*/ __VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v11;
    __VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v11 = 0;
    CData/*0:0*/ __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v11;
    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v11 = 0;
    CData/*0:0*/ __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v12;
    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v12 = 0;
    CData/*0:0*/ __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v13;
    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v13 = 0;
    // Body
    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v0 = 0U;
    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v8 = 0U;
    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v9 = 0U;
    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v10 = 0U;
    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v11 = 0U;
    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v12 = 0U;
    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v13 = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_ready 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__rst_n;
    if (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__rst_n) {
        if (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_clk) {
            if (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_we) {
                vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_out 
                    = ((0x3fU == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr))
                        ? 0U : (0x000000ffU & ((2U 
                                                & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr))
                                                    ? 
                                                   (((9U 
                                                      >= 
                                                      (0x0000000fU 
                                                       & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                                          >> 2U)))
                                                      ? vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file
                                                     [
                                                     (0x0000000fU 
                                                      & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                                         >> 2U))]
                                                      : 0U) 
                                                    >> 0x18U)
                                                    : 
                                                   (((9U 
                                                      >= 
                                                      (0x0000000fU 
                                                       & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                                          >> 2U)))
                                                      ? vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file
                                                     [
                                                     (0x0000000fU 
                                                      & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                                         >> 2U))]
                                                      : 0U) 
                                                    >> 0x10U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr))
                                                    ? 
                                                   (((9U 
                                                      >= 
                                                      (0x0000000fU 
                                                       & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                                          >> 2U)))
                                                      ? vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file
                                                     [
                                                     (0x0000000fU 
                                                      & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                                         >> 2U))]
                                                      : 0U) 
                                                    >> 8U)
                                                    : 
                                                   ((9U 
                                                     >= 
                                                     (0x0000000fU 
                                                      & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                                         >> 2U)))
                                                     ? vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file
                                                    [
                                                    (0x0000000fU 
                                                     & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                                        >> 2U))]
                                                     : 0U)))));
            } else if ((0x3fU == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr))) {
                __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v0 
                    = (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp1 
                       + vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp2);
                __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v0 = 1U;
                __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v1 
                    = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U];
                __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v2 
                    = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[1U];
                __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v3 
                    = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[2U];
                __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v4 
                    = (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[3U] 
                       + vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp1);
                __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v5 
                    = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U];
                __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v6 
                    = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[5U];
                __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v7 
                    = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[6U];
            } else if ((2U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr))) {
                if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr))) {
                    if ((9U >= (0x0000000fU & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                               >> 2U)))) {
                        __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v8 
                            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_in;
                        __VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v8 
                            = (0x0000000fU & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                              >> 2U));
                        __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v8 = 1U;
                    }
                } else if ((9U >= (0x0000000fU & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                                  >> 2U)))) {
                    __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v9 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_in;
                    __VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v9 
                        = (0x0000000fU & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                          >> 2U));
                    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v9 = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr))) {
                if ((9U >= (0x0000000fU & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                           >> 2U)))) {
                    __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v10 
                        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_in;
                    __VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v10 
                        = (0x0000000fU & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                          >> 2U));
                    __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v10 = 1U;
                }
            } else if ((9U >= (0x0000000fU & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                              >> 2U)))) {
                __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v11 
                    = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_in;
                __VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v11 
                    = (0x0000000fU & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr) 
                                      >> 2U));
                __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v11 = 1U;
            }
        }
    } else {
        __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v12 = 1U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_out = 0U;
        __VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v13 = 1U;
    }
    if (__VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v0) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
            = __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v0;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[1U] 
            = __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v1;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[2U] 
            = __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v2;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[3U] 
            = __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v3;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
            = __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v4;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[5U] 
            = __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v5;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[6U] 
            = __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v6;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[7U] 
            = __VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v7;
    }
    if (__VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v8) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[__VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v8] 
            = ((0x00ffffffU & vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file
                [__VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v8]) 
               | ((IData)(__VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v8) 
                  << 0x00000018U));
    }
    if (__VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v9) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[__VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v9] 
            = ((0xff00ffffU & vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file
                [__VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v9]) 
               | ((IData)(__VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v9) 
                  << 0x00000010U));
    }
    if (__VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v10) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[__VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v10] 
            = ((0xffff00ffU & vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file
                [__VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v10]) 
               | ((IData)(__VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v10) 
                  << 8U));
    }
    if (__VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v11) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[__VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v11] 
            = ((0xffffff00U & vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file
                [__VdlyDim0__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v11]) 
               | (IData)(__VdlyVal__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v11));
    }
    if (__VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v12) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] = 0U;
    }
    if (__VdlySet__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file__v13) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[1U] = 0U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[2U] = 0U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[3U] = 0U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] = 0U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[5U] = 0U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[6U] = 0U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[7U] = 0U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[8U] = 0U;
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[9U] = 0U;
    }
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_out 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_out;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s0 
        = (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
             << 0x0000001eU) | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
                                >> 2U)) ^ (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
                                             << 0x00000013U) 
                                            | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
                                               >> 0x0000000dU)) 
                                           ^ ((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
                                               << 0x0000000aU) 
                                              | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
                                                 >> 0x00000016U))));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__maj 
        = ((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
            & vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[1U]) 
           ^ ((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[0U] 
               & vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[2U]) 
              ^ (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[1U] 
                 & vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[2U])));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s1 
        = (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
             << 0x0000001aU) | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
                                >> 6U)) ^ (((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
                                             << 0x00000015U) 
                                            | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
                                               >> 0x0000000bU)) 
                                           ^ ((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
                                               << 7U) 
                                              | (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
                                                 >> 0x00000019U))));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ch 
        = ((vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U] 
            & vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[5U]) 
           ^ ((~ vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[4U]) 
              & vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[6U]));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rdata 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_out;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp2 
        = (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s0 
           + vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__maj);
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp1 
        = (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s1 
           + (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ch 
              + (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[7U] 
                 + (vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[9U] 
                    + vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file[8U]))));
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    // Body
    vlSelfRef.auth_chip_top__DOT__msg[0U] = vlSelfRef.auth_chip_top__DOT__ctr;
    vlSelfRef.auth_chip_top__DOT__msg[1U] = vlSelfRef.auth_chip_top__DOT__nonce[0U];
    vlSelfRef.auth_chip_top__DOT__msg[2U] = vlSelfRef.auth_chip_top__DOT__nonce[1U];
    vlSelfRef.auth_chip_top__DOT__msg[3U] = vlSelfRef.auth_chip_top__DOT__nonce[2U];
    vlSelfRef.auth_chip_top__DOT__msg[4U] = vlSelfRef.auth_chip_top__DOT__nonce[3U];
    vlSelfRef.auth_chip_top__DOT__msg[5U] = (IData)(vlSelfRef.auth_chip_top__DOT__uid);
    vlSelfRef.auth_chip_top__DOT__msg[6U] = (IData)(
                                                    (vlSelfRef.auth_chip_top__DOT__uid 
                                                     >> 0x00000020U));
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__status 
        = (((2U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd))
             ? ((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tamper)
                 ? 0xe2U : ((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__locked)
                             ? (0xe4U & (- (IData)((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr_full))))
                             : 0xe1U)) : (((0x10U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)) 
                                           | ((0x11U 
                                               == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)) 
                                              | (0x1fU 
                                                 == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd))))
                                           ? ((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tamper)
                                               ? 0xe2U
                                               : (0xe1U 
                                                  & (- (IData)((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__locked)))))
                                           : 0xe3U)) 
           & (- (IData)((1U != (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)))));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[0U] 
        = vlSelfRef.auth_chip_top__DOT__msg[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[1U] 
        = vlSelfRef.auth_chip_top__DOT__msg[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[2U] 
        = vlSelfRef.auth_chip_top__DOT__msg[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[3U] 
        = vlSelfRef.auth_chip_top__DOT__msg[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[4U] 
        = vlSelfRef.auth_chip_top__DOT__msg[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[5U] 
        = vlSelfRef.auth_chip_top__DOT__msg[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[6U] 
        = vlSelfRef.auth_chip_top__DOT__msg[6U];
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ok 
        = (0U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__status));
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[0U] = 0x000002e0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[1U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[2U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[3U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[4U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[5U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[6U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[7U] = 0U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[8U] = 0x80000000U;
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[9U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[10U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[11U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[12U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[13U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[14U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[15U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg[6U];
    __VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__in_exec) 
                                      & (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ok));
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__key_we 
        = ((0x10U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__uid_we 
        = ((0x11U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__lock_set 
        = ((0x1fU == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr_incr 
        = ((2U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.auth_chip_top__DOT__key_we = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__key_we;
    vlSelfRef.auth_chip_top__DOT__uid_we = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__uid_we;
    vlSelfRef.auth_chip_top__DOT__lock_set = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__lock_set;
    vlSelfRef.auth_chip_top__DOT__ctr_incr = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr_incr;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_we 
        = vlSelfRef.auth_chip_top__DOT__key_we;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__uid_we 
        = vlSelfRef.auth_chip_top__DOT__uid_we;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__lock_set 
        = vlSelfRef.auth_chip_top__DOT__lock_set;
    vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_incr 
        = vlSelfRef.auth_chip_top__DOT__ctr_incr;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__phase))) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[0U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[0U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[1U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[1U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[2U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[2U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[3U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[3U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[4U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[4U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[5U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[5U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[6U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[6U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[7U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[7U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[8U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[8U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[9U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[9U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[10U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[10U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[11U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[11U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[12U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[12U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[13U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[13U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[14U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[14U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[15U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad[15U];
    } else if ((1U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__phase))) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[0U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[0U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[1U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[1U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[2U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[2U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[3U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[3U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[4U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[4U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[5U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[5U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[6U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[6U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[7U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[7U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[8U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[8U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[9U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[9U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[10U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[10U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[11U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[11U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[12U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[12U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[13U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[13U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[14U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[14U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[15U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg[15U];
    } else if ((2U == (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__phase))) {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[0U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[0U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[1U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[1U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[2U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[2U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[3U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[3U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[4U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[4U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[5U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[5U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[6U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[6U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[7U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[7U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[8U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[8U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[9U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[9U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[10U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[10U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[11U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[11U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[12U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[12U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[13U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[13U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[14U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[14U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[15U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad[15U];
    } else {
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[0U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[0U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[1U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[1U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[2U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[2U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[3U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[3U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[4U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[4U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[5U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[5U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[6U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[6U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[7U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[7U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[8U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[8U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[9U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[9U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[10U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[10U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[11U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[11U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[12U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[12U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[13U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[13U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[14U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[14U];
        vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[15U] 
            = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner[15U];
    }
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[0U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[0U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[1U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[1U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[2U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[2U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[3U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[3U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[4U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[4U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[5U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[5U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[6U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[6U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[7U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[7U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[8U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[8U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[9U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[9U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[10U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[10U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[11U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[11U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[12U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[12U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[13U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[13U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[14U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[14U];
    vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block[15U] 
        = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block[15U];
}

void Vtop___024root___eval_body__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_body__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            vlSelfRef.auth_chip_top__DOT__rst_ff = 
                ((IData)(vlSelfRef.auth_chip_top__DOT__rst_n)
                  ? (1U | (2U & ((IData)(vlSelfRef.auth_chip_top__DOT__rst_ff) 
                                 << 1U))) : 0U);
            vlSelfRef.auth_chip_top__DOT__rst_n_s = 
                (1U & ((IData)(vlSelfRef.auth_chip_top__DOT__rst_ff) 
                       >> 1U));
        }
    }
    if ((0x0000000000003000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__7
            vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rst_n 
                = vlSelfRef.auth_chip_top__DOT__rst_n_s;
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__rst_n 
                = vlSelfRef.auth_chip_top__DOT__rst_n_s;
            vlSelfRef.auth_chip_top__DOT__u_store__DOT__rst_n 
                = vlSelfRef.auth_chip_top__DOT__rst_n_s;
            vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rst_n 
                = vlSelfRef.auth_chip_top__DOT__rst_n_s;
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__rst_n;
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__rst_n 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n;
        }
    }
    if ((0x0000000000003000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__8
            vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tx_ready 
                = vlSelfRef.auth_chip_top__DOT__tx_ready;
            vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rx_valid 
                = vlSelfRef.auth_chip_top__DOT__rx_valid;
            vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rx_data 
                = vlSelfRef.auth_chip_top__DOT__rx_data;
        }
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__9
            vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag_valid 
                = vlSelfRef.auth_chip_top__DOT__tag_valid;
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__init 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_init;
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__next 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_next;
        }
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__10
            vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tamper 
                = vlSelfRef.auth_chip_top__DOT__tamper;
        }
    }
    if ((0x0000000000000f0cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_byte 
                = (0x000000ffU & ((0U == (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx))
                                   ? (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_status)
                                   : ((8U >= (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx))
                                       ? (IData)((vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__uid 
                                                  >> 
                                                  (0x00000038U 
                                                   & ((- (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)) 
                                                      << 3U))))
                                       : ((0x0cU >= (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx))
                                           ? (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr 
                                              >> (0x00000018U 
                                                  & ((- (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)) 
                                                     << 3U)))
                                           : (((0U 
                                                == 
                                                (0x00000018U 
                                                 & (((IData)(0x0cU) 
                                                     - (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)) 
                                                    << 3U)))
                                                ? 0U
                                                : (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag
                                                   [
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x000000f8U 
                                                      & (((IData)(0x0cU) 
                                                          - (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)) 
                                                         << 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x00000018U 
                                                     & (((IData)(0x0cU) 
                                                         - (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)) 
                                                        << 3U))))) 
                                              | (vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag
                                                 [(7U 
                                                   & (((IData)(0x0cU) 
                                                       - (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)) 
                                                      >> 2U))] 
                                                 >> 
                                                 (0x00000018U 
                                                  & (((IData)(0x0cU) 
                                                      - (IData)(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx)) 
                                                     << 3U))))))));
            vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tx_data 
                = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_byte;
            vlSelfRef.auth_chip_top__DOT__tx_data = vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tx_data;
            vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx_data 
                = vlSelfRef.auth_chip_top__DOT__tx_data;
        }
    }
    if ((0x0000000000000f00ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__11
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_clk 
                = (1U & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ui_in) 
                         >> 7U));
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr 
                = (0x0000003fU & (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ui_in));
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_in 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_wdata;
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_we 
                = (1U & ((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ui_in) 
                         >> 6U));
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_oe 
                = (0x000000ffU & (- (IData)((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_we))));
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__tt_uio_oe 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_oe;
        }
    }
    if ((0x0000000000000f0cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x00000000000000f0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uo_out 
                = (((IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_we) 
                    << 1U) | (IData)(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_ready));
            vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__tt_uo_out 
                = vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uo_out;
        }
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.uart_rx & 0xfeU)))) {
        Verilated::overWidthError("uart_rx");
    }
    if (VL_UNLIKELY(((vlSelfRef.tamper_n & 0xfeU)))) {
        Verilated::overWidthError("tamper_n");
    }
}
#endif  // VL_DEBUG
