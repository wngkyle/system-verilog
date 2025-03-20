module Mux(A, B, S, C);
    input [31:0] A, B;
    input S;

    output [31:0] C;

    assign C = (~S) ? A : B;

endmodule