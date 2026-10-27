// SPDX-License-Identifier: Apache-2.0
// SMVDU TITAN-X Microprocessor Coverage Simulation Driver
#include <verilated.h>
#include <verilated_cov.h>
#include "Vrv_core_top.h"
#include <iostream>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vrv_core_top* top = new Vrv_core_top;

    std::cout << "[COVERAGE RUNNER] Initializing RV Core Top Coverage Driver..." << std::endl;

    // Reset sequence
    top->clk = 0;
    top->rst_n = 0;
    top->irq_m_ext = 0;
    top->irq_m_soft = 0;
    top->irq_m_timer = 0;

    top->imem_arready = 1;
    top->imem_rvalid = 0;
    top->imem_rdata = 0x00000013; // NOP
    top->imem_rlast = 1;
    top->imem_rresp = 0;

    top->dmem_arready = 1;
    top->dmem_rvalid = 0;
    top->dmem_rdata = 0;
    top->dmem_rresp = 0;
    top->dmem_awready = 1;
    top->dmem_wready = 1;
    top->dmem_bvalid = 0;
    top->dmem_bresp = 0;

    for (int i = 0; i < 20; ++i) {
        top->clk = 0; top->eval(); main_time += 5;
        top->clk = 1; top->eval(); main_time += 5;
    }
    top->rst_n = 1;
    std::cout << "[COVERAGE RUNNER] Reset released. Beginning instruction coverage stream..." << std::endl;

    // Instruction sequence exercising ALU, shifts, arithmetic, branches, and bypasses
    uint32_t instrs[] = {
        0x00500093, // addi x1, x0, 5
        0x00a00113, // addi x2, x0, 10
        0x002081b3, // add x3, x1, x2       (x3 = 15)
        0x40118233, // sub x4, x3, x1       (x4 = 10)
        0x003102b3, // mul x5, x2, x3       (x5 = 150)
        0x00408333, // add x6, x1, x4       (x6 = 15)
        0x0020c3b3, // xor x7, x1, x2       (x7 = 15)
        0x0020e433, // or  x8, x1, x2       (x8 = 15)
        0x0020f4b3, // and x9, x1, x2       (x9 = 0)
        0x00109513, // slli x10, x1, 1      (x10 = 10)
        0x0010d593, // srli x11, x1, 1      (x11 = 2)
        0x00000013  // nop
    };
    int num_instrs = sizeof(instrs) / sizeof(instrs[0]);

    int pc_idx = 0;
    for (int cycle = 0; cycle < 1000; ++cycle) {
        top->clk = 0;
        top->eval();
        main_time += 5;

        top->clk = 1;
        if (top->imem_arvalid) {
            top->imem_rvalid = 1;
            top->imem_rdata = instrs[pc_idx % num_instrs];
            pc_idx++;
        }

        // Handle DMEM requests
        if (top->dmem_awvalid && top->dmem_wvalid) {
            top->dmem_bvalid = 1;
        } else {
            top->dmem_bvalid = 0;
        }

        if (top->dmem_arvalid) {
            top->dmem_rvalid = 1;
            top->dmem_rdata = 0x12345678AABBCCDDULL;
        } else {
            top->dmem_rvalid = 0;
        }

        top->eval();
        main_time += 5;
    }

    top->final();

    // Write coverage database
    VerilatedCov::write("verification/coverage/rv_core_coverage.dat");
    std::cout << "[COVERAGE RUNNER] Execution complete. Coverage database saved to verification/coverage/rv_core_coverage.dat" << std::endl;

    delete top;
    return 0;
}
