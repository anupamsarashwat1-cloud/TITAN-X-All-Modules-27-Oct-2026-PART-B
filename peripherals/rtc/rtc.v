// SPDX-License-Identifier: Apache-2.0
// SMVDU-TITAN-X SoC — Real-Time Counter (RTC)
// Iteration 3: 64-bit free-running counter for RISC-V timer (mtime/mtimecmp)
`timescale 1ns/1ps

module rtc (
    input  wire        clk,      // System clock or APB clock
    input  wire        rtc_clk,  // Always-on slow clock (e.g., 32.768 kHz)
    input  wire        rst_n,

    // APB Slave Interface
    input  wire [31:0] paddr,
    input  wire        psel,
    input  wire        penable,
    input  wire        pwrite,
    input  wire [31:0] pwdata,
    output wire [31:0] prdata,
    output wire        pready,
    output wire        pslverr,

    // Timer Interrupts to Cores (MTIP)
    output wire [4:0]  timer_irq // 4 App Cores + 1 Monitor Core
);

    // -------------------------------------------------------
    // Registers (RISC-V Core Local Interruptor - CLINT style)
    // -------------------------------------------------------
    // In a full CLINT, msip and mtimecmp are present. 
    // This RTC provides the timebase (mtime) and comparators (mtimecmp).
    
    reg [63:0] mtime;
    reg [63:0] mtimecmp [0:4]; // Comparators for 5 harts

    assign pready = 1'b1;
    assign pslverr = 1'b0;

    // Cross-clock domain syncing for mtime would normally be required.
    // Assuming synchronous APB accesses to mtime domain for simplicity here.

    // BUG-RTC-001 fix: 2-FF CDC synchronizer for mtime (rtc_clk → clk)
    reg [63:0] mtime_meta, mtime_sync;
    always @(posedge rtc_clk or negedge rst_n) begin
        if (!rst_n) mtime <= 64'h0;
        else        mtime <= mtime + 64'h1;
    end
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            mtime_meta <= 64'h0;
            mtime_sync <= 64'h0;
        end else begin
            mtime_meta <= mtime;
            mtime_sync <= mtime_meta;
        end
    end

    integer i;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (i = 0; i < 5; i = i + 1) begin
                mtimecmp[i] <= 64'hFFFF_FFFF_FFFF_FFFF;
            end
        end else if (psel && penable && pwrite) begin
            // mtimecmp0
            if (paddr[15:0] == 16'h4000) mtimecmp[0][31:0]  <= pwdata;
            if (paddr[15:0] == 16'h4004) mtimecmp[0][63:32] <= pwdata;
            // mtimecmp1
            if (paddr[15:0] == 16'h4008) mtimecmp[1][31:0]  <= pwdata;
            if (paddr[15:0] == 16'h400C) mtimecmp[1][63:32] <= pwdata;
            // mtimecmp2
            if (paddr[15:0] == 16'h4010) mtimecmp[2][31:0]  <= pwdata;
            if (paddr[15:0] == 16'h4014) mtimecmp[2][63:32] <= pwdata;
            // mtimecmp3
            if (paddr[15:0] == 16'h4018) mtimecmp[3][31:0]  <= pwdata;
            if (paddr[15:0] == 16'h401C) mtimecmp[3][63:32] <= pwdata;
            // mtimecmp4 (Monitor core)
            if (paddr[15:0] == 16'h4020) mtimecmp[4][31:0]  <= pwdata;
            if (paddr[15:0] == 16'h4024) mtimecmp[4][63:32] <= pwdata;
        end
    end

    reg [31:0] prdata_reg;
    always @(*) begin
        case (paddr[15:0])
            16'hbff8: prdata_reg = mtime_sync[31:0];  // BUG-RTC-001: use CDC-synced value
            16'hbffc: prdata_reg = mtime_sync[63:32];
            16'h4000: prdata_reg = mtimecmp[0][31:0];
            16'h4004: prdata_reg = mtimecmp[0][63:32];
            16'h4008: prdata_reg = mtimecmp[1][31:0];
            16'h400C: prdata_reg = mtimecmp[1][63:32];
            16'h4010: prdata_reg = mtimecmp[2][31:0];
            16'h4014: prdata_reg = mtimecmp[2][63:32];
            16'h4018: prdata_reg = mtimecmp[3][31:0];
            16'h401C: prdata_reg = mtimecmp[3][63:32];
            16'h4020: prdata_reg = mtimecmp[4][31:0];
            16'h4024: prdata_reg = mtimecmp[4][63:32];
            default:  prdata_reg = 32'h0;
        endcase
    end
    assign prdata = prdata_reg;

    // Generate interrupts when mtime >= mtimecmp
    assign timer_irq[0] = (mtime_sync >= mtimecmp[0]);
    assign timer_irq[1] = (mtime_sync >= mtimecmp[1]);
    assign timer_irq[2] = (mtime_sync >= mtimecmp[2]);
    assign timer_irq[3] = (mtime_sync >= mtimecmp[3]);
    assign timer_irq[4] = (mtime_sync >= mtimecmp[4]);

endmodule
