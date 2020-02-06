cmake_minimum_required(VERSION 3.15)
project(Chapter13)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chapter13 AddFunctionTemplete.cpp TwoTypeAddFunction.cpp PrimitiveFunctionTemplate.cpp NeedSpecialFunctionTemplate.cpp SpecialFunctionTemplate.cpp PointClassTemplate.cpp PointClassTemplateFuncDef.cpp PointTemplate.cpp PointTemplate.h PointMain.cpp)