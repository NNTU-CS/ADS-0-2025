cmake_minimum_required (VERSION 3.16)
project (ADS-0-2025)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3 -g")

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
