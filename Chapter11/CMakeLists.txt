cmake_minimum_required(VERSION 3.15)
project(Chapter11)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chapter11 FirstOperationOverloading.cpp AssignShallowCopyError.cpp InheritAssignOperation.cpp ImproveInit.cpp ArrayClass.cpp StableConstArrayProb.cpp StableConstArraySolu.cpp StablePointObjArray.cpp StablePointPtrArray.cpp)