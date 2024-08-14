cmake_minimum_required(VERSION 3.0.0)
project(window_test VERSION 0.0.1)
cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)

add_library(libraries INTERFACE
    include/glad/glad.h
)

add_executable(window_test 
    src/main.cpp 
    src/glad.c
)

target_link_libraries(window_test glfw OpenGL::GL)

target_include_directories(window_test PUBLIC
    "${CMAKE_SOURCE_DIR}/include/glad"
)



