// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(uart_rx,0,0);
        VL_IN8(tamper_n,0,0);
        VL_OUT8(uart_tx,0,0);
        VL_OUT8(busy,0,0);
        VL_OUT8(locked,0,0);
        VL_OUT8(alarm,0,0);
        CData/*0:0*/ auth_chip_top__DOT__clk;
        CData/*0:0*/ auth_chip_top__DOT__rst_n;
        CData/*0:0*/ auth_chip_top__DOT__uart_rx;
        CData/*0:0*/ auth_chip_top__DOT__tamper_n;
        CData/*0:0*/ auth_chip_top__DOT__uart_tx;
        CData/*0:0*/ auth_chip_top__DOT__busy;
        CData/*0:0*/ auth_chip_top__DOT__locked;
        CData/*0:0*/ auth_chip_top__DOT__alarm;
        CData/*1:0*/ auth_chip_top__DOT__rst_ff;
        CData/*0:0*/ auth_chip_top__DOT__rst_n_s;
        CData/*7:0*/ auth_chip_top__DOT__rx_data;
        CData/*7:0*/ auth_chip_top__DOT__tx_data;
        CData/*0:0*/ auth_chip_top__DOT__rx_valid;
        CData/*0:0*/ auth_chip_top__DOT__tx_valid;
        CData/*0:0*/ auth_chip_top__DOT__tx_ready;
        CData/*0:0*/ auth_chip_top__DOT__key_we;
        CData/*0:0*/ auth_chip_top__DOT__uid_we;
        CData/*0:0*/ auth_chip_top__DOT__lock_set;
        CData/*0:0*/ auth_chip_top__DOT__ctr_incr;
        CData/*0:0*/ auth_chip_top__DOT__tamper;
        CData/*0:0*/ auth_chip_top__DOT__ctr_full;
        CData/*0:0*/ auth_chip_top__DOT__auth_start;
        CData/*0:0*/ auth_chip_top__DOT__tag_valid;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__clk;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__rst_n;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__start;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__busy;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__tag_valid;
        CData/*1:0*/ auth_chip_top__DOT__u_hmac__DOT__state;
        CData/*1:0*/ auth_chip_top__DOT__u_hmac__DOT__phase;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__core_init;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__core_next;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__core_ready;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__core_dvalid;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__clk;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__init;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__next;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__ready;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest_valid;
        CData/*2:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state;
        CData/*5:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t;
        CData/*5:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_stb;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rd;
        CData/*5:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_addr;
        CData/*7:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_wdata;
        CData/*7:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rdata;
        CData/*7:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__tt_uo_out;
        CData/*7:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__tt_uio_oe;
        CData/*7:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base;
        CData/*4:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__b_base;
        CData/*7:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ui_in;
        CData/*7:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uo_out;
        CData/*7:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_in;
        CData/*7:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_out;
    };
    struct {
        CData/*7:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_oe;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ena;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__clk;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__rst_n;
        CData/*5:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_we;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_clk;
        CData/*0:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_ready;
        CData/*7:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_out;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__clk;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__rst_n;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__tamper_n;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__key_we;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__uid_we;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__lock_set;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__ctr_incr;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__locked;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__tamper;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__ctr_full;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__lock_reg;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__tamper_reg;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__tamper_s1;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__tamper_s2;
        CData/*0:0*/ auth_chip_top__DOT__u_store__DOT__tamper_hit;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__clk;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__rst_n;
        CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__rx_data;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__rx_valid;
        CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__tx_data;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__tx_valid;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__tx_ready;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__auth_start;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__tag_valid;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__key_we;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__uid_we;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__lock_set;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__ctr_incr;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__locked;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__tamper;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__ctr_full;
        CData/*2:0*/ auth_chip_top__DOT__u_protocol__DOT__state;
        CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__cmd;
        CData/*5:0*/ auth_chip_top__DOT__u_protocol__DOT__need;
        CData/*5:0*/ auth_chip_top__DOT__u_protocol__DOT__got;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__started;
        CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__resp_status;
        CData/*5:0*/ auth_chip_top__DOT__u_protocol__DOT__resp_len;
        CData/*5:0*/ auth_chip_top__DOT__u_protocol__DOT__resp_idx;
        CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__status;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__in_exec;
        CData/*0:0*/ auth_chip_top__DOT__u_protocol__DOT__ok;
        CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__resp_byte;
        CData/*0:0*/ auth_chip_top__DOT__u_uart__DOT__clk;
        CData/*0:0*/ auth_chip_top__DOT__u_uart__DOT__rst_n;
        CData/*0:0*/ auth_chip_top__DOT__u_uart__DOT__rx;
        CData/*0:0*/ auth_chip_top__DOT__u_uart__DOT__tx;
        CData/*7:0*/ auth_chip_top__DOT__u_uart__DOT__rx_data;
        CData/*0:0*/ auth_chip_top__DOT__u_uart__DOT__rx_valid;
        CData/*7:0*/ auth_chip_top__DOT__u_uart__DOT__tx_data;
        CData/*0:0*/ auth_chip_top__DOT__u_uart__DOT__tx_valid;
        CData/*0:0*/ auth_chip_top__DOT__u_uart__DOT__tx_ready;
        CData/*0:0*/ auth_chip_top__DOT__u_uart__DOT__rx_s1;
        CData/*0:0*/ auth_chip_top__DOT__u_uart__DOT__rx_s2;
        CData/*2:0*/ auth_chip_top__DOT__u_uart__DOT__r_state;
    };
    struct {
        CData/*2:0*/ auth_chip_top__DOT__u_uart__DOT__r_bit;
        CData/*7:0*/ auth_chip_top__DOT__u_uart__DOT__r_sh;
        CData/*3:0*/ auth_chip_top__DOT__u_uart__DOT__t_n;
        CData/*0:0*/ auth_chip_top__DOT__u_uart__DOT__t_busy;
        CData/*0:0*/ auth_chip_top__DOT__u_uart__DOT__t_out;
        CData/*0:0*/ __Vtrigprevexpr___TOP__auth_chip_top__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__auth_chip_top__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__auth_chip_top__DOT__u_store__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__auth_chip_top__DOT__u_store__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__auth_chip_top__DOT__u_protocol__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__auth_chip_top__DOT__u_protocol__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__auth_chip_top__DOT__u_uart__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__auth_chip_top__DOT__u_uart__DOT__rst_n__0;
        SData/*15:0*/ auth_chip_top__DOT__u_uart__DOT__r_cnt;
        SData/*9:0*/ auth_chip_top__DOT__u_uart__DOT__t_sh;
        SData/*15:0*/ auth_chip_top__DOT__u_uart__DOT__t_cnt;
        VlWide<8>/*255:0*/ auth_chip_top__DOT__wr_data;
        IData/*31:0*/ auth_chip_top__DOT__ctr;
        VlWide<8>/*255:0*/ auth_chip_top__DOT__key;
        VlWide<4>/*127:0*/ auth_chip_top__DOT__nonce;
        VlWide<8>/*255:0*/ auth_chip_top__DOT__tag;
        VlWide<7>/*223:0*/ auth_chip_top__DOT__msg;
        VlWide<8>/*255:0*/ auth_chip_top__DOT__u_hmac__DOT__key;
        VlWide<7>/*223:0*/ auth_chip_top__DOT__u_hmac__DOT__msg;
        VlWide<8>/*255:0*/ auth_chip_top__DOT__u_hmac__DOT__tag;
        VlWide<8>/*255:0*/ auth_chip_top__DOT__u_hmac__DOT__inner;
        VlWide<8>/*255:0*/ auth_chip_top__DOT__u_hmac__DOT__core_digest;
        VlWide<16>/*511:0*/ auth_chip_top__DOT__u_hmac__DOT__core_block;
        VlWide<16>/*511:0*/ auth_chip_top__DOT__u_hmac__DOT__blk_ipad;
        VlWide<16>/*511:0*/ auth_chip_top__DOT__u_hmac__DOT__blk_opad;
        VlWide<16>/*511:0*/ auth_chip_top__DOT__u_hmac__DOT__blk_msg;
        VlWide<16>/*511:0*/ auth_chip_top__DOT__u_hmac__DOT__blk_inner;
        VlWide<16>/*511:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block;
        VlWide<8>/*255:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest;
        VlWide<8>/*255:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg;
        VlWide<16>/*511:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg;
        IData/*23:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w0;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w9;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig0;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig1;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_new;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_word;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__k_word;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s1;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ch;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp1;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s0;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__maj;
        IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp2;
        VlWide<8>/*255:0*/ auth_chip_top__DOT__u_store__DOT__wr_data;
        VlWide<8>/*255:0*/ auth_chip_top__DOT__u_store__DOT__key;
        IData/*31:0*/ auth_chip_top__DOT__u_store__DOT__ctr;
        VlWide<8>/*255:0*/ auth_chip_top__DOT__u_store__DOT__key_reg;
        IData/*31:0*/ auth_chip_top__DOT__u_store__DOT__ctr_reg;
        VlWide<4>/*127:0*/ auth_chip_top__DOT__u_protocol__DOT__nonce;
    };
    struct {
        VlWide<8>/*255:0*/ auth_chip_top__DOT__u_protocol__DOT__tag;
        VlWide<8>/*255:0*/ auth_chip_top__DOT__u_protocol__DOT__wr_data;
        IData/*31:0*/ auth_chip_top__DOT__u_protocol__DOT__ctr;
        VlWide<8>/*255:0*/ auth_chip_top__DOT__u_protocol__DOT__data_reg;
        IData/*31:0*/ auth_chip_top__DOT__u_protocol__DOT__timer;
        QData/*63:0*/ auth_chip_top__DOT__uid;
        QData/*63:0*/ auth_chip_top__DOT__u_hmac__DOT__len_inner;
        QData/*63:0*/ auth_chip_top__DOT__u_store__DOT__uid;
        QData/*63:0*/ auth_chip_top__DOT__u_store__DOT__uid_reg;
        QData/*63:0*/ auth_chip_top__DOT__u_protocol__DOT__uid;
        VlUnpacked<IData/*31:0*/, 10> auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*1:0*/ auth_chip_top__DOT__u_hmac__DOT__S_IDLE = 0U;
    static constexpr CData/*1:0*/ auth_chip_top__DOT__u_hmac__DOT__S_SEND = 1U;
    static constexpr CData/*1:0*/ auth_chip_top__DOT__u_hmac__DOT__S_WAIT = 2U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_IDLE = 0U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_LOAD = 1U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_ROUND = 2U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_READ = 3U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_WIPE = 4U;
    static constexpr CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__CMD_GET_UID = 1U;
    static constexpr CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__CMD_AUTH = 2U;
    static constexpr CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__CMD_WRITE_KEY = 0x10U;
    static constexpr CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__CMD_WRITE_UID = 0x11U;
    static constexpr CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__CMD_LOCK = 0x1fU;
    static constexpr CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__ST_OK = 0U;
    static constexpr CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__ST_LOCKED = 0xe1U;
    static constexpr CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__ST_TAMPER = 0xe2U;
    static constexpr CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__ST_BADCMD = 0xe3U;
    static constexpr CData/*7:0*/ auth_chip_top__DOT__u_protocol__DOT__ST_CTRFUL = 0xe4U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_protocol__DOT__S_CMD = 0U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_protocol__DOT__S_DATA = 1U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_protocol__DOT__S_EXEC = 2U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_protocol__DOT__S_HMAC = 3U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_protocol__DOT__S_RESP = 4U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_uart__DOT__R_IDLE = 0U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_uart__DOT__R_START = 1U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_uart__DOT__R_DATA = 2U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_uart__DOT__R_STOP = 3U;
    static constexpr CData/*2:0*/ auth_chip_top__DOT__u_uart__DOT__R_RECOVER = 4U;
    static constexpr SData/*15:0*/ auth_chip_top__DOT__u_uart__DOT__DIV = 0x000aU;
    static constexpr SData/*15:0*/ auth_chip_top__DOT__u_uart__DOT__HALF = 5U;
    static constexpr IData/*31:0*/ auth_chip_top__DOT__CLK_HZ = 0x02faf080U;
    static constexpr IData/*31:0*/ auth_chip_top__DOT__BAUD = 0x004c4b40U;
    static constexpr IData/*31:0*/ auth_chip_top__DOT__u_hmac__DOT__MSG_BITS = 0x000000e0U;
    static constexpr VlWide<8>/*255:0*/ auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__IV = VlWide<8>{{
            0x5be0cd19, 0x1f83d9ab, 0x9b05688c, 0x510e527f,
            0xa54ff53a, 0x3c6ef372, 0xbb67ae85, 0x6a09e667
    }};
    static constexpr IData/*31:0*/ auth_chip_top__DOT__u_protocol__DOT__TIMEOUT_CYCLES = 0x004c4b40U;
    static constexpr IData/*31:0*/ auth_chip_top__DOT__u_uart__DOT__CLK_HZ = 0x02faf080U;
    static constexpr IData/*31:0*/ auth_chip_top__DOT__u_uart__DOT__BAUD = 0x004c4b40U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
