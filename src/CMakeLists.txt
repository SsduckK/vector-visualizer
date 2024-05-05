set(Eigen3_DIR "/home/ws/eigen/share/eigen3/cmake")

set(LIB_SOURCE transformCalc.cpp)

add_library(transformlib ${LIB_SOURCE})
target_include_directories(transformlib PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_include_directories(transformlib PRIVATE ${Eigen3_DIR}) 

add_executable(visualizer main.cpp GUI.cpp)
target_include_directories(visualizer PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_include_directories(visualizer PRIVATE ${Eigen3_DIR})
target_link_libraries(visualizer ${OpenCV_LIBS})

