cmake_minimum_required(VERSION 3.12)
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})

file(GLOB SOURCE_FILES *.cpp)

foreach(SOURCE_PATH ${SOURCE_FILES})
    get_filename_component(EXECUTABLE_NAME ${SOURCE_PATH} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SOURCE_PATH})
    target_link_libraries(${EXECUTABLE_NAME} ${GTEST_BOTH_LIBRARIES})
    add_test(Name ${EXECUTABLE_NAME}
             COMMAND ${EXECUTABLE_NAME})
endforeach(SOURCE_PATH ${SOURCE_FILES})