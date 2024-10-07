`timescale 1ns / 1ps

`define MSTATUS 12'h300
`define MTVEC   12'h305
`define MEPC    12'h341
`define MCAUSE  12'h342

module ysyx_24080032_csrfile #(
    parameter ADDR_WIDTH = 2,
    parameter DATA_WIDTH = 32)
(
    input                   clk,

    output [DATA_WIDTH-1:0] busA,
    output [DATA_WIDTH-1:0] busB,
    input  [ADDR_WIDTH-1:0] Ra,
    input  [ADDR_WIDTH-1:0] Rb,

    input                   RegWr,
    input  [DATA_WIDTH-1:0] busW,
    input  [ADDR_WIDTH-1:0] Rw
);

reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];

initial begin
    rf[0] = {DATA_WIDTH{1'b0}};
end

always @(negedge clk) begin
    if(RegWr == 1'b1 && Rw != 0)/*0 register cannot touch*/
        rf[Rw] <= busW;
end

assign busA = rf[Ra];
assign busB = rf[Rb];

endmodule
