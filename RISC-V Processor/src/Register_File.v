module Register_File(A1, A2, A3, RD1, RD2, WD3, WE3, rst, clk);
    input WE3, rst, clk;
    input [4:0] A1, A2, A3;
    input [31:0] WD3;

    output [31:0] RD1, RD2;

    // Memory creation
    reg [31:0] registers [31:0];

    // Read functionality  
    assign RD1 = (!rst) : 32'h00000000 : registers[A1];
    assign RD2 = (!rst) : 32'h00000000 : registers[A2];

    // Write functionality
    always @ (posedge clk) begin
        if (WE3)
        begin 
            Register[A3] <= WD3;
        end
    end
    
endmodule