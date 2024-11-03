// Generator : SpinalHDL v1.10.2a    git head : a348a60b7e8b6a455c72e1536ec3d74a2ea16935
// Component : ysyx_24080032_pcgen
// Git hash  : 128f4655c9aa9695f3e2e7ecb61d3fd2bb702ff4

`timescale 1ns/1ps

module ysyx_24080032_pcgen (
  input  wire          clk,
  input  wire          rst_n,
  input  wire [31:0]   io_mtvec,
  input  wire [31:0]   io_mepc,
  input  wire [31:0]   io_imm,
  input  wire [31:0]   io_rs1,
  input  wire [1:0]    io_irq,
  input  wire          io_PCASrc,
  input  wire          io_PCBSrc,
  output wire [31:0]   io_PC,
  output wire [31:0]   io_NextPC
);

  wire       [31:0]   _zz_io_NextPC;
  reg        [31:0]   io_NextPC_regNext;
  wire       [31:0]   myClockArea_PCA;
  wire       [31:0]   myClockArea_PCB;

  assign _zz_io_NextPC = (myClockArea_PCA + myClockArea_PCB);
  assign io_PC = io_NextPC_regNext;
  assign myClockArea_PCA = (io_PCASrc ? io_imm : 32'h00000004);
  assign myClockArea_PCB = (io_PCBSrc ? io_rs1 : io_PC);
  assign io_NextPC = (rst_n ? (io_irq[1] ? (io_irq[0] ? io_mtvec : io_mepc) : _zz_io_NextPC) : 32'h80000000);
  always @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin
      io_NextPC_regNext <= 32'h80000000;
    end else begin
      io_NextPC_regNext <= io_NextPC;
    end
  end


endmodule
