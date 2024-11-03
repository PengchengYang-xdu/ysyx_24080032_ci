// Generator : SpinalHDL v1.10.2a    git head : a348a60b7e8b6a455c72e1536ec3d74a2ea16935
// Component : ysyx_24080032_imem
// Git hash  : 128f4655c9aa9695f3e2e7ecb61d3fd2bb702ff4

`timescale 1ns/1ps

module ysyx_24080032_imem (
  input  wire          clk,
  input  wire          rst_n,
  input  wire [31:0]   io_addr,
  output wire [31:0]   io_Instr
);

  wire       [31:0]   myClockArea_u_ysyx_24080032_dpic_paddr_read_rdata;
  wire       [31:0]   myClockArea_rdata;
  reg        [31:0]   myClockArea_rdata_regNext;

  ysyx_24080032_dpic_paddr_read myClockArea_u_ysyx_24080032_dpic_paddr_read (
    .is_pc_read (1'b1                                                   ), //i
    .WriteRd    (1'b0                                                   ), //i
    .addr       (io_addr[31:0]                                          ), //i
    .rdata      (myClockArea_u_ysyx_24080032_dpic_paddr_read_rdata[31:0])  //o
  );
  assign myClockArea_rdata = myClockArea_u_ysyx_24080032_dpic_paddr_read_rdata;
  assign io_Instr = myClockArea_rdata_regNext;
  always @(posedge clk) begin
    myClockArea_rdata_regNext <= myClockArea_rdata;
  end


endmodule
