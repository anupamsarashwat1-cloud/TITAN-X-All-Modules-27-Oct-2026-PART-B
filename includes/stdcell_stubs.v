// Standard cell stub library for 180nm verification
// Canonical home of cell stubs. Guarded so it may be listed on any compile
// line regardless of ../common/* also being present.
`ifndef TITANX_STDCELL_STUBS
`define TITANX_STDCELL_STUBS

// BUFX4: 4X drive strength buffer
module BUFX4 (
    input  wire A,
    output wire Y
);
    assign Y = A;
endmodule

`endif // TITANX_STDCELL_STUBS
