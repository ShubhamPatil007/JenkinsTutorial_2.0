cmake_minimum_required(VERSION "3.20.1")

project("Light")

add_executable("${PROJECT_NAME}" "main.cpp" "Light.cpp")

install(TARGETS "${PROJECT_NAME} DESTINATION build")

install(FILES "main.cpp" "Light.cpp" "Light.h" "${PROJECT_NAME} DESTINATION src")
