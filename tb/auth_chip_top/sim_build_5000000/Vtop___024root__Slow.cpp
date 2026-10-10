// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*1:0*/ Vtop___024root::auth_chip_top__DOT__u_hmac__DOT__S_IDLE;
constexpr CData/*1:0*/ Vtop___024root::auth_chip_top__DOT__u_hmac__DOT__S_SEND;
constexpr CData/*1:0*/ Vtop___024root::auth_chip_top__DOT__u_hmac__DOT__S_WAIT;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_IDLE;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_LOAD;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_ROUND;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_READ;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__S_WIPE;
constexpr CData/*7:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__CMD_GET_UID;
constexpr CData/*7:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__CMD_AUTH;
constexpr CData/*7:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__CMD_WRITE_KEY;
constexpr CData/*7:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__CMD_WRITE_UID;
constexpr CData/*7:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__CMD_LOCK;
constexpr CData/*7:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__ST_OK;
constexpr CData/*7:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__ST_LOCKED;
constexpr CData/*7:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__ST_TAMPER;
constexpr CData/*7:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__ST_BADCMD;
constexpr CData/*7:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__ST_CTRFUL;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__S_CMD;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__S_DATA;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__S_EXEC;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__S_HMAC;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__S_RESP;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_uart__DOT__R_IDLE;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_uart__DOT__R_START;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_uart__DOT__R_DATA;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_uart__DOT__R_STOP;
constexpr CData/*2:0*/ Vtop___024root::auth_chip_top__DOT__u_uart__DOT__R_RECOVER;
constexpr SData/*15:0*/ Vtop___024root::auth_chip_top__DOT__u_uart__DOT__DIV;
constexpr SData/*15:0*/ Vtop___024root::auth_chip_top__DOT__u_uart__DOT__HALF;
constexpr IData/*31:0*/ Vtop___024root::auth_chip_top__DOT__CLK_HZ;
constexpr IData/*31:0*/ Vtop___024root::auth_chip_top__DOT__BAUD;
constexpr IData/*31:0*/ Vtop___024root::auth_chip_top__DOT__u_hmac__DOT__MSG_BITS;
constexpr VlWide<8>/*255:0*/ Vtop___024root::auth_chip_top__DOT__u_hmac__DOT__u_sha256__DOT__IV;
constexpr IData/*31:0*/ Vtop___024root::auth_chip_top__DOT__u_protocol__DOT__TIMEOUT_CYCLES;
constexpr IData/*31:0*/ Vtop___024root::auth_chip_top__DOT__u_uart__DOT__CLK_HZ;
constexpr IData/*31:0*/ Vtop___024root::auth_chip_top__DOT__u_uart__DOT__BAUD;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
