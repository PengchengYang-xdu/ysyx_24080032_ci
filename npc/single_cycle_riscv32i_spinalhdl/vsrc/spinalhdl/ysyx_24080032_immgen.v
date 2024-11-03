// Generator : SpinalHDL v1.10.2a    git head : a348a60b7e8b6a455c72e1536ec3d74a2ea16935
// Component : ysyx_24080032_immgen
// Git hash  : 128f4655c9aa9695f3e2e7ecb61d3fd2bb702ff4

`timescale 1ns/1ps

module ysyx_24080032_immgen (
  input  wire [31:0]   io_Instr,
  input  wire [2:0]    io_ExtOP,
  output reg  [31:0]   io_imm
);

  wire       [11:0]   _zz_immI;
  wire       [0:0]    _zz_immU_1;
  wire       [2:0]    _zz_immU_2;
  wire       [11:0]   _zz_immS;
  wire       [11:0]   _zz_immB;
  wire       [19:0]   _zz_immJ;
  wire       [31:0]   immI;
  wire       [31:0]   immU;
  wire       [31:0]   immS;
  wire       [31:0]   immB;
  wire       [31:0]   immJ;
  wire                _zz_immU;

  assign _zz_immI = io_Instr[31 : 20];
  assign _zz_immS = {io_Instr[31 : 25],io_Instr[11 : 7]};
  assign _zz_immB = {io_Instr[7],{io_Instr[30 : 25],{io_Instr[11 : 8],1'b0}}};
  assign _zz_immJ = {io_Instr[19 : 12],{io_Instr[20],{io_Instr[30 : 21],1'b0}}};
  assign _zz_immU_1 = _zz_immU;
  assign _zz_immU_2 = {_zz_immU,{_zz_immU,_zz_immU}};
  assign immI = {{20{_zz_immI[11]}}, _zz_immI};
  assign _zz_immU = 1'b0;
  assign immU = {io_Instr[31 : 12],{_zz_immU,{_zz_immU,{_zz_immU,{_zz_immU,{_zz_immU,{_zz_immU,{_zz_immU,{_zz_immU,{_zz_immU_1,_zz_immU_2}}}}}}}}}};
  assign immS = {{20{_zz_immS[11]}}, _zz_immS};
  assign immB = {{20{_zz_immB[11]}}, _zz_immB};
  assign immJ = {{12{_zz_immJ[19]}}, _zz_immJ};
  always @(*) begin
    case(io_ExtOP)
      3'b000 : begin
        io_imm = immI;
      end
      3'b001 : begin
        io_imm = immU;
      end
      3'b010 : begin
        io_imm = immS;
      end
      3'b011 : begin
        io_imm = immB;
      end
      3'b100 : begin
        io_imm = immJ;
      end
      default : begin
        io_imm = 32'h0;
      end
    endcase
  end


endmodule
