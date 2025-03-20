`include "Program_Counter.v"
`include "Instruction_Memory.v"
`include "Register_File.v"
`include "Sign_Extend.v"
`include "ALU.v"
`include "Control_Unit.v"
`include "Data_Memory.v"
`include "Program_Counter_Adder.v"
`include "Mux.v"


module Single_Cycle_Top(clk, rst);
    input rst, clk;

    wire [31:0] PC_Top, RD_Instr, RD1_Top, RD2_Top, Imm_Ext_Top, ReadData, ALUResult, PCPlusFour, SrcB, Result;
    wire RegWrite, MemWrite, ALUSrc, ResultSrc;
    wire [1:0] ImmSrc;
    wire [2:0] ALUControl_Top;

    Program_Counter_Module Program_Counter(
        .clk(clk),
        .rst(rst),
        .PC(PC_Top),
        .PCNext(PCPlusFour)
    );

    Program_Counter_Adder_Module Program_Counter_Adder(
        .A(PC_Top),
        .B(32'd4),
        .C(PCPlusFour),
    );

    Instruction_Memory_Module Intruction_Memory(
        .rst(rst),
        .A(PC_Top),
        .RD(RD_Instr),
    );

    Register_File_Module Register_File(
        .clk(clk),
        .rst(rst),
        .WE3(RegWrite),
        .WD3(Result),
        .A1(RD_Instr[19:15]),
        .A2(RD_Instr[24:20]),
        .A3(RD_Instr[11:7]),
        .RD1(RD1_Top),
        .RD2(RD2_Top),
    );

    Sign_Extend_Module Sign_Extend(
        .In(RD_Instr),
        .ImmSrc(ImmSrc[0]),
        .Imm_Ext(Imm_Ext_Top),
    );

    Mux_Module Mux(
        .A(RD2_Top),
        .B(Imm_Ext_Top),
        .S(ALUSrc),
        .C(SrcB),
    )

    ALU_Module ALU(
        .A(RD1_Top),
        .B(Imm_Ext_Top),
        .ALUControl(),
        .Result(),
        .Z(),
        .N(),
        .V(),
        .C(),
    );

    Control_Unit_Module Control_Unit(
        .op(RD_Instr[6:0]),
        .RegWrite(RegWrite),
        .ImmSrc(ImmSrc), 
        .ALUSrc(ALUSrc), 
        .MemWrite(MemWrite), 
        .ResultSrc(ResultSrc), 
        .Branch(), 
        .func3(RD_Instr[14:12]), 
        .func7(RD_Instr[6:0]), 
        .ALUControl(ALUControl_Top),
    );

    Data_Memory_Module Data_Memory(
        .A(ALUResult),
        .RD(ReadData),
        .WD(RD2_Top),
        .WE(MemWrite),
        .rst(rst),
        .clk(clk),
    )

endmodule