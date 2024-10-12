`timescale 1ns/1ps

module ysyx_24080032_LSU(
    input clk,

    //input from idu
    input i_idu_MemWr,
    input i_idu_MemRd,
    input [2:0] i_idu_MemOp,
    input [31:0] i_idu_rs2,

    //input from exu
    input [31:0] i_exu_Result,

    //output to wbu
    output [31:0] o_wbu_Dataout
);

ysyx_24080032_dmem u_ysyx_24080032_dmem(
    .wr_clk  (clk                    ),
    .rd_clk  (clk                    ),
    .WrEn    (i_idu_MemWr            ),
    .RdEn    (i_idu_MemRd            ),
    .Addr    (i_exu_Result           ),
    .DataIn  (i_idu_rs2              ),
    .MemOp   (i_idu_MemOp            ),
    .DataOut (o_wbu_Dataout          )
);

endmodule
