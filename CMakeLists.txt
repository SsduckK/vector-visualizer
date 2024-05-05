cmake_minimum_required(VERSION 3.14)

project(vector_visualizer)

find_package(Eigen3 REQUIRED)
find_package(FLTK REQUIRED)
find_package(OpenCV REQUIRED)

include_directories(${FLTK_INCLUDE_DIR})
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(src)
add_subdirectory(test)
