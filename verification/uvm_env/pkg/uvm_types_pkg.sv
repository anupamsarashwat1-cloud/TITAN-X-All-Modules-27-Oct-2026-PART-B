// SPDX-License-Identifier: Apache-2.0
// SMVDU TITAN-X UVM / TLM Verification Package
`timescale 1ns/1ps

package uvm_types_pkg;

    // AXI4 TLM Sequence Item
    typedef struct packed {
        bit [39:0] addr;
        bit [63:0] data;
        bit [7:0]  strb;
        bit [2:0]  size;       // 000=1B, 001=2B, 010=4B, 011=8B
        bit [1:0]  burst;      // 00=FIXED, 01=INCR, 10=WRAP
        bit [3:0]  id;
        bit        is_write;
        bit [1:0]  resp;       // 00=OKAY, 01=EXOKAY, 10=SLVERR, 11=DECERR
        bit [31:0] timestamp;
    } axi_seq_item_t;

    // Interrupt TLM Sequence Item
    typedef struct packed {
        bit [31:0] irq_source;
        bit [3:0]  priority_level;
        bit        edge_triggered;
        bit        asserted;
    } irq_seq_item_t;

    // Address Apertures for Constrained-Random Mapping
    localparam bit [39:0] APERTURE_DDR4_BASE    = 40'h8000_0000;
    localparam bit [39:0] APERTURE_DDR4_SIZE    = 40'h1000_0000; // 256MB
    localparam bit [39:0] APERTURE_BOOTROM_BASE = 40'h1000_0000;
    localparam bit [39:0] APERTURE_BOOTROM_SIZE = 40'h0010_0000; // 1MB
    localparam bit [39:0] APERTURE_APB_BASE     = 40'h4000_0000;
    localparam bit [39:0] APERTURE_APB_SIZE     = 40'h0010_0000; // 1MB
    localparam bit [39:0] APERTURE_L2_BASE      = 40'h0000_0000;
    localparam bit [39:0] APERTURE_L2_SIZE      = 40'h0010_0000; // 1MB

endpackage
