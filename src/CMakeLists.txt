find_package(Pangolin REQUIRED)

set(Eigen3_DIR "/home/ws/eigen/share/eigen3/cmake")
find_package(Eigen3 REQUIRED)

set(LIB_SOURCE transformCalc.cpp)

add_library(transformlib ${LIB_SOURCE})
target_include_directories(transformlib PUBLIC ${PROJECT_SOURCE_DIR}/include)
add_executable(visualizer main.cpp transformCalc.cpp)
target_include_directories(visualizer PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_include_directories(visualizer PRIVATE ${EIGEN3_INCLUDE_DIR})
target_link_libraries(visualizer ${Pangolin_LIBRARIES} Eigen3::Eigen)


