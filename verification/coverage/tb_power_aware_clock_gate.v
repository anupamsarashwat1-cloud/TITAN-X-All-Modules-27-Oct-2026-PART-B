// SPDX-License-Identifier: Apache-2.0
// Power-Aware Clock-Gating Verification Testbench
`timescale 1ns/1ps

module tb_power_aware_clock_gate;

    reg clk;
    reg en;
    reg te;
    wire gclk;

    ICGX4 u_icg (
        .CLK  (clk),
        .EN   (en),
        .TE   (te),
        .GCLK (gclk)
    );

    always #5 clk = ~clk;

    integer errors = 0;
    integer toggles = 0;
    reg initialized = 0;

    always @(posedge gclk or negedge gclk) begin
        if (initialized)
            toggles = toggles + 1;
    end

    initial begin
        clk = 0;
        en  = 0;
        te  = 0;
        toggles = 0;

        #1; // Allow time-0 x->0 resolution
        initialized = 1;

        $display("\n==============================================");
        $display("   POWER-AWARE CLOCK-GATING VERIFICATION      ");
        $display("==============================================");

        // Test 1: Gated Mode (EN=0, TE=0) -> Clock should be fully suppressed
        #50;
        if (toggles != 0 || gclk != 1'b0) begin
            $display("[FAIL] Test 1: Clock not gated! Toggles=%0d, GCLK=%b", toggles, gclk);
            errors = errors + 1;
        end else begin
            $display("[PASS] Test 1: Clock cleanly suppressed in low-power idle mode (0 dynamic power)");
        end

        // Test 2: Active Mode (EN=1, TE=0) -> Clock should cleanly toggle
        toggles = 0;
        @(negedge clk);
        en = 1;
        #100;
        if (toggles < 18) begin
            $display("[FAIL] Test 2: GCLK did not toggle as expected! Toggles=%0d", toggles);
            errors = errors + 1;
        end else begin
            $display("[PASS] Test 2: Clock un-gated cleanly during active execution (%0d toggles)", toggles);
        end

        // Test 3: Scan / DFT Bypass (EN=0, TE=1) -> Test enable forces clock on
        @(negedge clk);
        en = 0;
        te = 1;
        toggles = 0;
        #100;
        if (toggles < 18) begin
            $display("[FAIL] Test 3: Scan bypass failed! Toggles=%0d", toggles);
            errors = errors + 1;
        end else begin
            $display("[PASS] Test 3: Scan / DFT bypass verified (TE overrides EN)");
        end

        // Test 4: Dynamic Re-gating
        @(negedge clk);
        te = 0;
        @(negedge clk);
        toggles = 0;
        #50;
        if (toggles != 0 || gclk != 1'b0) begin
            $display("[FAIL] Test 4: Re-gating failed! Toggles=%0d", toggles);
            errors = errors + 1;
        end else begin
            $display("[PASS] Test 4: Dynamic re-gating confirmed (sleep power state re-entered)");
        end

        $display("==============================================");
        if (errors == 0) begin
            $display(">>> POWER-AWARE VERIFICATION PASSED (0 ERRORS) <<<");
            $display("==============================================\n");
            $finish(0);
        end else begin
            $display(">>> POWER-AWARE VERIFICATION FAILED (%0d ERRORS) <<<", errors);
            $display("==============================================\n");
            $fatal(1);
        end
    end

endmodule
