cmake_minimum_required(VERSION 3.15)
project(Chapter03)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chapter03 RacingCar.cpp RacingCarFuncAdd.cpp RacingCarEnum.cpp RacingCarOuterFunc.cpp RacingCarClassBase.cpp Car.cpp Car.h RacingMain.cpp CarInline.cpp CarInline.h RacingInlineMain.cpp FruitSaleSim1.cpp)