add_executable(gui_test gui_test.cpp)

include_directories("${PROJECT_SOURCE_DIR}/include" ${Pangolin_INCLUDE_DIRS})
target_link_libraries(gui_test PRIVATE GTest::GTest GTest::Main transformlib ${Pangolin_LIBRARIES})

