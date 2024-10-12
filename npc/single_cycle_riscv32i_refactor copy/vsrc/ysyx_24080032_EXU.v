`timescale 1ns/1ps

module ysyx_24080032_EXU(
    //input from ifu
    input [31:0] i_ifu_PC,
    
    //input from idu
    input i_idu_ALUAsrc,
    input [1:0] i_idu_ALUBsrc,
    input [3:0] i_idu_ALUctr,
    input [2:0] i_idu_Branch,
    input [31:0] i_idu_rs1,
    input [31:0] i_idu_rs2,
    input [31:0] i_idu_Rcsr,
    input [31:0] i_idu_imm,

    //output to ifu
    output o_ifu_PCASrc,
    output o_ifu_PCBSrc,

    //output to lsu and wbu
    output [31:0] o_lsu_wbu_Result
);

wire [31:0] dataa, datab;
wire Less, Zero;

assign dataa = i_idu_ALUAsrc ? i_ifu_PC : i_idu_rs1;
assign datab = i_idu_ALUBsrc[1] ? (i_idu_ALUBsrc[0] ? i_idu_Rcsr : 32'd4) : (i_idu_ALUBsrc[0] ? i_idu_imm : i_idu_rs2);

ysyx_24080032_alu u_ysyx_24080032_alu(
    .dataa   (dataa                ),
    .datab   (datab                ),
    .ALUctr  (i_idu_ALUctr         ),
    .Less    (Less                 ),
    .Zero    (Zero                 ),
    .Result  (o_lsu_wbu_Result     )
);

ysyx_24080032_branchcond u_ysyx_24080032_branchcond(
    .Branch   (i_idu_Branch    ),
    .Less     (Less            ),
    .Zero     (Zero            ),
    .PCASrc   (o_ifu_PCASrc    ),
    .PCBSrc   (o_ifu_PCBSrc    )
);

endmodule
