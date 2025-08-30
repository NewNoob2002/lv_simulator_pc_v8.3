cmake_minimum_required(VERSION 3.10)
project(lvgl)
set(CMAKE_C_STANDARD 11)#C11
set(CMAKE_CXX_STANDARD 17)#C17
set(CMAKE_CXX_STANDARD_REQUIRED ON)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})

file(GLOB_RECURSE INCLUDES "lv_drivers/*.h" "lvgl/demos/*.h"  "lvgl/*.h"  "./*.h" )
file(GLOB_RECURSE SOURCES  "lv_drivers/*.c" "lvgl/demos/*.c"  "lvgl/src/*.c" )

file(GLOB_RECURSE UI_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/APP/*.c
    ${CMAKE_CURRENT_LIST_DIR}/APP/*.cpp           
    # ${CMAKE_CURRENT_LIST_DIR}/gui/ui/*.c
    # ${CMAKE_CURRENT_LIST_DIR}/gui/font/*.c
)

include_directories(
    ${CMAKE_CURRENT_LIST_DIR}/APP
    ${CMAKE_CURRENT_LIST_DIR}/APP/Pages
    ${CMAKE_CURRENT_LIST_DIR}/APP/Utils
    ${CMAKE_CURRENT_LIST_DIR}/APP/Common
    # ${CMAKE_CURRENT_LIST_DIR}/gui/ui
    # ${CMAKE_CURRENT_LIST_DIR}/gui/font
    )

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(CMAKE_CXX_FLAGS "-O3")


# 根据操作系统配置SDL2
if(APPLE)
    # macOS配置
    set(SDL_H /opt/homebrew/Cellar/sdl2/2.32.8/include)
    include_directories(${SDL_H})
    
    set(SDL_LIB /opt/homebrew/Cellar/sdl2/2.32.8/lib/libSDL2-2.0.0.dylib)
    link_libraries(${SDL_LIB})
else()
    # Linux配置
    find_package(SDL2 REQUIRED SDL2)
    include_directories(${SDL2_INCLUDE_DIRS})
endif()

add_executable(main main.cpp mouse_cursor_icon.c ${SOURCES} ${INCLUDES} ${UI_SOURCES})
add_compile_definitions(LV_CONF_INCLUDE_SIMPLE)

# 根据操作系统链接SDL2库
if(APPLE)
    target_link_libraries(main PRIVATE ${SDL_LIB})
else()
    target_link_libraries(main PRIVATE SDL2)
endif()

add_custom_target (run COMMAND ${EXECUTABLE_OUTPUT_PATH}/main)
