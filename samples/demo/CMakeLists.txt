cmake_minimum_required(VERSION 3.10)
project(demo LANGUAGES CXX)

set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(NOT CMAKE_SYSTEM_NAME STREQUAL "Linux")
    message(FATAL_ERROR "This sample supports Linux only")
endif()

set(LIB_DIR "${CMAKE_CURRENT_LIST_DIR}/../../lib")

function(find_sample_library output_var)
    foreach(candidate IN LISTS ARGN)
        if(EXISTS "${LIB_DIR}/${candidate}")
            set(${output_var} "${LIB_DIR}/${candidate}" PARENT_SCOPE)
            return()
        endif()
    endforeach()
    list(GET ARGN 0 default_candidate)
    set(${output_var} "${LIB_DIR}/${default_candidate}" PARENT_SCOPE)
    message(WARNING "No sample library found in ${LIB_DIR}; configure will use ${default_candidate}. Tried: ${ARGN}")
endfunction()

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(PROJECT_NAME demo_linux64)
    find_sample_library(SDK_LIBRARY libpdfsolidconversionsdk.so)
    find_sample_library(DOCUMENTAI_LIBRARY libDocumentAI.so libDocumentAI.so.4.3.0)
    find_sample_library(OPENCV_LIBRARY libopencv_world.so libopencv_world.so.410)
elseif(CMAKE_SIZEOF_VOID_P EQUAL 4)
    set(PROJECT_NAME demo_linux32)
    find_sample_library(SDK_LIBRARY libpdfsolidconversionsdk.so)
else()
    message(FATAL_ERROR "Unsupported pointer size: ${CMAKE_SIZEOF_VOID_P}")
endif()

message(STATUS "CMAKE_SYSTEM_PROCESSOR: ${CMAKE_SYSTEM_PROCESSOR}")
message(STATUS "SDK library: ${SDK_LIBRARY}")

find_package(Threads REQUIRED)

add_executable(${PROJECT_NAME} demo.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_LIST_DIR}/../../include")
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
target_link_libraries(${PROJECT_NAME} PRIVATE
    "${SDK_LIBRARY}"
    Threads::Threads
    ${CMAKE_DL_LIBS})
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    target_link_libraries(${PROJECT_NAME} PRIVATE
        "${DOCUMENTAI_LIBRARY}"
        "${OPENCV_LIBRARY}")
endif()
target_link_libraries(${PROJECT_NAME} PRIVATE stdc++)
