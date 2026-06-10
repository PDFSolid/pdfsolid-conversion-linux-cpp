cmake_minimum_required(VERSION 3.10)
project(compdf_cpp_demo CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# SDK root: <pkg>/, this CMakeLists lives at <pkg>/samples/
get_filename_component(SDK_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/.." ABSOLUTE)

set(SDK_INCLUDE_DIR "${SDK_ROOT}/include")
set(SDK_LIB_DIR     "${SDK_ROOT}/lib")

if(CMAKE_HOST_SYSTEM_PROCESSOR STREQUAL "x86_64")
    set(DEMO_NAME "demo_linux64")
elseif(CMAKE_HOST_SYSTEM_PROCESSOR STREQUAL "i686")
    set(DEMO_NAME "demo_linux86")
else()
    set(DEMO_NAME "demo_linux")
endif()

add_executable(${DEMO_NAME} demo/demo.cpp)

target_include_directories(${DEMO_NAME} PRIVATE "${SDK_INCLUDE_DIR}")
target_link_directories(${DEMO_NAME} PRIVATE "${SDK_LIB_DIR}")
target_link_libraries(${DEMO_NAME} PRIVATE libpdfsolidconversionsdk.so)

set_target_properties(${DEMO_NAME} PROPERTIES
    BUILD_WITH_INSTALL_RPATH TRUE
    BUILD_RPATH   "${SDK_LIB_DIR}"
    INSTALL_RPATH "${SDK_LIB_DIR}"
)
target_link_options(${DEMO_NAME} PRIVATE "-Wl,-rpath,${SDK_LIB_DIR}")
