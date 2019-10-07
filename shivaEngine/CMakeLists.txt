project(shiva_engine)

# set(SOURCES src/core/Application.cpp src/core/Log.cpp)
AUX_SOURCE_DIRECTORY(src/core SOURCES) 

set(
    HEADERS

    src/core/events/ApplicationEvent.h 
    src/core/events/MouseEvent.h 
    src/core/events/KeyEvent.h 
    src/core/events/Event.h 
    src/core/core.h 
    src/core/Application.h 
    src/core/Log.h 
    src/core/EntryPoint.h 
    src/shiva.h
)

add_library(shiva_engine ${SOURCES} ${HEADERS})

add_subdirectory(vendor/spdlog)

target_link_libraries(${PROJECT_NAME} spdlog)


target_include_directories(shiva_engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
