project(shiva_engine)

set(SOURCES src/core/Application.cpp)

set(HEADERS src/shiva.h src/core/core.h src/core/Application.h src/core/EntryPoint.h)

add_library(shiva_engine ${SOURCES} ${HEADERS})

target_include_directories(shiva_engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
