module Sign_Extend(In, ImmSrc, ImmExt);
    input [31:0] In;
    input ImmSrc;

    output [31:0] ImmExt;

    // Sign extend 12-bit to 32-bit based on the most significant bit
    assign ImmExt = (ImmSrc == 1'b1) ? {{20{In[31]}}, In[31:25], In[11:7]} : 
                                       {{20{In[31]}}, In[31:20]};
    
endmodule