# Makefile cocotb untuk protocol sendirian (batas waktu diperkecil).

SIM             ?= verilator
TOPLEVEL_LANG   ?= verilog
TIMEOUT         ?= 300

SRC             := $(abspath $(CURDIR)/../../src)
VERILOG_SOURCES := $(SRC)/protocol.v

SIM_BUILD       := sim_build_$(SIM)_$(BAUD)

ifeq ($(SIM),verilator)
    COMPILE_ARGS += -Wno-fatal -GBAUD=$(BAUD)
    ifeq ($(WAVES),1)
        COMPILE_ARGS += --trace-fst --trace-structs
        SIM_ARGS     += --trace
    endif
else
    COMPILE_ARGS += -Pauth_chip_top.BAUD=$(BAUD)
endif

TOPLEVEL        := protocol
MODULE          := protocol_tb
COCOTB_TOPLEVEL     := $(TOPLEVEL)
COCOTB_TEST_MODULES := $(MODULE)

include $(shell cocotb-config --makefiles)/Makefile.sim
