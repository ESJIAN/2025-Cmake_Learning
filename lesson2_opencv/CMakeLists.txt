cmake_minimum_required(VERSION 3.10)
project(lesson2_opencv)

# 1. 设置 OpenCV 的路径 (指向包含 OpenCVConfig.cmake 的目录)
set(OpenCV_DIR "E:/Project/2025-Cmake_Learning/opencv/build")

# 2. 查找 OpenCV 库
find_package(OpenCV REQUIRED)

add_executable(lesson2_opencv main.cpp)  

# 3. 包含头文件
target_include_directories(lesson2_opencv PRIVATE ${OpenCV_INCLUDE_DIRS})

# 4. 链接 OpenCV 库
target_link_libraries(lesson2_opencv ${OpenCV_LIBS})

# (可选)5. 自动将 OpenCV 的 DLL 复制到 EXE 所在的目录，解决运行时的 DLL 缺失问题
# add_custom_command(TARGET lesson2_opencv POST_BUILD
#    COMMAND ${CMAKE_COMMAND} -E copy_if_different
#    "E:/Project/2025-Cmake_Learning/opencv/build/x64/vc16/bin/opencv_world4120$<$<CONFIG:Debug>:d>.dll"
#     $<TARGET_FILE_DIR:lesson2_opencv>
# )