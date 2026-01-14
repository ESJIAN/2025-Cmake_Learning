cmake_minimum_required(VERSION 3.10)
project(Lesson2_1)

add_subdirectory(add)
include_directories(add)

#link_libraries(E:/Project/2025-Cmake_Learning/lesson2_1/lib/add_static.lib)
link_directories(E:/Project/2025-Cmake_Learning/lesson2_1/lib)

add_executable(Lession2_1 main.cpp)  

target_link_libraries(Lession2_1 add_static.lib)



  
