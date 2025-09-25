cmake_minimum_required(VERSION 4.0)
project (MergeSort VERSION 1.0.0 LANGUAGES CXX )

set( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -g" )

#=== Test Writing with TinyXML2 target ===
add_executable(merge "src/main_merge.cpp")

#define C++17 as the standard.
set_property( TARGET merge
              PROPERTY CXX_STANDARD 17)
