# Makefile cocotb untuk auth_chip_top.
#
#   make                 : Verilator (bawaan)
#   make SIM=icarus      : Icarus Verilog
#   make WAVES=1         : simpan gelombang
#   make clean           : hapus hasil simulasi
#   make BAUD=115200     : laju bit sungguhan (bawaan 5000000 supaya singkat)
#
# Jangan sertakan hmac_stub.v di sini: nama modulnya sama dengan hmac_sha256.
#
# Jalankan dari folder ini. Baseline project.v diletakkan terakhir karena
# memuat `default_nettype none.

SIM             ?= verilator
TOPLEVEL_LANG   ?= verilog
BAUD            ?= 5000000

SRC             := $(abspath $(CURDIR)/../../src)
VERILOG_SOURCES := $(SRC)/auth_chip_top.v \
                   $(SRC)/uart.v \
                   $(SRC)/protocol.v \
                   $(SRC)/secure_store.v \
                   $(SRC)/hmac_sha256.v \
                   $(SRC)/tt07_SHA256.v \
                   $(SRC)/tt07_baseline/project.v

# folder hasil dipisah per simulator supaya bisa berganti tanpa make clean
SIM_BUILD       := sim_build_$(SIM)_$(BAUD)

ifeq ($(SIM),verilator)
    # peringatan lint tidak menghentikan simulasi
    COMPILE_ARGS += -Wno-fatal -GBAUD=$(BAUD)
    ifeq ($(WAVES),1)
        COMPILE_ARGS += --trace-fst --trace-structs
        SIM_ARGS     += --trace
    endif
else
    COMPILE_ARGS += -Pauth_chip_top.BAUD=$(BAUD)
endif
export TB_BAUD := $(BAUD)

# nama modul Verilog paling atas (bukan nama file)
TOPLEVEL        := auth_chip_top
# nama file testbench tanpa .py
MODULE          := auth_chip_top_tb

# nama variabel yang sama untuk cocotb 2.x
COCOTB_TOPLEVEL     := $(TOPLEVEL)
COCOTB_TEST_MODULES := $(MODULE)

include $(shell cocotb-config --makefiles)/Makefile.sim