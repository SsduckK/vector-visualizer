add_executable(gui_test gui_test.cpp)

target_include_directories(gui_test PRIVATE "${PROJECT_SOURCE_DIR}/include")
target_include_directories(gui_test PRIVATE ${OpenCV_INCLUDE_DIRS})

target_link_libraries(gui_test PRIVATE GTest::GTest GTest::Main transformlib ${FLTK_LIBRARIES} ${OpenCV_LIBS})

