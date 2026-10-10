# Makefile cocotb untuk auth_chip_top (chip lengkap, hmac_sha256 asli).
#
#   make                : laju bit dipercepat supaya simulasi singkat
#   make BAUD=115200    : laju bit sungguhan (lambat)
#   make WAVES=1        : simpan gelombang
#
# Jangan sertakan hmac_stub.v di sini: nama modulnya sama dengan hmac_sha256.

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

TOPLEVEL            := auth_chip_top
MODULE              := auth_chip_top_tb
COCOTB_TOPLEVEL     := $(TOPLEVEL)
COCOTB_TEST_MODULES := $(MODULE)

COMPILE_ARGS    += -Wno-fatal -GBAUD=$(BAUD)
SIM_BUILD       := sim_build_$(BAUD)
export TB_BAUD  := $(BAUD)

ifeq ($(WAVES),1)
    COMPILE_ARGS += --trace-fst --trace-structs
    SIM_ARGS     += --trace
endif

include $(shell cocotb-config --makefiles)/Makefile.sim