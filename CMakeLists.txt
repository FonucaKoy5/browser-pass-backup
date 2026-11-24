cmake_minimum_required(VERSION 3.16)
project(browser-pass-backup CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(browserpassbackup
    src/main.cpp
    src/readers.cpp
    src/merge.cpp
    src/encrypt.cpp
)

target_include_directories(browserpassbackup PRIVATE include)

if(WIN32)
    target_link_libraries(browserpassbackup PRIVATE userenv)
endif()
