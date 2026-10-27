//      // verilator_coverage annotation
        // Standard cell stub library for 180nm verification
        // Canonical home of cell stubs. Guarded so it may be listed on any compile
        // line regardless of ../common/* also being present.
        `timescale 1ns/1ps
        `ifndef TITANX_STDCELL_STUBS
        `define TITANX_STDCELL_STUBS
        
        // BUFX4: 4X drive strength buffer
        module BUFX4 (
%000000     input  wire A,
%000000     output wire Y
        );
            assign Y = A;
        endmodule
        
        `endif // TITANX_STDCELL_STUBS
        
