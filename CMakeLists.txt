cmake_minimum_required(VERSION 3.17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-lstdc++")

project(unholy-grounds)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp src/*.c include/*.c include/*.cpp)
add_executable(unholy-grounds ${SOURCE_FILES})

find_package(glfw3 3.3 REQUIRED)
find_package(OpenGL REQUIRED COMPONENTS OpenGL)

add_dependencies(unholy-grounds OpenGL::GL)

include_directories(${PROJECT_SOURCE_DIR}/include)

target_link_libraries(unholy-grounds glfw)
target_link_libraries(unholy-grounds OpenGL::GL)
target_link_libraries(unholy-grounds ${CMAKE_DL_LIBS})
