cmake_minimum_required(VERSION "3.20.1")

set(CMAKE_BUILD_TYPE Debug)

project("Light")

add_executable("${PROJECT_NAME}" "main.cpp" "Light.cpp")
