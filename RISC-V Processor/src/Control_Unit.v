`include "ALU_Decoder.v"
`include "Main_Decoder.v"

module Control_Unit_Top(op, RegWrite, ImmSrc, ALUSrc, MemWrite, ResultSrc, Branch, func3, func7, ALUControl)
    input [6:0] op, func7;
    input [2:0] func3;

    output RegWrite, ALUSrc, MemWrite, ResultSrc, Branch;
    output [1:0] ImmSrc;
    output [2:0] ALUControl;

    wire [1:0] ALUOp,

    Main_Decoder_Module Main_Decorde(
        .op(op),
        .RegWrite(RegWrite),
        .ImmSrc(ImmSrc),
        .MemWrite(MemWrite),
        .ResultSrc(ResultSrc),
        .Branch(Branch),
        .ALUSrc(ALUSrc),
        .ALUOp(ALUOp),
    );

    ALU_Decoder_Module ALU_Decoder(
        .ALUOp(ALUOp),
        .func3(func3),
        .func7(func7),
        .op(op),
        .ALUControl(ALUControl),
    );

endmodule
