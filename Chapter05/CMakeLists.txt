cmake_minimum_required(VERSION 3.15)
project(Chapter05)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chapter05 ClassInit.cpp ShallowCopyError.cpp PassObjCopycon.cpp ReturnObjCopycon.cpp IKnowTempObj.cpp ReturnObjDeadTime.cpp)