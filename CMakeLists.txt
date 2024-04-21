cmake_minimum_required(VERSION 3.14)

project(vector_visualizer)

find_package(Pangolin REQUIRED)
find_package(Eigen3 REQUIRED)
message(STATUS "Pangolin Libraries: ${Pangolin_LIBRARIES}")

add_subdirectory(src)
add_subdirectory(test)
