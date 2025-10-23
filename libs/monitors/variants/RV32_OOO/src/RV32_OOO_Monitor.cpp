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


#include "RV32_OOO_Monitor.h"

#include "softwareEval-backends/Channel.h"

#include <sstream>
#include <string>
#include <stdbool.h>
#include <cstdint>

extern "C"
{
  uint64_t *RV32_OOO_Monitor_instrCnt;
  uint64_t *RV32_OOO_Monitor_typeId_buffer;
  uint64_t *RV32_OOO_Monitor_rs1_buffer;
  uint64_t *RV32_OOO_Monitor_rs2_buffer;
  uint64_t *RV32_OOO_Monitor_rd_buffer;
  uint64_t *RV32_OOO_Monitor_pc_buffer;
}

extern InstructionMonitorSet* RV32_OOO_InstrMonitorSet;

RV32_OOO_Monitor::RV32_OOO_Monitor(): Monitor("RV32_OOO_Monitor", RV32_OOO_InstrMonitorSet)
{}

void RV32_OOO_Monitor::connectChannel(Channel* channel_)
{
  Monitor::connectChannel(channel_);

  RV32_OOO_Monitor_instrCnt = &(channel_->instrCnt);
  RV32_OOO_Monitor_typeId_buffer = channel_->typeId;

  RV32_OOO_Monitor_rs1_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rs1"));
  RV32_OOO_Monitor_rs2_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rs2"));
  RV32_OOO_Monitor_rd_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rd"));
  RV32_OOO_Monitor_pc_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("pc"));
}


std::string RV32_OOO_Monitor::getBlockDeclarations(void) const
{
  std::stringstream ret_strs;
 
  ret_strs << "extern uint64_t *RV32_OOO_Monitor_instrCnt;\n";
  ret_strs << "extern uint64_t *RV32_OOO_Monitor_typeId_buffer;\n";

  ret_strs << "extern uint64_t *RV32_OOO_Monitor_rs1_buffer;\n";
  ret_strs << "extern uint64_t *RV32_OOO_Monitor_rs2_buffer;\n";
  ret_strs << "extern uint64_t *RV32_OOO_Monitor_rd_buffer;\n";
  ret_strs << "extern uint64_t *RV32_OOO_Monitor_pc_buffer;\n";

  return ret_strs.str();
}
