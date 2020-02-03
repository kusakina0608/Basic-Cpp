cmake_minimum_required(VERSION 3.15)
project(Chapter06)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chapter06 ConstObject.cpp ConstOverloading.cpp MyFriendClass.cpp MyFriendFunction.cpp CComStatic.cpp NeedGlobal.cpp StaticMember.cpp PublicStaticMember.cpp ConstStaticMember.cpp Mutable.cpp)