cmake_minimum_required(VERSION 3.14)

project(vector_visualizer)

find_package(Eigen3 REQUIRED)
find_package(FLTK REQUIRED)
find_package(OpenCV REQUIRED)

add_subdirectory(src)
add_subdirectory(test)
