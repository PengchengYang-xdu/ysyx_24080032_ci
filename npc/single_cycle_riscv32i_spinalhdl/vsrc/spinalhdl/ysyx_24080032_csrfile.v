// Generator : SpinalHDL v1.10.2a    git head : a348a60b7e8b6a455c72e1536ec3d74a2ea16935
// Component : ysyx_24080032_csrfile
// Git hash  : 128f4655c9aa9695f3e2e7ecb61d3fd2bb702ff4

`timescale 1ns/1ps

module ysyx_24080032_csrfile (
  input  wire          clk,
  input  wire [1:0]    io_irq,
  input  wire [31:0]   io_PC,
  input  wire          io_CsrWr,
  input  wire [11:0]   io_Ra,
  output wire [31:0]   io_busA,
  input  wire [31:0]   io_busW,
  input  wire [11:0]   io_Rw,
  output wire [31:0]   io_mtvec,
  output wire [31:0]   io_mepc,
  input  wire          clk_1,
  input  wire          reset
);

  reg        [31:0]   _zz_io_busA;
  reg        [31:0]   _zz_io_mtvec;
  wire       [1:0]    _zz_io_mtvec_1;
  reg        [31:0]   _zz_io_mepc;
  wire       [1:0]    _zz_io_mepc_1;
  reg        [31:0]   rf_0;
  reg        [31:0]   rf_1;
  reg        [31:0]   rf_2;
  reg        [31:0]   rf_3;
  reg        [1:0]    Rw_addr;
  reg        [1:0]    Ra_addr;
  wire       [23:0]   switch_ysyx24080032csrfile_l32;
  wire       [11:0]   _zz_1;
  wire       [11:0]   _zz_2;
  wire       [11:0]   _zz_3;
  wire       [11:0]   _zz_4;
  wire       [3:0]    _zz_Rw_addr;
  wire       [3:0]    _zz_Rw_addr_1;
  wire       [3:0]    _zz_Rw_addr_2;
  wire       [3:0]    _zz_Rw_addr_3;
  wire       [3:0]    _zz_Rw_addr_4;
  wire                when_ysyx24080032csrfile_l53;
  wire       [3:0]    _zz_5;
  wire                when_ysyx24080032csrfile_l55;

  assign _zz_io_mtvec_1 = 2'b01;
  assign _zz_io_mepc_1 = 2'b10;
  always @(*) begin
    case(Ra_addr)
      2'b00 : _zz_io_busA = rf_0;
      2'b01 : _zz_io_busA = rf_1;
      2'b10 : _zz_io_busA = rf_2;
      default : _zz_io_busA = rf_3;
    endcase
  end

  always @(*) begin
    case(_zz_io_mtvec_1)
      2'b00 : _zz_io_mtvec = rf_0;
      2'b01 : _zz_io_mtvec = rf_1;
      2'b10 : _zz_io_mtvec = rf_2;
      default : _zz_io_mtvec = rf_3;
    endcase
  end

  always @(*) begin
    case(_zz_io_mepc_1)
      2'b00 : _zz_io_mepc = rf_0;
      2'b01 : _zz_io_mepc = rf_1;
      2'b10 : _zz_io_mepc = rf_2;
      default : _zz_io_mepc = rf_3;
    endcase
  end

  assign switch_ysyx24080032csrfile_l32 = {io_Ra,io_Rw};
  assign _zz_1 = 12'h300;
  assign _zz_2 = 12'h305;
  assign _zz_3 = 12'h341;
  assign _zz_4 = 12'h342;
  assign _zz_Rw_addr = 4'b0000;
  always @(*) begin
    if((switch_ysyx24080032csrfile_l32 == {_zz_1,_zz_1})) begin
        Rw_addr = _zz_Rw_addr[1 : 0];
    end else if((switch_ysyx24080032csrfile_l32 == {_zz_2,_zz_2})) begin
        Rw_addr = _zz_Rw_addr_1[1 : 0];
    end else if((switch_ysyx24080032csrfile_l32 == {_zz_3,_zz_3})) begin
        Rw_addr = _zz_Rw_addr_2[1 : 0];
    end else if((switch_ysyx24080032csrfile_l32 == {_zz_4,_zz_4})) begin
        Rw_addr = _zz_Rw_addr_3[1 : 0];
    end else begin
        Rw_addr = _zz_Rw_addr_4[1 : 0];
    end
  end

  always @(*) begin
    if((switch_ysyx24080032csrfile_l32 == {_zz_1,_zz_1})) begin
        Ra_addr = _zz_Rw_addr[3 : 2];
    end else if((switch_ysyx24080032csrfile_l32 == {_zz_2,_zz_2})) begin
        Ra_addr = _zz_Rw_addr_1[3 : 2];
    end else if((switch_ysyx24080032csrfile_l32 == {_zz_3,_zz_3})) begin
        Ra_addr = _zz_Rw_addr_2[3 : 2];
    end else if((switch_ysyx24080032csrfile_l32 == {_zz_4,_zz_4})) begin
        Ra_addr = _zz_Rw_addr_3[3 : 2];
    end else begin
        Ra_addr = _zz_Rw_addr_4[3 : 2];
    end
  end

  assign _zz_Rw_addr_1 = 4'b0101;
  assign _zz_Rw_addr_2 = 4'b1010;
  assign _zz_Rw_addr_3 = 4'b1111;
  assign _zz_Rw_addr_4 = 4'b0000;
  assign io_busA = _zz_io_busA;
  assign io_mtvec = _zz_io_mtvec;
  assign io_mepc = _zz_io_mepc;
  assign when_ysyx24080032csrfile_l53 = (io_CsrWr == 1'b1);
  assign _zz_5 = ({3'd0,1'b1} <<< Rw_addr);
  assign when_ysyx24080032csrfile_l55 = (io_irq[0] == 1'b1);
  always @(posedge clk_1) begin
    if(when_ysyx24080032csrfile_l53) begin
      if(_zz_5[0]) begin
        rf_0 <= io_busW;
      end
      if(_zz_5[1]) begin
        rf_1 <= io_busW;
      end
      if(_zz_5[2]) begin
        rf_2 <= io_busW;
      end
      if(_zz_5[3]) begin
        rf_3 <= io_busW;
      end
    end else begin
      if(when_ysyx24080032csrfile_l55) begin
        rf_2 <= io_PC;
        rf_3 <= 32'h0000000b;
      end
    end
  end


endmodule
