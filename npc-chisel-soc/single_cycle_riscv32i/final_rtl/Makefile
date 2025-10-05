STUDENT_ID := 24080032
VERILOG_SRC_DIR := ../vsrc
OUTPUT_DIR := ./build
OUTPUT_FILE := $(OUTPUT_DIR)/ysyx_$(STUDENT_ID).v


INPUT_FILES := \
	ysyx_24080032.v \
	ysyx_24080032_Core.v \
	ysyx_24080032_Xbar.v \
	ysyx_24080032_Clint.v \
	ysyx_24080032_IFU.v \
	ysyx_24080032_IDU.v \
	ysyx_24080032_ISU.v \
	ysyx_24080032_EXU.v \
	ysyx_24080032_WBU.v \
	ysyx_24080032_gpr_16x32.v \
	ysyx_24080032_CSR.v \
	ysyx_24080032_ALU.v \
	ysyx_24080032_LSU.v \
	ysyx_24080032_iCache.v \
	ysyx_24080032_Ebreak.v

# ==============================================================================
# 目标 (Targets)
# ==============================================================================

.PHONY: all verilog clean

# 默认目标：执行文件合并
all: verilog

# verilog_merge 目标：使用 cat 命令合并文件
verilog:
	@echo "-> 正在创建输出目录 $(OUTPUT_DIR)..."
	mkdir -p $(OUTPUT_DIR)
	@echo "-> 正在合并 Verilog 文件到 $(OUTPUT_FILE)..."
	cat $(addprefix $(VERILOG_SRC_DIR)/, $(INPUT_FILES)) > $(OUTPUT_FILE)
	@echo "-> 合并完成！输出文件：$(OUTPUT_FILE)"

# 清理目标：删除生成的文件
clean:
	@echo "-> 正在清理生成的 Verilog 文件..."
	rm -rf $(OUTPUT_DIR)