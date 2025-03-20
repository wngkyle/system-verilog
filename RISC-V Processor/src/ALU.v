// Z : zero flag
// N : negative flag
// V : overflow flag
// C : carry flag

module ALU(A, B, ALUControl, Result, Z, N, V, C);
    // Declaring inputs
    input [31:0] A, B;
    input [2:0]  ALUControl;

    // Declaring outputs
    output [31:0] Result;
    output Z, N, V, C; 
    // Z : zero flag
    // N : negative flag
    // V : overflow flag
    // C : carry flag

    // Declaring wires
    wire [31:0] a_and_b;
    wire [31:0] a_or_b;
    wire [31:0] not_b;
    wire [31:0] mux_1;
    wire [31:0] mux_2;
    wire [31:0] slt; // Set less than
    wire [31:0] sum;
    wire cout; 

    // AND operation
    assign a_and_b = A & B;

    // OR operation
    assign a_or_b = A | B;

    // NOT operation on B
    assign not_b = ~B;

    // Ternary Operator
    assign mux_1 = (ALUControl[0] == 1'b0) ? B : not_b; 

    // Sum operation
    /*
        ALUControl[0] is added here because in 2's complement (subtraction) 
        you need to add one to the result to make the value correct.

        {cout, sum} concatenate the two signals into a single group of bits, 33-bit total
    */ 
    assign {cout, sum} = A + mux_1 + ALUControl[0]; 

    // Zero Extension
    assign slt = {31'b0000000000000000000000000000000, sum[31]};

    // 5 by 1 Mux at the end
    assign mux_2 = (ALUControl[2:0] == 3'b000) ? sum : 
                   (ALUControl[2:0] == 3'b001) ? sum : 
                   (ALUControl[2:0] == 3'b010) ? a_and_b : 
                   (ALUControl[2:0] == 3'b011) ? a_or_b : 
                   (ALUControl[2:0] == 3'b101) ? slt : 32'h00000000;

    // Assigning final result
    assign Result = mux_2;

    // Flags assignment
    /*
        & performs AND operation across all bits of the signal, checks if the result is 0
        If ~Result is 4'b1010, the &(~Result) is 1 & 0 & 1 & 0 = 0
        If ~Result is 4'b1111, the &(~Result) is 1 & 1 & 1 & 1 = 1
    */
    assign Z = &(~Result);
    /*
        Negative flag, check if the most significant bit is flipped
    */
    assign N = Result[31];
    /*
        Overflow flag
        Overflow scenarios:
            Addition (ALUControl[1] = 0)
            - A and B have the same sign, and the result's sign is different from theirs
            Subtraction (ALUControl[1] = 1)
            - A and B have different signs, and the result's sign is different from A's
    */
    assign V = (~ALUControl[1]) & (A[31] ^ sum[31]) & (A[31] ^ B[31] ^ ALUControl[0]); 
    /*
        Carry flag, will only set to 1 when there is an carry out and control signal indicates 
        an addition
    */
    assign C = cout & (~ALUControl[1]); 

endmodule