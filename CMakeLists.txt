cmake_minimum_required(VERSION 3.10)
project(ShapeDrawer)

set(CMAKE_CXX_STANDARD 11)

add_executable(drawer main.cpp Triangle.cpp Circle.cpp Form.cpp)
