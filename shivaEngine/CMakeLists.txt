project(shiva_engine)

# set(SOURCES src/core/Application.cpp src/core/Log.cpp)
AUX_SOURCE_DIRECTORY(src/core SOURCES) 
AUX_SOURCE_DIRECTORY(src/core/layer SOURCES) 
AUX_SOURCE_DIRECTORY(src/core/imgui SOURCES) 

AUX_SOURCE_DIRECTORY(src/platform/unix SOURCES) 
AUX_SOURCE_DIRECTORY(src/platform/opengl SOURCES) 


set(
    HEADERS

    src/pch.h

    src/core/Window.h 

    src/platform/unix/UnixWindow.h
    src/platform/opengl/ImGuiOpenGlRenderer.h

    src/core/events/ApplicationEvent.h 
    src/core/events/MouseEvent.h 
    src/core/events/KeyEvent.h 
    src/core/events/Event.h

    src/core/layer/Layer.h 
    src/core/layer/LayerStack.h 
    src/core/imgui/ImGuiLayer.h 

    src/core/core.h 
    src/core/Application.h 
    src/core/Log.h 
    src/core/EntryPoint.h 

    src/shiva.h
)

add_library(shiva_engine ${SOURCES} ${HEADERS})

add_subdirectory(vendor/spdlog)

target_link_libraries(${PROJECT_NAME} spdlog)

add_subdirectory(vendor/GLFW)

target_link_libraries(${PROJECT_NAME} glfw)

add_subdirectory(vendor/GLAD)

target_link_libraries(${PROJECT_NAME} glad)

target_include_directories(shiva_engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

CMAKE_POLICY(SET CMP0072 NEW)
find_package(OpenGL REQUIRED)

target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARY}) 

add_subdirectory(vendor/imgui)

target_link_libraries(${PROJECT_NAME} imgui)
