`timescale 1ns/1ps

module ysyx_24080032_WBU(
    //input from idu
    input [1:0] i_idu_MemtoReg,
    input i_idu_WcsrSrc,
    input [31:0] i_idu_Rcsr,
    input [31:0] i_idu_rs1,

    //input from exu
    input [31:0] i_exu_Result,

    //input from lsu
    input [31:0] i_lsu_Dataout,

    //output to idu
    output [31:0] o_idu_RegbusW,
    output [31:0] o_idu_CsrbusW
);

assign o_idu_RegbusW = i_idu_MemtoReg[1] ? i_idu_Rcsr : i_idu_MemtoReg[0] ? i_lsu_Dataout : i_exu_Result;
assign o_idu_CsrbusW = i_idu_WcsrSrc ? i_idu_rs1 : i_exu_Result;

endmodule
