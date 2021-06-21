cmake_minimum_required(VERSION 3.10)

project(Program)
include(CTest)
enable_testing()

add_executable(Program menu.cpp tablica.cpp tablica_wysw.cpp pliki.cpp main.cpp) 
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
include(CPack)