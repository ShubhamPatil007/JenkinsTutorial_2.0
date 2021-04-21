cmake_minimum_required(VERSION "3.0")

set(CMAKE_BUILD_TYPE debug)

project("Light")

add_executable("${PROJECT_NAME}" "main.cpp" "Light.cpp")
