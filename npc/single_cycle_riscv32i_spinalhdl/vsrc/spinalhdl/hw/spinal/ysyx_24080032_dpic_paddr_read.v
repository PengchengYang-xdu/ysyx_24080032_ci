`timescale 1ns / 1ps

module ysyx_24080032_dpic_paddr_read(
    input is_pc_read,
    input WriteRd,
    input [31:0] addr,
    output [31:0] rdata
);

import "DPI-C" function int paddr_read(int addr, int is_pc_read, int WriteRd);

assign rdata = paddr_read(addr, is_pc_read, WriteRd)


endmodule
