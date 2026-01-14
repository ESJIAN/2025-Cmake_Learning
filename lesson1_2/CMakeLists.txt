cmake_minimum_required(VERSION 3.10)
project(Lesson1_2)

# 告诉 CMake 包含头文件的路径
include_directories(../lesson1_1)

# 创建可执行程序，包含当前目录的 main.cpp 和 lesson1_1 中的实现文件
add_executable(hello_world_v2 main.cpp ../lesson1_1/add.cpp)
