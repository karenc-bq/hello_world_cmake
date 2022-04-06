cmake_minimum_required(VERSION 3.14)
project(helloworld)

set(CMAKE_CXX_STANDARD 14)

if (POLICY CMP0077)
  cmake_policy(SET CMP0077 NEW)
endif ()

set(HELLO_WORLD_HEADER_DIR ${PROJECT_SOURCE_DIR}/include/helloworld)
set(HELLO_WORLD_SOURCE_DIR ${PROJECT_SOURCE_DIR}/source/)
set(HELLO_WORLD_HEADERS ${HELLO_WORLD_HEADER_DIR}/hello_world.h)
set(HELLO_WORLD_SOURCES ${HELLO_WORLD_SOURCE_DIR}/hello_world.cpp)

add_library(${PROJECT_NAME} ${HELLO_WORLD_HEADERS} ${HELLO_WORLD_SOURCES})
add_library(BQ::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(
    ${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include/>
    $<INSTALL_INTERFACE:include>
)

install (FILES ${HELLO_WORLD_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/helloworld)
