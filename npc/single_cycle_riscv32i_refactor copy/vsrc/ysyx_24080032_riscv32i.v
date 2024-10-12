`timescale 1ns/1ps

module ysyx_24080032_riscv32i(
    input clk,
    input rst_n
);

wire [31:0] mtvec;
wire [31:0] mepc;
wire [31:0] imm;
wire [31:0] rs1;
wire [1:0] irq;
wire PCASrc;
wire PCBSrc;
wire [31:0] Instr;
wire [31:0] PC;

ysyx_24080032_IFU u_ysyx_24080032_IFU(
    .clk          (clk          ),
    .rst_n        (rst_n        ),
    .i_idu_mtvec  (mtvec        ),
    .i_idu_mepc   (mepc         ),
    .i_idu_imm    (imm          ),
    .i_idu_rs1    (rs1          ),
    .i_idu_irq    (irq          ),
    .i_exu_PCASrc (PCASrc       ),
    .i_exu_PCBSrc (PCBSrc       ),
    .o_idu_Instr  (Instr        ),
    .o_exu_idu_PC (PC           )
);

wire [31:0] RegbusW;
wire [31:0] CsrbusW;
wire ALUAsrc;
wire [1:0] ALUBsrc;
wire [3:0] ALUctr;
wire [2:0] Branch;
wire [31:0] rs2;
wire [1:0] MemtoReg;
wire WcsrSrc;
wire [31:0] Rcsr;
wire MemWr;
wire MemRd;
wire [2:0] MemOp;

ysyx_24080032_IDU u_ysyx_24080032_IDU(
    .clk            (clk            ),
    .i_ifu_Instr    (Instr          ),
    .i_ifu_PC       (PC             ),
    .i_wbu_RegbusW  (RegbusW        ),
    .i_wbu_CsrbusW  (CsrbusW        ),
    .o_exu_ALUAsrc  (ALUAsrc        ),
    .o_exu_ALUBsrc  (ALUBsrc        ),
    .o_exu_ALUctr   (ALUctr         ),
    .o_exu_Branch   (Branch         ),
    .o_exu_lsu_rs2  (rs2            ),
    .o_exu_wbu_rs1  (rs1            ),
    .o_wbu_MemtoReg (MemtoReg       ),
    .o_wbu_WcsrSrc  (WcsrSrc        ),
    .o_wbu_exu_Rcsr (Rcsr           ),
    .o_lsu_MemWr    (MemWr          ),
    .o_lsu_MemRd    (MemRd          ),
    .o_lsu_MemOp    (MemOp          ),
    .o_ifu_mtvec    (mtvec          ),
    .o_ifu_mepc     (mepc           ),
    .o_ifu_irq      (irq            ),
    .o_ifu_exu_imm  (imm            )
);

wire [31:0] Result;

ysyx_24080032_EXU u_ysyx_24080032_EXU(
    .i_ifu_PC         (PC               ),
    .i_idu_ALUAsrc    (ALUAsrc          ),
    .i_idu_ALUBsrc    (ALUBsrc          ),
    .i_idu_ALUctr     (ALUctr           ),
    .i_idu_Branch     (Branch           ),
    .i_idu_rs1        (rs1              ),
    .i_idu_rs2        (rs2              ),
    .i_idu_Rcsr       (Rcsr             ),
    .i_idu_imm        (imm              ),
    .o_ifu_PCASrc     (PCASrc           ),
    .o_ifu_PCBSrc     (PCBSrc           ),
    .o_lsu_wbu_Result (Result           )
);

wire [31:0] Dataout;

ysyx_24080032_LSU u_ysyx_24080032_LSU(
    .clk           (clk           ),
    .i_idu_MemWr   (MemWr         ),
    .i_idu_MemRd   (MemRd         ),
    .i_idu_MemOp   (MemOp         ),
    .i_idu_rs2     (rs2           ),
    .i_exu_Result  (Result        ),
    .o_wbu_Dataout (Dataout       )
);

ysyx_24080032_WBU u_ysyx_24080032_WBU(
    .i_idu_MemtoReg (MemtoReg       ),
    .i_idu_WcsrSrc  (WcsrSrc        ),
    .i_idu_Rcsr     (Rcsr           ),
    .i_idu_rs1      (rs1            ),
    .i_exu_Result   (Result         ),
    .i_lsu_Dataout  (Dataout        ),
    .o_idu_RegbusW  (RegbusW        ),
    .o_idu_CsrbusW  (CsrbusW        )
);

endmodule
