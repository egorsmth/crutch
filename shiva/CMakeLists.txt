project(shiva_engine)

set(SOURCES src/test.cpp)

set(HEADERS src/test.h)

add_library(shiva_engine ${SOURCES} ${HEADERS})

target_include_directories(shiva_engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
