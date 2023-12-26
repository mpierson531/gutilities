set(CMAKE_CXX_STANDARD 23)
set(CMAKE_C_STANDARD 23)

set(GCC_COVERAGE_COMPILE_FLAGS "-O0")
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS})

cmake_minimum_required(VERSION 3.26)
project(gutilities_tests)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(gutilities)

target_link_libraries(${PROJECT_NAME} gutilities)