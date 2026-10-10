// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 10>& __VdtypeVar);

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+2,(vlSelfRef.uart_rx));
    bufp->chgBit(oldp+3,(vlSelfRef.tamper_n));
    bufp->chgBit(oldp+4,(vlSelfRef.uart_tx));
    bufp->chgBit(oldp+5,(vlSelfRef.busy));
    bufp->chgBit(oldp+6,(vlSelfRef.locked));
    bufp->chgBit(oldp+7,(vlSelfRef.alarm));
    bufp->chgBit(oldp+8,(vlSelfRef.auth_chip_top__DOT__clk));
    bufp->chgBit(oldp+9,(vlSelfRef.auth_chip_top__DOT__rst_n));
    bufp->chgBit(oldp+10,(vlSelfRef.auth_chip_top__DOT__uart_rx));
    bufp->chgBit(oldp+11,(vlSelfRef.auth_chip_top__DOT__tamper_n));
    bufp->chgBit(oldp+12,(vlSelfRef.auth_chip_top__DOT__uart_tx));
    bufp->chgBit(oldp+13,(vlSelfRef.auth_chip_top__DOT__busy));
    bufp->chgBit(oldp+14,(vlSelfRef.auth_chip_top__DOT__locked));
    bufp->chgBit(oldp+15,(vlSelfRef.auth_chip_top__DOT__alarm));
    bufp->chgCData(oldp+16,(vlSelfRef.auth_chip_top__DOT__rst_ff),2);
    bufp->chgBit(oldp+17,(vlSelfRef.auth_chip_top__DOT__rst_n_s));
    bufp->chgCData(oldp+18,(vlSelfRef.auth_chip_top__DOT__rx_data),8);
    bufp->chgCData(oldp+19,(vlSelfRef.auth_chip_top__DOT__tx_data),8);
    bufp->chgBit(oldp+20,(vlSelfRef.auth_chip_top__DOT__rx_valid));
    bufp->chgBit(oldp+21,(vlSelfRef.auth_chip_top__DOT__tx_valid));
    bufp->chgBit(oldp+22,(vlSelfRef.auth_chip_top__DOT__tx_ready));
    bufp->chgWData(oldp+23,(vlSelfRef.auth_chip_top__DOT__wr_data),256);
    bufp->chgBit(oldp+31,(vlSelfRef.auth_chip_top__DOT__key_we));
    bufp->chgBit(oldp+32,(vlSelfRef.auth_chip_top__DOT__uid_we));
    bufp->chgBit(oldp+33,(vlSelfRef.auth_chip_top__DOT__lock_set));
    bufp->chgBit(oldp+34,(vlSelfRef.auth_chip_top__DOT__ctr_incr));
    bufp->chgQData(oldp+35,(vlSelfRef.auth_chip_top__DOT__uid),64);
    bufp->chgIData(oldp+37,(vlSelfRef.auth_chip_top__DOT__ctr),32);
    bufp->chgBit(oldp+38,(vlSelfRef.auth_chip_top__DOT__tamper));
    bufp->chgBit(oldp+39,(vlSelfRef.auth_chip_top__DOT__ctr_full));
    bufp->chgWData(oldp+40,(vlSelfRef.auth_chip_top__DOT__key),256);
    bufp->chgWData(oldp+48,(vlSelfRef.auth_chip_top__DOT__nonce),128);
    bufp->chgBit(oldp+52,(vlSelfRef.auth_chip_top__DOT__auth_start));
    bufp->chgWData(oldp+53,(vlSelfRef.auth_chip_top__DOT__tag),256);
    bufp->chgBit(oldp+61,(vlSelfRef.auth_chip_top__DOT__tag_valid));
    bufp->chgWData(oldp+62,(vlSelfRef.auth_chip_top__DOT__msg),224);
    bufp->chgBit(oldp+69,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__clk));
    bufp->chgBit(oldp+70,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__rst_n));
    bufp->chgBit(oldp+71,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__start));
    bufp->chgWData(oldp+72,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__key),256);
    bufp->chgWData(oldp+80,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__msg),224);
    bufp->chgBit(oldp+87,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__busy));
    bufp->chgBit(oldp+88,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag_valid));
    bufp->chgWData(oldp+89,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__tag),256);
    bufp->chgCData(oldp+97,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__state),2);
    bufp->chgCData(oldp+98,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__phase),2);
    bufp->chgWData(oldp+99,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__inner),256);
    bufp->chgBit(oldp+107,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_init));
    bufp->chgBit(oldp+108,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_next));
    bufp->chgBit(oldp+109,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_ready));
    bufp->chgBit(oldp+110,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_dvalid));
    bufp->chgWData(oldp+111,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_digest),256);
    bufp->chgWData(oldp+119,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__core_block),512);
    bufp->chgWData(oldp+135,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_ipad),512);
    bufp->chgWData(oldp+151,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_opad),512);
    bufp->chgWData(oldp+167,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_msg),512);
    bufp->chgWData(oldp+183,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__blk_inner),512);
    bufp->chgBit(oldp+199,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__clk));
    bufp->chgBit(oldp+200,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n));
    bufp->chgBit(oldp+201,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__init));
    bufp->chgBit(oldp+202,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__next));
    bufp->chgWData(oldp+203,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block),512);
    bufp->chgBit(oldp+219,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__ready));
    bufp->chgBit(oldp+220,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest_valid));
    bufp->chgWData(oldp+221,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest),256);
    bufp->chgCData(oldp+229,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state),3);
    bufp->chgCData(oldp+230,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t),6);
    bufp->chgCData(oldp+231,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt),6);
    bufp->chgWData(oldp+232,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg),256);
    bufp->chgWData(oldp+240,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg),512);
    bufp->chgIData(oldp+256,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr),24);
    bufp->chgIData(oldp+257,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w0),32);
    bufp->chgIData(oldp+258,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1),32);
    bufp->chgIData(oldp+259,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w9),32);
    bufp->chgIData(oldp+260,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14),32);
    bufp->chgIData(oldp+261,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig0),32);
    bufp->chgIData(oldp+262,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig1),32);
    bufp->chgIData(oldp+263,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_new),32);
    bufp->chgBit(oldp+264,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_stb));
    bufp->chgBit(oldp+265,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rd));
    bufp->chgCData(oldp+266,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_addr),6);
    bufp->chgCData(oldp+267,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_wdata),8);
    bufp->chgCData(oldp+268,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rdata),8);
    bufp->chgCData(oldp+269,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__tt_uo_out),8);
    bufp->chgCData(oldp+270,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__tt_uio_oe),8);
    bufp->chgCData(oldp+271,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base),8);
    bufp->chgIData(oldp+272,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_word),32);
    bufp->chgIData(oldp+273,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__k_word),32);
    bufp->chgCData(oldp+274,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__b_base),5);
    bufp->chgCData(oldp+275,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ui_in),8);
    bufp->chgCData(oldp+276,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uo_out),8);
    bufp->chgCData(oldp+277,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_in),8);
    bufp->chgCData(oldp+278,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_out),8);
    bufp->chgCData(oldp+279,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_oe),8);
    bufp->chgBit(oldp+280,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__clk));
    bufp->chgBit(oldp+281,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__rst_n));
    bufp->chgCData(oldp+282,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr),6);
    bufp->chgBit(oldp+283,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_we));
    bufp->chgBit(oldp+284,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_clk));
    bufp->chgBit(oldp+285,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_ready));
    bufp->chgCData(oldp+286,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_out),8);
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 287, vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file);
    bufp->chgIData(oldp+297,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s1),32);
    bufp->chgIData(oldp+298,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ch),32);
    bufp->chgIData(oldp+299,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp1),32);
    bufp->chgIData(oldp+300,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s0),32);
    bufp->chgIData(oldp+301,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__maj),32);
    bufp->chgIData(oldp+302,(vlSelfRef.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp2),32);
    bufp->chgBit(oldp+303,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__clk));
    bufp->chgBit(oldp+304,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rst_n));
    bufp->chgCData(oldp+305,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rx_data),8);
    bufp->chgBit(oldp+306,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__rx_valid));
    bufp->chgCData(oldp+307,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tx_data),8);
    bufp->chgBit(oldp+308,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tx_valid));
    bufp->chgBit(oldp+309,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tx_ready));
    bufp->chgWData(oldp+310,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__nonce),128);
    bufp->chgBit(oldp+314,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__auth_start));
    bufp->chgWData(oldp+315,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag),256);
    bufp->chgBit(oldp+323,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tag_valid));
    bufp->chgWData(oldp+324,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__wr_data),256);
    bufp->chgBit(oldp+332,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__key_we));
    bufp->chgBit(oldp+333,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__uid_we));
    bufp->chgBit(oldp+334,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__lock_set));
    bufp->chgBit(oldp+335,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr_incr));
    bufp->chgQData(oldp+336,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__uid),64);
    bufp->chgIData(oldp+338,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr),32);
    bufp->chgBit(oldp+339,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__locked));
    bufp->chgBit(oldp+340,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__tamper));
    bufp->chgBit(oldp+341,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ctr_full));
    bufp->chgCData(oldp+342,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__state),3);
    bufp->chgCData(oldp+343,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__cmd),8);
    bufp->chgCData(oldp+344,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__need),6);
    bufp->chgCData(oldp+345,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__got),6);
    bufp->chgWData(oldp+346,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__data_reg),256);
    bufp->chgIData(oldp+354,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__timer),32);
    bufp->chgBit(oldp+355,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__started));
    bufp->chgCData(oldp+356,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_status),8);
    bufp->chgCData(oldp+357,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_len),6);
    bufp->chgCData(oldp+358,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_idx),6);
    bufp->chgCData(oldp+359,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__status),8);
    bufp->chgBit(oldp+360,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__in_exec));
    bufp->chgBit(oldp+361,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__ok));
    bufp->chgCData(oldp+362,(vlSelfRef.auth_chip_top__DOT__u_protocol__DOT__resp_byte),8);
    bufp->chgBit(oldp+363,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__clk));
    bufp->chgBit(oldp+364,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__rst_n));
    bufp->chgBit(oldp+365,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_n));
    bufp->chgWData(oldp+366,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__wr_data),256);
    bufp->chgBit(oldp+374,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_we));
    bufp->chgBit(oldp+375,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__uid_we));
    bufp->chgBit(oldp+376,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__lock_set));
    bufp->chgBit(oldp+377,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_incr));
    bufp->chgWData(oldp+378,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__key),256);
    bufp->chgQData(oldp+386,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__uid),64);
    bufp->chgIData(oldp+388,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr),32);
    bufp->chgBit(oldp+389,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__locked));
    bufp->chgBit(oldp+390,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper));
    bufp->chgBit(oldp+391,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_full));
    bufp->chgWData(oldp+392,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__key_reg),256);
    bufp->chgQData(oldp+400,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__uid_reg),64);
    bufp->chgIData(oldp+402,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__ctr_reg),32);
    bufp->chgBit(oldp+403,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__lock_reg));
    bufp->chgBit(oldp+404,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_reg));
    bufp->chgBit(oldp+405,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_s1));
    bufp->chgBit(oldp+406,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_s2));
    bufp->chgBit(oldp+407,(vlSelfRef.auth_chip_top__DOT__u_store__DOT__tamper_hit));
    bufp->chgBit(oldp+408,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__clk));
    bufp->chgBit(oldp+409,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rst_n));
    bufp->chgBit(oldp+410,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx));
    bufp->chgBit(oldp+411,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx));
    bufp->chgCData(oldp+412,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_data),8);
    bufp->chgBit(oldp+413,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_valid));
    bufp->chgCData(oldp+414,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx_data),8);
    bufp->chgBit(oldp+415,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx_valid));
    bufp->chgBit(oldp+416,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__tx_ready));
    bufp->chgBit(oldp+417,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_s1));
    bufp->chgBit(oldp+418,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__rx_s2));
    bufp->chgCData(oldp+419,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_state),3);
    bufp->chgSData(oldp+420,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_cnt),16);
    bufp->chgCData(oldp+421,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_bit),3);
    bufp->chgCData(oldp+422,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__r_sh),8);
    bufp->chgSData(oldp+423,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_sh),10);
    bufp->chgCData(oldp+424,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_n),4);
    bufp->chgSData(oldp+425,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_cnt),16);
    bufp->chgBit(oldp+426,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_busy));
    bufp->chgBit(oldp+427,(vlSelfRef.auth_chip_top__DOT__u_uart__DOT__t_out));
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 10>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[0]),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
