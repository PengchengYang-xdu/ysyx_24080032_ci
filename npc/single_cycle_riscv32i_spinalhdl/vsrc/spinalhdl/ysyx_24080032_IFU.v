// Generator : SpinalHDL v1.10.2a    git head : a348a60b7e8b6a455c72e1536ec3d74a2ea16935
// Component : ysyx_24080032_IFU
// Git hash  : 128f4655c9aa9695f3e2e7ecb61d3fd2bb702ff4

`timescale 1ns/1ps

module ysyx_24080032_IFU (
  input  wire          clk,
  input  wire          rst_n,
  input  wire [31:0]   io_i_wbu_mtvec,
  input  wire [31:0]   io_i_wbu_mepc,
  input  wire [31:0]   io_i_wbu_imm,
  input  wire [31:0]   io_i_wbu_rs1,
  input  wire [31:0]   io_i_wbu_RegbusW,
  input  wire [31:0]   io_i_wbu_CsrbusW,
  input  wire [1:0]    io_i_wbu_irq,
  input  wire          io_i_wbu_PCASrc,
  input  wire          io_i_wbu_PCBSrc,
  output wire [31:0]   io_o_idu_Instr,
  output wire [31:0]   io_o_idu_PC,
  output wire [31:0]   io_o_idu_RegbusW,
  output wire [31:0]   io_o_idu_CsrbusW
);

  wire       [31:0]   myClockArea_pcgen_io_PC;
  wire       [31:0]   myClockArea_pcgen_io_NextPC;
  wire       [31:0]   myClockArea_imem_io_Instr;

  ysyx_24080032_pcgen myClockArea_pcgen (
    .clk       (clk                              ), //i
    .rst_n     (rst_n                            ), //i
    .io_mtvec  (io_i_wbu_mtvec[31:0]             ), //i
    .io_mepc   (io_i_wbu_mepc[31:0]              ), //i
    .io_imm    (io_i_wbu_imm[31:0]               ), //i
    .io_rs1    (io_i_wbu_rs1[31:0]               ), //i
    .io_irq    (io_i_wbu_irq[1:0]                ), //i
    .io_PCASrc (io_i_wbu_PCASrc                  ), //i
    .io_PCBSrc (io_i_wbu_PCBSrc                  ), //i
    .io_PC     (myClockArea_pcgen_io_PC[31:0]    ), //o
    .io_NextPC (myClockArea_pcgen_io_NextPC[31:0]), //o
    .clk_1     (clk                              ), //i
    .rst_n_1   (rst_n                            )  //i
  );
  ysyx_24080032_imem myClockArea_imem (
    .clk      (clk                              ), //i
    .io_addr  (myClockArea_pcgen_io_NextPC[31:0]), //i
    .io_Instr (myClockArea_imem_io_Instr[31:0]  )  //o
  );
  assign io_o_idu_RegbusW = io_i_wbu_RegbusW;
  assign io_o_idu_CsrbusW = io_i_wbu_CsrbusW;
  assign io_o_idu_PC = myClockArea_pcgen_io_PC;
  assign io_o_idu_Instr = myClockArea_imem_io_Instr;

endmodule

module ysyx_24080032_imem (
  input  wire          clk,
  input  wire [31:0]   io_addr,
  output wire [31:0]   io_Instr
);

  wire       [31:0]   u_ysyx_24080032_dpic_paddr_read_rdata;
  wire       [31:0]   rdata;
  reg        [31:0]   rdata_regNext;

  ysyx_24080032_dpic_paddr_read u_ysyx_24080032_dpic_paddr_read (
    .is_pc_read (1'b1                                       ), //i
    .WriteRd    (1'b0                                       ), //i
    .addr       (io_addr[31:0]                              ), //i
    .rdata      (u_ysyx_24080032_dpic_paddr_read_rdata[31:0])  //o
  );
  assign rdata = u_ysyx_24080032_dpic_paddr_read_rdata;
  assign io_Instr = rdata_regNext;
  always @(posedge clk) begin
    rdata_regNext <= rdata;
  end


endmodule

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
  output wire [31:0]   io_NextPC,
  input  wire          clk_1,
  input  wire          rst_n_1
);

  wire       [31:0]   _zz_io_NextPC;
  reg        [31:0]   io_NextPC_regNext;
  wire       [31:0]   PCA;
  wire       [31:0]   PCB;

  assign _zz_io_NextPC = (PCA + PCB);
  assign io_PC = io_NextPC_regNext;
  assign PCA = (io_PCASrc ? io_imm : 32'h00000004);
  assign PCB = (io_PCBSrc ? io_rs1 : io_PC);
  assign io_NextPC = (rst_n ? (io_irq[1] ? (io_irq[0] ? io_mtvec : io_mepc) : _zz_io_NextPC) : 32'h80000000);
  always @(posedge clk_1 or negedge rst_n_1) begin
    if(!rst_n_1) begin
      io_NextPC_regNext <= 32'h80000000;
    end else begin
      io_NextPC_regNext <= io_NextPC;
    end
  end


endmodule
