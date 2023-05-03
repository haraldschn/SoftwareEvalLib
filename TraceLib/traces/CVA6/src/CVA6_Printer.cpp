/*
 * Copyright 2022 Chair of EDA, Technical University of Munich
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

/********************* AUTO GENERATE FILE (create by Trace-Generator) *********************/

#include "CVA6_Printer.h"

#include "Components/Printer.h"

#include <iostream>
#include <iomanip>

extern InstructionPrinterSet* CVA6_InstrPrinterSet;

CVA6_Printer::CVA6_Printer(): Printer("CVA6_Printer", CVA6_InstrPrinterSet)
{}

void CVA6_Printer::initialize(void)
{
  std::stringstream caption_strs;	
  caption_strs << std::setfill(' ') << std::setw(10) << std::left << "rs1" << " | ";
  caption_strs << std::setfill(' ') << std::setw(10) << std::left << "rs2" << " | ";
  caption_strs << std::setfill(' ') << std::setw(10) << std::left << "rd" << " | ";
  caption_strs << std::setfill(' ') << std::setw(10) << std::left << "pc" << " | ";
  caption_strs << std::setfill(' ') << std::setw(10) << std::left << "brTarget" << " | ";
  caption_strs << std::setfill(' ') << std::setw(10) << std::left << "memAddr" << " | ";

  streamer.setHeader(caption_strs.str() + "\n");
  streamer.openStream();
}