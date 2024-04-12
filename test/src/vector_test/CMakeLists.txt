add_executable(vector_test vector_test.cpp)

include_directories("${PROJECT_SOURCE_DIR}/include")
target_link_libraries(vector_test GTest::GTest GTest::Main)

