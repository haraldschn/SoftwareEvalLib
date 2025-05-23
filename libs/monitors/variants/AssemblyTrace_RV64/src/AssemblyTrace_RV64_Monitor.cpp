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


#include "AssemblyTrace_RV64_Monitor.h"

#include "softwareEval-backends/Channel.h"

#include <sstream>
#include <string>
#include <stdbool.h>
#include <cstdint>

extern "C"
{
  uint64_t *AssemblyTrace_RV64_Monitor_instrCnt;
  uint64_t *AssemblyTrace_RV64_Monitor_typeId_buffer;
  int *AssemblyTrace_RV64_Monitor_pc_buffer;
  char (*AssemblyTrace_RV64_Monitor_assembly_buffer)[50];
}

extern InstructionMonitorSet* AssemblyTrace_RV64_InstrMonitorSet;

AssemblyTrace_RV64_Monitor::AssemblyTrace_RV64_Monitor(): Monitor("AssemblyTrace_RV64_Monitor", AssemblyTrace_RV64_InstrMonitorSet)
{}

void AssemblyTrace_RV64_Monitor::connectChannel(Channel* channel_)
{
  Monitor::connectChannel(channel_);

  AssemblyTrace_RV64_Monitor_instrCnt = &(channel_->instrCnt);
  AssemblyTrace_RV64_Monitor_typeId_buffer = channel_->typeId;

  AssemblyTrace_RV64_Monitor_pc_buffer = static_cast<int*>(channel_->getTraceValueHook("pc"));
  AssemblyTrace_RV64_Monitor_assembly_buffer = static_cast<char(*)[50]>(channel_->getTraceValueHook("assembly"));
}


std::string AssemblyTrace_RV64_Monitor::getBlockDeclarations(void) const
{
  std::stringstream ret_strs;
  ret_strs << "#include <string.h>\n";
 
  ret_strs << "extern uint64_t *AssemblyTrace_RV64_Monitor_instrCnt;\n";
  ret_strs << "extern uint64_t *AssemblyTrace_RV64_Monitor_typeId_buffer;\n";

  ret_strs << "extern int *AssemblyTrace_RV64_Monitor_pc_buffer;\n";
  ret_strs << "extern char (*AssemblyTrace_RV64_Monitor_assembly_buffer)[50];\n";

  return ret_strs.str();
}
