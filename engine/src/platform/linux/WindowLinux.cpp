#include "../../core/pcl.h"

#include "../../core/Log.h"
#include "../../core/event/ApplicationEvent.h"
#include "../../core/event/KeyEvent.h"
#include "../../core/event/MouseEvent.h"
#include "WindowLinux.h"

namespace Crutch {
    static bool s_GLFWInitialized = false;

    static void GLFWErrorCallback(int code, const char* desc) {
        LOG_CORE_ERROR("GLFW code: {0}, description: {1}", code, desc);
    };

    Window* Window::Create(const WindowProps& props) {
        return new WindowLinux(props);
    }

    WindowLinux::WindowLinux(const WindowProps& props) {
        Init(props);
    }

    WindowLinux::~WindowLinux() {
       Shutdown();
    }

    void WindowLinux::Init(const WindowProps& props) {
        m_Data.Title = props.Title;
        m_Data.Width = props.Width;
        m_Data.Height = props.Height;

        LOG_CORE_INFO("Creatung windiw {0} ({1}, {2})", props.Title, props.Width, props.Height, nullptr, nullptr);


        if (!s_GLFWInitialized) {
            int success = glfwInit();
            CORE_ASSERT(success, "Could not initialoze GLFW");
            glfwSetErrorCallback(GLFWErrorCallback);
            s_GLFWInitialized = true;
        }

        m_Window = glfwCreateWindow((int)props.Width, (int)props.Height, m_Data.Title.c_str(), nullptr, nullptr);
        glfwMakeContextCurrent(m_Window);
        glfwSetWindowUserPointer(m_Window, &m_Data);
        SetVSync(true);

        // set glfw events
        glfwSetWindowSizeCallback(m_Window, [](GLFWwindow* window, int width, int height){
            WindowData &data = *(WindowData*)glfwGetWindowUserPointer(window);
            data.Width = width;
            data.Height = height;
            WindowResizeEvent event(width, height);
            data.EventCallback(event);
        });

        glfwSetWindowCloseCallback(m_Window, [](GLFWwindow* window) {
            WindowData &data = *(WindowData*)glfwGetWindowUserPointer(window);
            WindowCloseEvent event;
            data.EventCallback(event);
        });

        glfwSetKeyCallback(m_Window, [](GLFWwindow* window, int key, int scancode, int action, int modes) {
            WindowData &data = *(WindowData*)glfwGetWindowUserPointer(window);
            switch (action)
            {
                case GLFW_PRESS: {
                    KeyPressedEvent event1(key, 0);
                    data.EventCallback(event1);
                    break;
                }
                case GLFW_RELEASE: {
                    KeyReleasedEvent event2(key);
                    data.EventCallback(event2);
                    break;
                }
                case GLFW_REPEAT:{
                    KeyPressedEvent event3(key, 1);
                    data.EventCallback(event3);
                    break;
                }
                default: {
                    LOG_CORE_ERROR("Udefined key action {0}",action);
                    break;
                }
            }
        });

        glfwSetMouseButtonCallback(m_Window, [](GLFWwindow* window, int button, int action, int modes) {
            WindowData &data = *(WindowData*)glfwGetWindowUserPointer(window);
            switch (action)
            {
                case GLFW_PRESS: {
                    MouseButtonPressedEvent event(button);
                    data.EventCallback(event);
                    break;
                }
                case GLFW_RELEASE: {
                    MouseButtonReleasedEvent event1(button);
                    data.EventCallback(event1);
                    break;
                }
                default: {
                    LOG_CORE_ERROR("Udefined mouse button action {0}",action);
                    break;
                }
            }
        });

        glfwSetScrollCallback(m_Window, [](GLFWwindow* window, double xoffset, double yoffset) {
            WindowData &data = *(WindowData*)glfwGetWindowUserPointer(window);
            MouseScrolledEvent event((float)xoffset, (float)yoffset);
            data.EventCallback(event);
        });

        glfwSetCursorPosCallback(m_Window, [](GLFWwindow* window, double xpos, double ypos) {
            WindowData &data = *(WindowData*)glfwGetWindowUserPointer(window);
            MouseMovedEvent event((float)xpos, (float)ypos);
            data.EventCallback(event);
        });
    }

    void WindowLinux::Shutdown() {
        glfwDestroyWindow(m_Window);
    }

    void WindowLinux::OnUpdate() {
        glfwPollEvents();
        glfwSwapBuffers(m_Window);
    }

    void WindowLinux::SetVSync(bool enabled) {
        if (enabled)
            glfwSwapInterval(1);
        else
            glfwSwapInterval(0);

        m_Data.VSync = enabled;
    }

    bool WindowLinux::IsVSync() const {
        return m_Data.VSync;
    }
}