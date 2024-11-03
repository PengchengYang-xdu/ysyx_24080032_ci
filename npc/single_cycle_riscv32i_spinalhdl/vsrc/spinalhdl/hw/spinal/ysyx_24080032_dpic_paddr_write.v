`timescale 1ns / 1ps

module ysyx_24080032_dpic_paddr_write(
    input clk,
    input WrEn,
    input [31:0] addr,
    input [31:0] data
);

import "DPI-C" function void paddr_write(int addr, int data);

always@(posedge clk)begin
    if(WrEn)
        paddr_write(addr, data);
end


endmodule
