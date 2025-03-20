module Intruction_Memory(A, RD, rst);
    input [31:0] A;
    input rst; // Reset signal

    output [31:0] RD;

    // Memory creation
    reg [31:0] mem [1023:0];

    assign RD = (rst == 1'b0) ? 32'h00000000 : mem[A[31:2]];


endmodule