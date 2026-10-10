// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

extern const VlVarTableEntry Vtop___024root__VpiVarTable0[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable3[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable4[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable5[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable6[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable7[];
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[];


// VPI VARIABLE/SCOPE TABLES
#if defined(__GNUC__)
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif
extern const VlVarTableEntry Vtop___024root__VpiVarTable0[] = {
    {"alarm", offsetof(Vtop___024root, alarm), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"busy", offsetof(Vtop___024root, busy), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, clk), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"locked", offsetof(Vtop___024root, locked), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rst_n", offsetof(Vtop___024root, rst_n), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tamper_n", offsetof(Vtop___024root, tamper_n), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"uart_rx", offsetof(Vtop___024root, uart_rx), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"uart_tx", offsetof(Vtop___024root, uart_tx), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[] = {
    {"alarm", offsetof(Vtop___024root, auth_chip_top__DOT__alarm), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"auth_start", offsetof(Vtop___024root, auth_chip_top__DOT__auth_start), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"busy", offsetof(Vtop___024root, auth_chip_top__DOT__busy), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, auth_chip_top__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ctr", offsetof(Vtop___024root, auth_chip_top__DOT__ctr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"ctr_full", offsetof(Vtop___024root, auth_chip_top__DOT__ctr_full), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ctr_incr", offsetof(Vtop___024root, auth_chip_top__DOT__ctr_incr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"key", offsetof(Vtop___024root, auth_chip_top__DOT__key), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {255, 0, 0, 0, 0, 0}},
    {"key_we", offsetof(Vtop___024root, auth_chip_top__DOT__key_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"lock_set", offsetof(Vtop___024root, auth_chip_top__DOT__lock_set), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"locked", offsetof(Vtop___024root, auth_chip_top__DOT__locked), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"msg", offsetof(Vtop___024root, auth_chip_top__DOT__msg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {223, 0, 0, 0, 0, 0}},
    {"nonce", offsetof(Vtop___024root, auth_chip_top__DOT__nonce), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {127, 0, 0, 0, 0, 0}},
    {"rst_ff", offsetof(Vtop___024root, auth_chip_top__DOT__rst_ff), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"rst_n", offsetof(Vtop___024root, auth_chip_top__DOT__rst_n), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rst_n_s", offsetof(Vtop___024root, auth_chip_top__DOT__rst_n_s), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rx_data", offsetof(Vtop___024root, auth_chip_top__DOT__rx_data), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"rx_valid", offsetof(Vtop___024root, auth_chip_top__DOT__rx_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tag", offsetof(Vtop___024root, auth_chip_top__DOT__tag), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {255, 0, 0, 0, 0, 0}},
    {"tag_valid", offsetof(Vtop___024root, auth_chip_top__DOT__tag_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tamper", offsetof(Vtop___024root, auth_chip_top__DOT__tamper), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tamper_n", offsetof(Vtop___024root, auth_chip_top__DOT__tamper_n), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tx_data", offsetof(Vtop___024root, auth_chip_top__DOT__tx_data), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"tx_ready", offsetof(Vtop___024root, auth_chip_top__DOT__tx_ready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tx_valid", offsetof(Vtop___024root, auth_chip_top__DOT__tx_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"uart_rx", offsetof(Vtop___024root, auth_chip_top__DOT__uart_rx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"uart_tx", offsetof(Vtop___024root, auth_chip_top__DOT__uart_tx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"uid", offsetof(Vtop___024root, auth_chip_top__DOT__uid), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"uid_we", offsetof(Vtop___024root, auth_chip_top__DOT__uid_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_data", offsetof(Vtop___024root, auth_chip_top__DOT__wr_data), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {255, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[] = {
    {"blk_inner", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__blk_inner), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {511, 0, 0, 0, 0, 0}},
    {"blk_ipad", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__blk_ipad), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {511, 0, 0, 0, 0, 0}},
    {"blk_msg", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__blk_msg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {511, 0, 0, 0, 0, 0}},
    {"blk_opad", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__blk_opad), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {511, 0, 0, 0, 0, 0}},
    {"busy", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__busy), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"core_block", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__core_block), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {511, 0, 0, 0, 0, 0}},
    {"core_digest", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__core_digest), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {255, 0, 0, 0, 0, 0}},
    {"core_dvalid", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__core_dvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"core_init", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__core_init), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"core_next", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__core_next), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"core_ready", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__core_ready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"inner", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__inner), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {255, 0, 0, 0, 0, 0}},
    {"key", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__key), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {255, 0, 0, 0, 0, 0}},
    {"len_inner", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__len_inner), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"msg", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__msg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {223, 0, 0, 0, 0, 0}},
    {"phase", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__phase), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"rst_n", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__rst_n), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"start", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__start), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"state", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__state), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"tag", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__tag), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {255, 0, 0, 0, 0, 0}},
    {"tag_valid", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__tag_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable3[] = {
    {"b_base", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__b_base), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {4, 0, 0, 0, 0, 0}},
    {"block", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__block), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {511, 0, 0, 0, 0, 0}},
    {"bus_addr", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"bus_rd", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rd), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bus_rdata", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_rdata), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"bus_stb", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_stb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bus_wdata", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__bus_wdata), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"cnt", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__cnt), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"digest", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {255, 0, 0, 0, 0, 0}},
    {"digest_valid", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__digest_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"h_base", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_base), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"h_reg", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_reg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {255, 0, 0, 0, 0, 0}},
    {"h_word", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__h_word), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"init", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__init), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"k_word", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__k_word), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"next", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__next), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rd_sr", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rd_sr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {23, 0, 0, 0, 0, 0}},
    {"ready", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__ready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rst_n", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__rst_n), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sig0", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig0), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"sig1", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__sig1), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"state", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__state), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"t", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__t), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"tt_uio_oe", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__tt_uio_oe), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"tt_uo_out", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__tt_uo_out), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"w0", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w0), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"w1", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w1), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"w14", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w14), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"w9", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w9), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"w_new", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_new), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"w_reg", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__w_reg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {511, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable4[] = {
    {"ch", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ch), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ena", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ena), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"io_addr", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"io_clk", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"io_out", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_out), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"io_ready", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_ready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"io_we", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__io_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"maj", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__maj), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"register_file", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__register_file), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {9, 0, 31, 0, 0, 0}},
    {"rst_n", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__rst_n), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s0", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s0), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s1", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__s1), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"temp1", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp1), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"temp2", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__temp2), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"ui_in", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__ui_in), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"uio_in", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_in), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"uio_oe", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_oe), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"uio_out", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uio_out), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"uo_out", offsetof(Vtop___024root, auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__u_tt07__DOT__uo_out), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable5[] = {
    {"auth_start", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__auth_start), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"cmd", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__cmd), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"ctr", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__ctr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"ctr_full", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__ctr_full), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ctr_incr", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__ctr_incr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"data_reg", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__data_reg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {255, 0, 0, 0, 0, 0}},
    {"got", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__got), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"in_exec", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__in_exec), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"key_we", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__key_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"lock_set", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__lock_set), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"locked", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__locked), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"need", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__need), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"nonce", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__nonce), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {127, 0, 0, 0, 0, 0}},
    {"ok", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"resp_byte", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__resp_byte), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"resp_idx", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__resp_idx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"resp_len", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__resp_len), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"resp_status", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__resp_status), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"rst_n", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__rst_n), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rx_data", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__rx_data), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"rx_valid", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__rx_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"started", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__started), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"state", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__state), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"status", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__status), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"tag", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__tag), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {255, 0, 0, 0, 0, 0}},
    {"tag_valid", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__tag_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tamper", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__tamper), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"timer", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__timer), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"tx_data", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__tx_data), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"tx_ready", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__tx_ready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tx_valid", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__tx_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"uid", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__uid), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"uid_we", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__uid_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_data", offsetof(Vtop___024root, auth_chip_top__DOT__u_protocol__DOT__wr_data), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {255, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable6[] = {
    {"clk", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ctr", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__ctr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"ctr_full", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__ctr_full), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ctr_incr", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__ctr_incr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ctr_reg", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__ctr_reg), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"key", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__key), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {255, 0, 0, 0, 0, 0}},
    {"key_reg", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__key_reg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {255, 0, 0, 0, 0, 0}},
    {"key_we", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__key_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"lock_reg", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__lock_reg), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"lock_set", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__lock_set), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"locked", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__locked), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rst_n", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__rst_n), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tamper", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__tamper), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tamper_hit", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__tamper_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tamper_n", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__tamper_n), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tamper_reg", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__tamper_reg), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tamper_s1", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__tamper_s1), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tamper_s2", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__tamper_s2), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"uid", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__uid), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"uid_reg", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__uid_reg), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {63, 0, 0, 0, 0, 0}},
    {"uid_we", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__uid_we), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_data", offsetof(Vtop___024root, auth_chip_top__DOT__u_store__DOT__wr_data), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {255, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable7[] = {
    {"clk", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"r_bit", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__r_bit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"r_cnt", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__r_cnt), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"r_sh", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__r_sh), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"r_state", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__r_state), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"rst_n", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__rst_n), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rx", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__rx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rx_data", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__rx_data), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"rx_s1", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__rx_s1), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rx_s2", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__rx_s2), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rx_valid", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__rx_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_busy", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__t_busy), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_cnt", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__t_cnt), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"t_n", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__t_n), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"t_out", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__t_out), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_sh", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__t_sh), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {9, 0, 0, 0, 0, 0}},
    {"tx", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__tx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tx_data", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__tx_data), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"tx_ready", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__tx_ready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tx_valid", offsetof(Vtop___024root, auth_chip_top__DOT__u_uart__DOT__tx_valid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[] = {
    {offsetof(Vtop__Syms, __Vscopep_TOP), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_auth_chip_top), "auth_chip_top", "auth_chip_top", "auth_chip_top", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_auth_chip_top__u_hmac), "auth_chip_top.u_hmac", "u_hmac", "hmac_sha256", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_auth_chip_top__u_hmac__u_sha256), "auth_chip_top.u_hmac.u_sha256", "u_sha256", "sha256_tt07", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_auth_chip_top__u_hmac__u_sha256__u_tt07), "auth_chip_top.u_hmac.u_sha256.u_tt07", "u_tt07", "tt_um_xeniarose_sha256", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_auth_chip_top__u_protocol), "auth_chip_top.u_protocol", "u_protocol", "protocol", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_auth_chip_top__u_store), "auth_chip_top.u_store", "u_store", "secure_store", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_auth_chip_top__u_uart), "auth_chip_top.u_uart", "u_uart", "uart", -9, VerilatedScope::SCOPE_MODULE},
};
#if defined(__GNUC__)
# pragma GCC diagnostic pop
#endif
Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_didInit{modelp->m_didInit}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(383);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    VerilatedScope::scopesConstructFromTable(Vtop__Syms__VpiScopeTable, 8, this);
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_auth_chip_top);
    __Vhier.add(__Vscopep_auth_chip_top, __Vscopep_auth_chip_top__u_hmac);
    __Vhier.add(__Vscopep_auth_chip_top, __Vscopep_auth_chip_top__u_protocol);
    __Vhier.add(__Vscopep_auth_chip_top, __Vscopep_auth_chip_top__u_store);
    __Vhier.add(__Vscopep_auth_chip_top, __Vscopep_auth_chip_top__u_uart);
    __Vhier.add(__Vscopep_auth_chip_top__u_hmac, __Vscopep_auth_chip_top__u_hmac__u_sha256);
    __Vhier.add(__Vscopep_auth_chip_top__u_hmac__u_sha256, __Vscopep_auth_chip_top__u_hmac__u_sha256__u_tt07);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varsInsertFromTable(Vtop___024root__VpiVarTable0, 8, &(TOP));
    __Vscopep_auth_chip_top->varsInsertFromTable(Vtop___024root__VpiVarTable1, 30, &(TOP));
    __Vscopep_auth_chip_top->varInsert("BAUD", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__BAUD))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_auth_chip_top->varInsert("CLK_HZ", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__CLK_HZ))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_auth_chip_top__u_hmac->varsInsertFromTable(Vtop___024root__VpiVarTable2, 22, &(TOP));
    __Vscopep_auth_chip_top__u_hmac->varInsert("MSG_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_hmac__DOT__MSG_BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_auth_chip_top__u_hmac->varInsert("S_IDLE", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_hmac__DOT__S_IDLE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_auth_chip_top__u_hmac->varInsert("S_SEND", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_hmac__DOT__S_SEND))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_auth_chip_top__u_hmac->varInsert("S_WAIT", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_hmac__DOT__S_WAIT))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_auth_chip_top__u_hmac__u_sha256->varsInsertFromTable(Vtop___024root__VpiVarTable3, 32, &(TOP));
    __Vscopep_auth_chip_top__u_hmac__u_sha256->varInsert("IV", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__IV))), true, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,255,0);
    __Vscopep_auth_chip_top__u_hmac__u_sha256->varInsert("S_IDLE", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_IDLE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_auth_chip_top__u_hmac__u_sha256->varInsert("S_LOAD", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_LOAD))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_auth_chip_top__u_hmac__u_sha256->varInsert("S_READ", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_READ))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_auth_chip_top__u_hmac__u_sha256->varInsert("S_ROUND", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_ROUND))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_auth_chip_top__u_hmac__u_sha256->varInsert("S_WIPE", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_WIPE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_auth_chip_top__u_hmac__u_sha256__u_tt07->varsInsertFromTable(Vtop___024root__VpiVarTable4, 20, &(TOP));
    __Vscopep_auth_chip_top__u_protocol->varsInsertFromTable(Vtop___024root__VpiVarTable5, 35, &(TOP));
    __Vscopep_auth_chip_top__u_protocol->varInsert("CMD_AUTH", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__CMD_AUTH))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("CMD_GET_UID", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__CMD_GET_UID))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("CMD_LOCK", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__CMD_LOCK))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("CMD_WRITE_KEY", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__CMD_WRITE_KEY))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("CMD_WRITE_UID", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__CMD_WRITE_UID))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("ST_BADCMD", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__ST_BADCMD))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("ST_CTRFUL", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__ST_CTRFUL))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("ST_LOCKED", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__ST_LOCKED))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("ST_OK", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__ST_OK))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("ST_TAMPER", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__ST_TAMPER))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,7,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("S_CMD", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__S_CMD))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("S_DATA", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__S_DATA))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("S_EXEC", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__S_EXEC))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("S_HMAC", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__S_HMAC))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("S_RESP", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__S_RESP))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_auth_chip_top__u_protocol->varInsert("TIMEOUT_CYCLES", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_protocol__DOT__TIMEOUT_CYCLES))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_auth_chip_top__u_store->varsInsertFromTable(Vtop___024root__VpiVarTable6, 22, &(TOP));
    __Vscopep_auth_chip_top__u_uart->varsInsertFromTable(Vtop___024root__VpiVarTable7, 20, &(TOP));
    __Vscopep_auth_chip_top__u_uart->varInsert("BAUD", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_uart__DOT__BAUD))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_auth_chip_top__u_uart->varInsert("CLK_HZ", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_uart__DOT__CLK_HZ))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_auth_chip_top__u_uart->varInsert("DIV", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_uart__DOT__DIV))), true, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_auth_chip_top__u_uart->varInsert("HALF", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_uart__DOT__HALF))), true, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,15,0);
    __Vscopep_auth_chip_top__u_uart->varInsert("R_DATA", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_uart__DOT__R_DATA))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_auth_chip_top__u_uart->varInsert("R_IDLE", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_uart__DOT__R_IDLE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_auth_chip_top__u_uart->varInsert("R_RECOVER", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_uart__DOT__R_RECOVER))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_auth_chip_top__u_uart->varInsert("R_START", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_uart__DOT__R_START))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_auth_chip_top__u_uart->varInsert("R_STOP", const_cast<void*>(static_cast<const void*>(&(TOP.auth_chip_top__DOT__u_uart__DOT__R_STOP))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_auth_chip_top);
    __Vhier.remove(__Vscopep_auth_chip_top, __Vscopep_auth_chip_top__u_hmac);
    __Vhier.remove(__Vscopep_auth_chip_top, __Vscopep_auth_chip_top__u_protocol);
    __Vhier.remove(__Vscopep_auth_chip_top, __Vscopep_auth_chip_top__u_store);
    __Vhier.remove(__Vscopep_auth_chip_top, __Vscopep_auth_chip_top__u_uart);
    __Vhier.remove(__Vscopep_auth_chip_top__u_hmac, __Vscopep_auth_chip_top__u_hmac__u_sha256);
    __Vhier.remove(__Vscopep_auth_chip_top__u_hmac__u_sha256, __Vscopep_auth_chip_top__u_hmac__u_sha256__u_tt07);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_auth_chip_top, __Vscopep_auth_chip_top = nullptr);
    VL_DO_CLEAR(delete __Vscopep_auth_chip_top__u_hmac, __Vscopep_auth_chip_top__u_hmac = nullptr);
    VL_DO_CLEAR(delete __Vscopep_auth_chip_top__u_hmac__u_sha256, __Vscopep_auth_chip_top__u_hmac__u_sha256 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_auth_chip_top__u_hmac__u_sha256__u_tt07, __Vscopep_auth_chip_top__u_hmac__u_sha256__u_tt07 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_auth_chip_top__u_protocol, __Vscopep_auth_chip_top__u_protocol = nullptr);
    VL_DO_CLEAR(delete __Vscopep_auth_chip_top__u_store, __Vscopep_auth_chip_top__u_store = nullptr);
    VL_DO_CLEAR(delete __Vscopep_auth_chip_top__u_uart, __Vscopep_auth_chip_top__u_uart = nullptr);
    // Tear down sub module instances
}
