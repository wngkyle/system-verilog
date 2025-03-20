// `include "Adder_16.sv"
`timescale  1ns/1ps
module Adder_16_tb;
    logic [15:0] x, y, sum;
    logic cin, cout;

    Adder_16 DUT(.x(x), .y(y), .sum(sum), .cin(cin), .cout(cout));

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, Adder_16_tb);
    end

    initial begin
        x = 16'b0001000100010001;
        y = 16'b0100010001000100;
        cin = 1'b0;
        #10;
        $display("Current Sum: %b  Current Cout: %b", sum, cout);

        x = 16'b0000000000000000;
        y = 16'b0000000000000000;
        cin = 1'b1;
        #10;
        $display("Current Sum: %b  Current Cout: %b", sum, cout);

        $finish;
    end

endmodule