cmake_minimum_required(VERSION 3.26)

project(gutilities)

add_subdirectory(gutils)
add_subdirectory(gmath)
add_subdirectory(gtiming)
add_subdirectory(gcolors)
add_subdirectory(gio)

if(IS_SHARED)
    MESSAGE("Making gutilities shared lib")
    add_library(${PROJECT_NAME} SHARED gutils gmath gtiming gcolors gio)
else()
    MESSAGE("Making gutilities static lib")
    add_library(${PROJECT_NAME} STATIC gutils gmath gtiming gcolors gio)
endif()

target_link_libraries(${PROJECT_NAME} PUBLIC gutils gmath gtiming gcolors gio)

set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)