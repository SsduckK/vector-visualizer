find_package(Eigen3 REQUIRED)


find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

find_package(Pangolin REQUIRED)

add_executable(visualizer main.cpp)
target_include_directories(visualizer PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_include_directories(visualizer PRIVATE ${EIGEN3_INCLUDE_DIR})
target_include_directories(visualizer PRIVATE ${Pangolin_INCLUDE_DIRS})
target_link_libraries(visualizer ${OpenCV_LIBS} ${Pangolin_LIBRARIES})
