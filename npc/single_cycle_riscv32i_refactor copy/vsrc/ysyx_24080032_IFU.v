`timescale 1ns/1ps

module ysyx_24080032_IFU(
    input clk,
    input rst_n,

    //input from idu
    input [31:0] i_idu_mtvec,
    input [31:0] i_idu_mepc,
    input [31:0] i_idu_imm,
    input [31:0] i_idu_rs1,
    input [1:0] i_idu_irq,

    //input from exu
    input i_exu_PCASrc,
    input i_exu_PCBSrc,

    //output to idu
    output [31:0] o_idu_Instr,

    //output to exu and idu
    output [31:0] o_exu_idu_PC
);

wire [31:0] NextPC;

ysyx_24080032_pcgen u_ysyx_24080032_pcgen(
    .clk      (clk             ),
    .rst_n    (rst_n           ),
    .mtvec    (i_idu_mtvec     ),
    .mepc     (i_idu_mepc      ),
    .imm      (i_idu_imm       ),
    .rs1      (i_idu_rs1       ),
    .irq      (i_idu_irq       ),
    .PCASrc   (i_exu_PCASrc    ),
    .PCBSrc   (i_exu_PCBSrc    ),
    .PC       (o_exu_idu_PC    ),
    .NextPC   (NextPC          )
);

ysyx_24080032_imem u_ysyx_24080032_imem(
    .clk      (clk             ),
    .addr     (NextPC          ),
    .Instr    (o_idu_Instr     )
);

endmodule
