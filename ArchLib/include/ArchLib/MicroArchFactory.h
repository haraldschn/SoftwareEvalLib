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

#ifndef MICRO_ARCH_FACTOR_H
#define MICRO_ARCH_FACTOR_H

#include "Components/Model.h"

#include <string>

class MicroArchFactory
{
private:
  enum uArchId_t {SimpleRISCV_H_fw_DynBrPred, CV32E40P, CVA6};
public:
  int getMicroArchHandle(std::string);
  PerformanceModel* getPerformanceModel(int);
};
  
#endif //MICRO_ARCH_FACTOR_H
