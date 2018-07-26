#cmake_minimum_required(VERSION 3.10)
project(Demo)

#指定头文件目录
include_directories(include)
include_directories(include/employee)

#指定原始目录，不要忘记添加第二个默认参数 dir_srcs
aux_source_directory(source dir_srcs)
aux_source_directory(source/employee dir_srcs)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -D FREEGLUT_STATIC")

set(WORK ${dir_srcs})

add_executable(Demo ${WORK})

target_link_libraries(Demo freeglut_static opengl32 winmm gdi32 glu32.lib)