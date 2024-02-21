cmake_minimum_required(VERSION 3.0.0)
project(C-homework_6.7 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(C-homework_6.7 main.cpp portable_vacuum_cleaner.cpp appliance.cpp portable.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
