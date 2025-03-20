module tb;
    test dut();

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars;
    end

    initial begin
        #1;
        $finish;
    end
endmodule


