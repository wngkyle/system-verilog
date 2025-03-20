module Adder(
    input logic [3:0] x,y,
    input logic cin,
    output logic [3:0] sum,
    output logic cout
);
    assign {cout, sum} = x + y + {3'b000, cin};
endmodule
