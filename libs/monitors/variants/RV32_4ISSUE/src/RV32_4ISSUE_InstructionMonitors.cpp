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

InstructionMonitorSet *RV32_4ISSUE_InstrMonitorSet = new InstructionMonitorSet("RV32_4ISSUE_InstrMonitorSet");

static InstructionMonitor *instrMonitor_add = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sub = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_xor = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_or = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 3 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_and = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_slt = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sltu = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 6 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sll = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_srl = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 8 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sra = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 9 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_addi = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "addi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 10 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_xori = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "xori",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 11 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_ori = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "ori",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 12 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_andi = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "andi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 13 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_slti = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "slti",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 14 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sltiu = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "sltiu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 15 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_slli = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "slli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 16 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_srli = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "srli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 17 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_srai = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "srai",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 18 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_auipc = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "auipc",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 19 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lui = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "lui",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 20 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_mul = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 21 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_mulh = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 22 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_mulhu = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 23 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_mulhsu = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 24 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_div = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 25 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_data_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_rem = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 26 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_data_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_divu = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 27 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_data_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_remu = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
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
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 28 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_data_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X["<< rs2 << "]" << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_csrrw = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "csrrw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 29 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_csrrs = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "csrrs",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 30 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_csrrc = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "csrrc",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 31 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_csrrwi = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "csrrwi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 32 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_csrrsi = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "csrrsi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 33 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_csrrci = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "csrrci",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 34 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sb = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "sb",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 35 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sh = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "sh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 36 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sw = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "sw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 37 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lw = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "lw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 38 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lh = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "lh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 39 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lhu = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "lhu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 40 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lb = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "lb",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 41 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lbu = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "lbu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 42 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_beq = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "beq",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 43 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_brTarget_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ + (((int16_t)(imm  << 3)) >> 3) << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_bne = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "bne",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 44 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_brTarget_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ + (((int16_t)(imm  << 3)) >> 3) << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_blt = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "blt",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 45 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_brTarget_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ + (((int16_t)(imm  << 3)) >> 3) << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_bge = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "bge",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 46 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_brTarget_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ + (((int16_t)(imm  << 3)) >> 3) << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_bltu = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "bltu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 47 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_brTarget_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ + (((int16_t)(imm  << 3)) >> 3) << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_bgeu = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "bgeu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 48 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs2_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_brTarget_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ + (((int16_t)(imm  << 3)) >> 3) << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_jal = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "jal",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_20(31,31);
    imm += R_imm_20.read(ba) << 20;
    static etiss::instr::BitArrayRange R_imm_1(30,21);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(20,20);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_12(19,12);
    imm += R_imm_12.read(ba) << 12;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 49 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_brTarget_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ + (((int32_t)(imm  << 11)) >> 11) << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_jalr = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "jalr",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 50 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rs1_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_rd_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_brTarget_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << "("<< "*((RV32IMACFD*)cpu)->X["<< rs1 << "]"<< " + "<< (((int16_t)(imm  << 4)) >> 4)<< ") & -2U" << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor__def = new InstructionMonitor(
  RV32_4ISSUE_InstrMonitorSet,
  "_def",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    ret_strs << "RV32_4ISSUE_Monitor_typeId_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << 51 << ";\n";
    
    ret_strs << "RV32_4ISSUE_Monitor_pc_buffer[*RV32_4ISSUE_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*RV32_4ISSUE_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
