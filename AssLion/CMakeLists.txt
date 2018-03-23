# cmake_minimum_required(VERSION <specify CMake version here>)
set(CMAKE_LEGACY_CYGWIN_WIN32 0) # Remove when CMake >= 2.8.4 is required
project(AssLion)

set(CMAKE_CXX_STANDARD 11)

add_executable(AssLion main.cpp point.cpp point.h polygon.h polygon.cpp node.tpp node.h MyPolygons.h MyPolygons.tpp ComparePoly.h ComparePoly.cpp)