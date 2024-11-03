// Generator : SpinalHDL v1.10.2a    git head : a348a60b7e8b6a455c72e1536ec3d74a2ea16935
// Component : ysyx_24080032_regfile
// Git hash  : 128f4655c9aa9695f3e2e7ecb61d3fd2bb702ff4

`timescale 1ns/1ps

module ysyx_24080032_regfile (
  input  wire          clk,
  input  wire          io_RegWr,
  input  wire [4:0]    io_Ra,
  input  wire [4:0]    io_Rb,
  output wire [31:0]   io_busA,
  output wire [31:0]   io_busB,
  input  wire [31:0]   io_busW,
  input  wire [4:0]    io_Rw
);

  wire       [31:0]   rf_spinal_port0;
  wire       [31:0]   rf_spinal_port1;
  wire       [31:0]   _zz_rf_port;
  wire                _zz_rf_port_1;
  (* ram_style = "distributed" *) reg [31:0] rf [0:31];

  assign _zz_rf_port = io_busW;
  assign _zz_rf_port_1 = ((io_RegWr == 1'b1) && (io_Rw != 5'h0));
  assign rf_spinal_port0 = rf[io_Ra];
  assign rf_spinal_port1 = rf[io_Rb];
  always @(posedge clk) begin
    if(_zz_rf_port_1) begin
      rf[io_Rw] <= _zz_rf_port;
    end
  end

  assign io_busA = rf_spinal_port0;
  assign io_busB = rf_spinal_port1;

endmodule
