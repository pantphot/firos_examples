project(user_lib)
cmake_minimum_required(VERSION 2.9)

include(CheckCXXCompilerFlag)
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_COMPILER_IS_CLANG OR
        CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    check_cxx_compiler_flag(--std=c++11 SUPPORTS_CXX11)
    if(SUPPORTS_CXX11)
        add_compile_options(--std=c++11)
    else()
        message(FATAL_ERROR "Compiler doesn't support C++11")
    endif()
endif()

find_package(fastcdr)
find_package(fastrtps)

add_definitions(-DEPROSIMA_USER_DLL_EXPORT  -DBUILD_SHARED_LIBS)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(BUILD_SHARED_LIBS TRUE)

file(GLOB USER_LIB_SOURCES_CXX "*.cxx")
file(GLOB USER_LIB_SOURCES_CPP "userlib.cpp")

add_library(userlib SHARED ${USER_LIB_SOURCES_CXX} ${USER_LIB_SOURCES_CPP}
    ../../src/NGSIv2/idl/JsonNGSIv2.cxx
    ../../src/NGSIv2/idl/JsonNGSIv2PubSubTypes.cxx)

add_executable(cb_create_roi cb_create_roi.cpp)
add_executable(cb_get_roi cb_get_roi.cpp)

target_link_libraries(userlib fastrtps fastcdr ${CMAKE_DL_LIBS})
target_link_libraries(cb_create_roi -L/usr/lib/x86_64-linux-gnu curl curlpp)
target_link_libraries(cb_get_roi -L/usr/lib/x86_64-linux-gnu curl curlpp)


