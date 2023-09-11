#----------------------------- CREATE LIBRARY -----------------------------#

cmake_minimum_required(VERSION 3.0.0)
set(PROJECT_NAME bukhtagram_messengercommon_config)
project(${PROJECT_NAME})

# file(GLOB LIB_SRC "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")

add_library(
    ${PROJECT_NAME}
    # ${LIB_SRC}
    INTERFACE
)

target_include_directories(
    ${PROJECT_NAME}
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)
