project(MegaLib)

set(SOURCES libqwe.cpp)

set(HEADERS libqwe.h)

add_library(libqwe ${SOURCES} ${HEADERS})

target_include_directories(libqwe PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})