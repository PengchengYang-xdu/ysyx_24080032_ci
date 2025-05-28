################################################################        YOSYS        ################################################################
SOC_PATH ?= ../npc-chisel-soc/single_cycle_riscv32i/vsrc

################################################################        YOSYS        ################################################################
PRJ_PATH ?= .

DESIGN ?= NPC
SDC_FILE ?= $(PRJ_PATH)/syn/sdc/NPC.sdc
RTL_FILES ?= $(shell find $(PRJ_PATH)/vsrc -name "*.sv" -or -name "*.v")
export CLK_FREQ_MHZ ?= 450

RESULT_DIR = $(PRJ_PATH)/syn/result/$(DESIGN)-$(CLK_FREQ_MHZ)MHz
SCRIPT_DIR = $(PRJ_PATH)/syn/scripts
NETLIST_SYN_V   = $(RESULT_DIR)/$(DESIGN).netlist.syn.v
NETLIST_FIXED_V = $(RESULT_DIR)/$(DESIGN).netlist.fixed.v
TIMING_RPT = $(RESULT_DIR)/$(DESIGN).rpt


COPY_FILE:
	@cp $(SOC_PATH)/* $(PRJ_PATH)/vsrc
	@sed -i '/import "DPI-C" function void npc_trap();/d' $(PRJ_PATH)/vsrc/Ebreak.sv
	@sed -i '/npc_trap()/d' $(PRJ_PATH)/vsrc/Ebreak.
	@sed -i 's/\([^a-zA-Z0-9_]\)\(io_pipe_in_bits_id2exe_exe_fun == 5'hB\)/\1(\2)/g' $(PRJ_PATH)/vsrc/EXU.sv
	@sed -i 's/^\(io_pipe_in_bits_id2exe_exe_fun == 5'hB\)/(\1)/g' $(PRJ_PATH)/vsrc/EXU.sv
	@sed -i 's/\([^a-zA-Z0-9_]\)\(io_pipe_in_bits_id2exe_exe_fun == 5'hD\)/\1(\2)/g' $(PRJ_PATH)/vsrc/EXU.sv
	@sed -i 's/^\(io_pipe_in_bits_id2exe_exe_fun == 5'hD\)/(\1)/g' $(PRJ_PATH)/vsrc/EXU.sv


sta: $(TIMING_RPT)
$(TIMING_RPT): $(SCRIPT_DIR)/sta.tcl $(SDC_FILE) $(NETLIST_FIXED_V)
	$(PRJ_PATH)/syn/bin/iEDA -script $^ $(DESIGN) 2>&1 | tee $(RESULT_DIR)/sta.log