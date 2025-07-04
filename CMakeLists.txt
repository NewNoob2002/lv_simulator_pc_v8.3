cmake_minimum_required(VERSION 3.10)
project(lvgl)
set(CMAKE_C_STANDARD 11)#C11
set(CMAKE_CXX_STANDARD 17)#C17
set(CMAKE_CXX_STANDARD_REQUIRED ON)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})

file(GLOB_RECURSE INCLUDES "lv_drivers/*.h" "lvgl/demos/*.h"  "lvgl/*.h"  "./*.h" )
file(GLOB_RECURSE SOURCES  "lv_drivers/*.c" "lvgl/demos/*.c"  "lvgl/src/*.c" )

file(GLOB_RECURSE UI_SOURCES
    ${PROJECT_SOURCE_DIR}/APP/*.c
    ${PROJECT_SOURCE_DIR}/APP/*.cpp
    ${PROJECT_SOURCE_DIR}/img/*.c
)

include_directories(
    ${CMAKE_CURRENT_LIST_DIR}/APP
    ${CMAKE_CURRENT_LIST_DIR}/APP/Pages
    ${CMAKE_CURRENT_LIST_DIR}/APP/Utils
    ${CMAKE_CURRENT_LIST_DIR}/img
    )

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(CMAKE_CXX_FLAGS "-O3")

find_package(SDL2 REQUIRED SDL2)
include_directories(${SDL2_INCLUDE_DIRS})
add_executable(main main.cpp mouse_cursor_icon.c ${SOURCES} ${INCLUDES} ${UI_SOURCES})
add_compile_definitions(LV_CONF_INCLUDE_SIMPLE)
target_link_libraries(main PRIVATE SDL2 )
add_custom_target (run COMMAND ${EXECUTABLE_OUTPUT_PATH}/main)
