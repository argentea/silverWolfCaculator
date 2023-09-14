cmake_minimum_required(VERSION 3.12)

project(silverWolfCalculator)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Werror -fPIC")

set(PYBIND_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/pybind11/include)
set(DATABASE_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/src/database/)

add_subdirectory(thirdparty)
add_subdirectory(src)
add_subdirectory(examples/cpp)

pybind11_add_module(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/bindsrc/bind.cpp)
