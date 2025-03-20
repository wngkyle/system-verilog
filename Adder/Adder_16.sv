// `include "Adder.sv"

module Adder_16(
    input logic [15:0] x, y,
    input logic cin,
    output logic [15:0] sum,
    output logic cout
);
    wire cout1, cout2, cout3;
    Adder adder_1(.x(x[3:0]), .y(y[3:0]), .cin(cin), .cout(cout1), .sum(sum[3:0]));
    Adder adder_2(.x(x[7:4]), .y(y[7:4]), .cin(cout1), .cout(cout2), .sum(sum[7:4]));
    Adder adder_3(.x(x[11:8]), .y(y[11:8]), .cin(cout2), .cout(cout3), .sum(sum[11:8]));
    Adder adder_4(.x(x[15:12]), .y(y[15:12]), .cin(cout3), .cout(cout), .sum(sum[15:12]));
endmodule