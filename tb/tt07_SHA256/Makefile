# Makefile cocotb untuk sha256_tt07 (core SHA-256 lengkap di atas baseline TT07).
#
# Susunan folder:
#   Makefile
#   src/tt07_SHA256.v        <- modul sha256_tt07 (pembungkus)
#   src/tt07_baseline.v      <- modul tt_um_xeniarose_sha256 (project.v dari
#                               repositori tt07-sha256, tanpa perubahan)
#   tb/tt07_SHA256_tb.py     <- testbench cocotb
#
#   make            : jalankan semua uji dengan Icarus Verilog
#   make WAVES=1    : simpan gelombang (sim_build/*.fst, buka dengan GTKWave)
#   make clean      : hapus hasil simulasi

SIM             ?= icarus
TOPLEVEL_LANG   ?= verilog

# baseline diletakkan terakhir karena memuat `default_nettype none
VERILOG_SOURCES := $(CURDIR)/../../src/tt07_SHA256.v \
                   $(CURDIR)/../../src/tt07_baseline/project.v

# testbench ada di folder tb/, jadi folder itu ditambahkan ke jalur pencarian Python
export PYTHONPATH := $(CURDIR)/tb:$(PYTHONPATH)

# nama modul Verilog paling atas (bukan nama file)
TOPLEVEL        := sha256_tt07
# nama file testbench tanpa .py
MODULE          := tt07_SHA256_tb

# nama variabel yang sama untuk cocotb 2.x
COCOTB_TOPLEVEL     := $(TOPLEVEL)
COCOTB_TEST_MODULES := $(MODULE)

# WAVES           = 1

include $(shell cocotb-config --makefiles)/Makefile.sim