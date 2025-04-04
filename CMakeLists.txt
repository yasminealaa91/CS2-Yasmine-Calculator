cmake_minimum_required(VERSION 3.10)

project(CS2_calculator)

set(CMAKE_CXX_STANDARD 11)

set(CALCULATOR_SOURCES
calculator.cpp
)
 
add_library(calculator ${CALCULATOR_SOURCES})
set(TEST_SOURCES
test.cpp
) 
add_executable(test ${TEST_SOURCES})

target_link_libraries(test calculator)
