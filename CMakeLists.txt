cmake_minimum_required(VERSION 3.10)

project(CS2_calculator)

set(CMAKE_CXX_STANDARD 11)
SET(CMAKE-RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CALCULATOR_SOURCES
calculator.cpp
)
 
add_library(calculator ${CALCULATOR_SOURCES})
set(TEST_SOURCES
test.cpp
) 
add_executable(test ${TEST_SOURCES})
set_target_properties(test PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
target_link_libraries(test calculator)
