#include "../../core/pcl.h"

#include "../../core/Log.h"
#include "../../core/event/ApplicationEvent.h"
#include "../../core/event/KeyEvent.h"
#include "../../core/event/MouseEvent.h"
#include "WindowLinux.h"

namespace Crutch {
    static bool s_GLFWInitialized = false;

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