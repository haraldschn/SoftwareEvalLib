
TARGET_SOURCES(SWEVAL_MONITORS_LIB PRIVATE
  	src/InstructionTrace_RV32IM_Zicsr_Monitor.cpp
	src/InstructionTrace_RV32IM_Zicsr_InstructionMonitors.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_MONITORS_LIB PRIVATE
include
)
