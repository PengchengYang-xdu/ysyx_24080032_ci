`timescale 1ns / 1ps

module tb_riscv32i();

reg              clk;
reg              rst_n;

ysyx_24080032_riscv32i u_ysyx_24080032_riscv32i(
    .clk   (clk   ),
    .rst_n (rst_n )
);


initial begin
    rst_n <= 0;
    #10;
    rst_n <= 1;
    #2000;
    $finish;
end

always begin
    clk <= 1;
    #5;
    clk <= 0;
    #5;
end

initial begin
    $dumpfile("riscv32i.vcd");
    $dumpvars;
end

endmodule
