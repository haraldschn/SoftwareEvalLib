/*
* Copyright 2025 Chair of EDA, Technical University of Munich
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*	 http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

/********************* AUTO GENERATE FILE (create by M2-ISA-R::Trace-Generator) *********************/


#include "Monitor.h"

#include "etiss/Instruction.h"

#include <sstream>
#include <string>

InstructionMonitorSet *InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet = new InstructionMonitorSet("InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet");

static InstructionMonitor *instrMonitor_ADD = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "add",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SUB = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "sub",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SLL = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "sll",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SLT = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "slt",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SLTU = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "sltu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_XOR = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "xor",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SRL = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "srl",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SRA = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "sra",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_OR = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "or",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_AND = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "and",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_ADDW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "addw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SUBW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "subw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SLLW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "sllw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SRLW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "srlw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SRAW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "sraw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_MUL = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "mul",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_MULH = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "mulh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_MULHSU = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "mulhsu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_MULHU = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "mulhu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_DIV = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "div",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_DIVU = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "divu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_REM = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "rem",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_REMU = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "remu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_MULW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "mulw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_DIVW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "divw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_DIVUW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "divuw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_REMW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "remw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_REMUW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "remuw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_ADDI = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "addi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SLTI = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "slti",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SLTIU = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "sltiu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_XORI = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "xori",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_ORI = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "ori",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_ANDI = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "andi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SLLI = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "slli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SRLI = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "srli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SRAI = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "srai",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SLLIW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "slliw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SRLIW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "srliw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SRAIW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "sraiw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FADD_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fadd_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FSUB_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fsub_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FMUL_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fmul_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FDIV_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fdiv_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FMIN_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fmin_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FMAX_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fmax_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FSGNJ_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fsgnj_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FSGNJN_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fsgnjn_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FSGNJX_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fsgnjx_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FEQ_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "feq_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FLT_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "flt_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FLE_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fle_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FSQRT_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fsqrt_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 3 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FMADD_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fmadd_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rs3 = 0;
    static etiss::instr::BitArrayRange R_rs3_0(31,27);
    rs3 += R_rs3_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs3_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs3<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rs3 = 0;
    static etiss::instr::BitArrayRange R_rs3_0(31,27);
    rs3 += R_rs3_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FMSUB_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fmsub_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rs3 = 0;
    static etiss::instr::BitArrayRange R_rs3_0(31,27);
    rs3 += R_rs3_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs3_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs3<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rs3 = 0;
    static etiss::instr::BitArrayRange R_rs3_0(31,27);
    rs3 += R_rs3_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FNMADD_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fnmadd_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rs3 = 0;
    static etiss::instr::BitArrayRange R_rs3_0(31,27);
    rs3 += R_rs3_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs3_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs3<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rs3 = 0;
    static etiss::instr::BitArrayRange R_rs3_0(31,27);
    rs3 += R_rs3_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FNMSUB_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fnmsub_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rs3 = 0;
    static etiss::instr::BitArrayRange R_rs3_0(31,27);
    rs3 += R_rs3_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs2<< "ULL]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs3_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs3<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rs3 = 0;
    static etiss::instr::BitArrayRange R_rs3_0(31,27);
    rs3 += R_rs3_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_LB = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "lb",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_mem_addr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1<< "ULL" << "]"<< " + "<< imm<< "LL" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_LH = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "lh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_mem_addr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1<< "ULL" << "]"<< " + "<< imm<< "LL" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_LW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "lw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_mem_addr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1<< "ULL" << "]"<< " + "<< imm<< "LL" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_LBU = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "lbu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_mem_addr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1<< "ULL" << "]"<< " + "<< imm<< "LL" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_LHU = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "lhu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_mem_addr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1<< "ULL" << "]"<< " + "<< imm<< "LL" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_LWU = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "lwu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_mem_addr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1<< "ULL" << "]"<< " + "<< imm<< "LL" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_LD = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "ld",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_mem_addr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1<< "ULL" << "]"<< " + "<< imm<< "LL" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FLW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "flw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 6 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_mem_addr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1<< "ULL" << "]"<< " + "<< imm<< "LL" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SB = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "sb",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_5(31,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_0(11,7);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_mem_addr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1<< "ULL" << "]"<< " + "<< imm<< "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SH = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "sh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_5(31,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_0(11,7);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_mem_addr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1<< "ULL" << "]"<< " + "<< imm<< "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "sw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_5(31,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_0(11,7);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_mem_addr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1<< "ULL" << "]"<< " + "<< imm<< "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_SD = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "sd",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_5(31,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_0(11,7);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_mem_addr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1<< "ULL" << "]"<< " + "<< imm<< "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FSW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fsw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_5(31,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_0(11,7);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 8 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "(etiss_uint32)(((RV64IMACFD*)cpu)->F["<< rs2<< "ULL])" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_mem_addr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1<< "ULL" << "]"<< " + "<< imm<< "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_CSRRW = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "csrrw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 9 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_csr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << csr << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_csr_reg_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "RV64IMACFD_csr_read(cpu, system, plugin_pointers, "<< csr << ")" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_CSRRS = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "csrrs",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 9 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_csr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << csr << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_csr_reg_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "RV64IMACFD_csr_read(cpu, system, plugin_pointers, "<< csr << ")" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_CSRRC = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "csrrc",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 9 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_csr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << csr << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_csr_reg_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "RV64IMACFD_csr_read(cpu, system, plugin_pointers, "<< csr << ")" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_CSRRWI = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "csrrwi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 10 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_csr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << csr << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_CSRRSI = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "csrrsi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 10 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_csr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << csr << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_CSRRCI = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "csrrci",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 10 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_csr_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << csr << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_BEQ = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "beq",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 11 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_jump_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_BNE = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "bne",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 11 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_jump_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_BLT = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "blt",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 11 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_jump_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_BGE = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "bge",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 11 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_jump_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_BLTU = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "bltu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 11 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_jump_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_BGEU = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "bgeu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 11 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs2_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_jump_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_LUI = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "lui",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,12);
    imm += R_imm_12.read(ba) << 12;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 12 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,12);
    imm += R_imm_12.read(ba) << 12;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_AUIPC = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "auipc",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,12);
    imm += R_imm_12.read(ba) << 12;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 12 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,12);
    imm += R_imm_12.read(ba) << 12;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FCVT_W_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fcvt_w_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 13 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FCVT_WU_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fcvt_wu_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 13 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FMV_X_W = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fmv_x_w",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 13 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FCLASS_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fclass_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 13 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FCVT_L_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fcvt_l_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 13 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FCVT_LU_S = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fcvt_lu_s",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 13 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rs1<< "ULL]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FCVT_S_W = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fcvt_s_w",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 14 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FCVT_S_WU = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fcvt_s_wu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 14 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FMV_W_X = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fmv_w_x",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 14 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FCVT_S_L = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fcvt_s_l",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 14 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_FCVT_S_LU = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "fcvt_s_lu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 14 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "((RV64IMACFD*)cpu)->F["<< rd<< "ULL]" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor__DEF = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "_def",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 15 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_JAL = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "jal",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_20(31,31);
    imm += R_imm_20.read(ba) << 20;
    static etiss::instr::BitArrayRange R_imm_1(30,21);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(20,20);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_12(19,12);
    imm += R_imm_12.read(ba) << 12;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 16 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_20(31,31);
    imm += R_imm_20.read(ba) << 20;
    static etiss::instr::BitArrayRange R_imm_1(30,21);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(20,20);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_12(19,12);
    imm += R_imm_12.read(ba) << 12;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_jump_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_JALR = new InstructionMonitor(
  InstructionTrace_RV64IMF_Zicsr_InstrMonitorSet,
  "jalr",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_typeId_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << 17 << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_code_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64IMF_Zicsr_Monitor_assembly_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_imm_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rs1_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rs1 << "]" << ";\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_rd_data_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X["<< rd << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64IMF_Zicsr_Monitor_jump_pc_buffer[*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64IMF_Zicsr_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);
