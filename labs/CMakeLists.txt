cmake_minimum_required(VERSION 3.22.3)
project(wikamp C)

set(CMAKE_C_STANDARD 17)

add_executable(wikamp main.c examTrial/ExamTrial.c)

target_link_libraries(wikamp m)