# Phase 12: High-Definition Video & Vision Pipeline

## Overview
Phase 12 covers the verification of all 4 modules in the high-definition vision and video pipeline of the SMVDU-TITAN-X SoC:
1. `video/mipi_csi2_rx/mipi_csi2_rx.v` (4-lane MIPI CSI-2 D-PHY receiver with AXI4-Stream packet framing)
2. `video/isp_pipeline/isp_pipeline.v` (Image signal processor with bypass mode, active pixel inversion & backpressure stalling)
3. `video/vdma/vdma.v` (Video DMA controller with 2D stride geometry, frame base addresses & stream ingestion)
4. `video/hdmi_ctrl/hdmi_ctrl.v` (HDMI 1.4 display controller with raster timing generator & differential TMDS clock/data drivers)

## Verification Tasks
- [x] Task 12.1: Verify `video/mipi_csi2_rx/mipi_csi2_rx.v` (10/10 tests pass: reset state, APB pready/pslverr, control R/W, D-PHY idle, 3-beat stream unpacking, stream end, status register active tracking, link clear)
- [x] Task 12.2: Verify `video/isp_pipeline/isp_pipeline.v` (10/10 tests pass: reset state, bypass_ctrl default 1, gamma_ctrl R/W, bypass SOF/EOL propagation, stream idle, active processing enable, pixel inversion, downstream backpressure stall, pipeline drain)
- [x] Task 12.3: Verify `video/vdma/vdma.v` (9/9 tests pass: reset vdma_irq/pready, s_axis_s2mm_tready default, CR enable, MM2S 2D geometry, S2MM 2D geometry, SR reset default, S2MM video stream ingestion, AXI4 MM master idle, MM2S stream idle)
- [x] Task 12.4: Verify `video/hdmi_ctrl/hdmi_ctrl.v` (7/7 tests pass: APB pready/pslverr, TMDS differential clock pairs complementary, TMDS differential data pairs complementary, mini-frame raster timing programming, active VDE assertion, blanking suppression, stream handshaking)

## Summary Verdict
All 4 modules compiled with `iverilog -g2012`, unit simulated with `vvp`, generated digital waveforms, and enriched READMEs with 100% test pass.
