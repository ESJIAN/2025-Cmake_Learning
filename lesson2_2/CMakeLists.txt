cmake_minimum_required(VERSION 3.10)
project(lesson2_2)

# 自动导出符号（解决 Windows DLL 链接的关键）
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

# 添加子目录，这会创建一个名为 add_shared 的目标 (Target)
add_subdirectory(add)

# 包含头文件所在的目录（是 add 目录，不是 bin）
include_directories(add)

add_executable(lesson2_2 main.cpp)  

# （可选）使用 target_include_directories 替代全局 include_directories
# target_include_directories(lesson2_2 PRIVATE add)

# 直接链接目标名称，CMake 会自动处理库路径
target_link_libraries(lesson2_2 add_shared)

# (可选) 自动将生成的 DLL 复制到 EXE 所在的目录，方便直接运行
# add_custom_command(TARGET lesson2_2 POST_BUILD
#     COMMAND ${CMAKE_COMMAND} -E copy_if_different
#     $<TARGET_FILE:add_shared>
#     $<TARGET_FILE_DIR:lesson2_2>
# )