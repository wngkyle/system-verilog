module ALU_Decoder(ALUOp, op, func3, func7, ALUControl);
    input op, func7;
    input [2:0] func3;
    output [2:0] ALUControl;

    // Interim wire
    wire [1:0] concatenation;

    assign concatenation = {op, func7};

    assign ALUControl = (ALUOp == 2'b00) ? 3'b000 :
                        (ALUOp == 2'b01) ? 3'b001 :
                        ((ALUOp == 2'b10) & (func3 == 3'b010)) ? 3'b101 :
                        ((ALUOp == 2'b10) & (func3 == 3'b110)) ? 3'b110 :
                        ((ALUOp == 2'b10) & (func3 == 3'b111)) ? 3'b010 :
                        ((ALUOp == 2'b10) & (func3 == 3'b000) & (concatenation == 2'b11)) ? 3'001 :
                        ((ALUOp == 2'b10) & (func3 == 3'b000) & (concatenation != 2'b11)) ? 3'000 : 3'b000;

endmodule