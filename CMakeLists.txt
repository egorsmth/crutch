cmake_minimum_required(VERSION 3.10.2)
project(shiva)

# set constants for #ifdef macros
# add_definitions(-DSOME_IMPORTANT_DEFINITION)

# additional directories for headers
# include_directories("headers/" "more_headers/")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

set(SRC_LIST sandbox/src/Sandbox.cpp)

add_executable(${PROJECT_NAME} ${SRC_LIST})

add_subdirectory(shivaEngine)

target_link_libraries(${PROJECT_NAME} shiva_engine)

