# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VysyxSoCFull.mk

default: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/build/ysyxSoCFull

### Constants...
# Perl executable (from $PERL, defaults to 'perl' if not set)
PERL = perl
# Python3 executable (from $PYTHON3, defaults to 'python3' if not set)
PYTHON3 = python3
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/yangpengcheng/workspace/tools/verilator/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VysyxSoCFull
# Module prefix (from --prefix)
VM_MODPREFIX = VysyxSoCFull
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/include \
	-I/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/nvboard/usr/include \
	-DTOP_NAME="VysyxSoCFull" \
	-DNPCCONFIG_DUMPWAVE \
	-DNPCCONFIG_DIFFTEST \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lz \
	-lSDL2 \
	-lSDL2_image \
	-lLLVM-14 \
	-lreadline \
	-ldl \
	-pie \
	-lSDL2 \
	-lSDL2_image \
	-lSDL2_ttf \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	circuit \
	dut \
	wave \
	mem \
	reg \
	monitor \
	expr \
	sdb \
	watchpoint \
	npc-main \
	disasm \
	ftrace \
	itrace \
	lightsss \
	log \
	mtrace \
	timer \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	../.. \
	../../csrc \
	../../csrc/cpu \
	../../csrc/cpu/difftest \
	../../csrc/memory \
	../../csrc/monitor \
	../../csrc/monitor/sdb \
	../../csrc/utils \


### Default rules...
# Include list of all generated classes
include VysyxSoCFull_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

circuit.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/cpu/circuit.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
dut.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/cpu/difftest/dut.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
wave.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/cpu/wave.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
mem.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/memory/mem.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
reg.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/memory/reg.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
monitor.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/monitor/monitor.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
expr.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/monitor/sdb/expr.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
sdb.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/monitor/sdb/sdb.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
watchpoint.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/monitor/sdb/watchpoint.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
npc-main.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/npc-main.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
disasm.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/utils/disasm.cc 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
ftrace.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/utils/ftrace.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
itrace.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/utils/itrace.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
lightsss.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/utils/lightsss.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
log.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/utils/log.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
mtrace.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/utils/mtrace.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
timer.o: /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/csrc/utils/timer.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<

### Link rules... (from --exe)
/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/build/ysyxSoCFull: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
