module Data_Memory(A , RD, WD, WE, rst, clk);
    input WE, rst, clk;
    input [31:0] A, WD;
    
    output [31:0] RD;

    // Memory creation
    reg [31:0] memory [1023:0];

    // Read functionality
    assign RD = (WE == 1'b0) ? memory[A] : 32'h00000000;

    // Write functionality
    always @ (posedge clk) begin
        if (WE)
        begin
            memory[A] <= WD;
        end
    end

    initial begin
        memory[28] = 32'h00000020;
    end

endmodule