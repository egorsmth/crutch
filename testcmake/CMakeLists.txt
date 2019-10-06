cmake_minimum_required(VERSION 3.10.2)
project(shiva)

# set constants for #ifdef macros
# add_definitions(-DSOME_IMPORTANT_DEFINITION)


# additional directories for headers
# include_directories("headers/" "more_headers/")

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
find_package(Boost COMPONENTS chrono filesystem REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

set(SRC_LIST sources/lib1/main.cpp sources/lib2/main.cpp sources/main.cpp)

add_executable(${PROJECT_NAME} ${SRC_LIST})
add_subdirectory(sublib)
target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})
target_link_libraries(${PROJECT_NAME} libqwe)
