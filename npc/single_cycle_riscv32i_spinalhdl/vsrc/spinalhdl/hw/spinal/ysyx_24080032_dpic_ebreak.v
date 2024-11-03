`timescale 1ns / 1ps

module ysyx_24080032_dpic_ebreak(
    input [31:0] Instr
);

import "DPI-C" function void npc_trap();

always @(*)begin
    if(Instr == 32'h00100073)
        npc_trap();
end

endmodule
