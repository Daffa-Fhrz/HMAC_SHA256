# Makefile cocotb untuk sha256_tt07.
#
#   make            : jalankan semua uji dengan Icarus Verilog
#   make WAVES=1    : simpan gelombang (sim_build/sha256_tt07.fst, buka dengan GTKWave)
#   make clean      : hapus hasil simulasi
#
# Jalankan dari folder ini (tb/tt07_SHA256/).
# Baseline project.v diletakkan terakhir karena memuat `default_nettype none.

SIM             ?= icarus
TOPLEVEL_LANG   ?= verilog

SRC             := $(abspath $(CURDIR)/../../src)
VERILOG_SOURCES := $(SRC)/tt07_SHA256.v \
                   $(SRC)/tt07_baseline/project.v

# nama modul Verilog paling atas (bukan nama file)
TOPLEVEL        := sha256_tt07
# nama file testbench tanpa .py
MODULE          := tt07_SHA256_tb

# nama variabel yang sama untuk cocotb 2.x
COCOTB_TOPLEVEL     := $(TOPLEVEL)
COCOTB_TEST_MODULES := $(MODULE)

include $(shell cocotb-config --makefiles)/Makefile.sim
