`timescale 1ns / 1ps

module ysyx_24080032_imem(
    input             clk,
    input             rst_n,
    input      [31:0] addr,
    output reg [31:0] Instr
);

reg [31:0] ROM [0:63];

initial begin
    $readmemh("/home/ypc/Desktop/ysyx/ysyx-workbench/npc/addi/tb/riscvtest.txt", ROM);
end

always @(negedge clk)begin
    Instr <= ROM[addr[7:2]];
end

endmodule
