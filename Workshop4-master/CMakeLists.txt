cmake_minimum_required(VERSION 3.0)

project(Workshop4 CXX)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 14)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

#### the list of targets ####
add_executable(ex1_do_while ex1_do_while/main.cpp)
add_executable(ex2_c_string ex2_c_string/main.cpp)
add_executable(ex3_cpp_string ex3_cpp_string/main.cpp)
add_executable(ex4_cpp_string ex4_cpp_string/main.cpp)
add_executable(problem_1 problem_1/main.cpp)
add_executable(problem_2 problem_2/main.cpp)
add_executable(problem_3 problem_3/main.cpp)
add_executable(problem_4 problem_4/main.cpp)

