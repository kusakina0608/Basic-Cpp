cmake_minimum_required(VERSION 3.15)
project(Chapter15)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chapter15 UnhandlingException.cpp HandlingExceptionUseIf.cpp HandlingExceptionTryCatch.cpp PassException.cpp DiffHandlingPosition.cpp StackUnwinding.cpp CatchList.cpp ATMSim.cpp ATMSim2.cpp CatchFlow.cpp BadAlloc.cpp ReThrow.cpp)