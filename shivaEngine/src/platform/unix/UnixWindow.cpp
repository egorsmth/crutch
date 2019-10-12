#include "UnixWindow.h"

#include "../../core/core.h"
#include "../../core/Log.h"

namespace Shiva {
    static bool s_GLFWInitialized = false;

    Window* Window::Create(const WindowProps& props) {
        return new UnixWindow(props);
    }

    UnixWindow::UnixWindow(const WindowProps& props) {
        Init(props);
    }

    UnixWindow::~UnixWindow()
    {
        ShutDown();
    }

    void UnixWindow::Init(const WindowProps& props) {
        m_Data.Title = props.Title;
        m_Data.Width = props.Width;
        m_Data.Height = props.Height;

        LOG_CORE_INFO("Creating Window {0} ({1}, {2})", props.Title, props.Width, props.Height);

        if (!s_GLFWInitialized) {
            int success = glfwInit();
            CORE_ASSERT(success, "Could not initialize GLFW!");

            s_GLFWInitialized = true;
        }

        m_Window = glfwCreateWindow((int)props.Width, (int)props.Height, m_Data.Title.c_str(), nullptr, nullptr);
        glfwMakeContextCurrent(m_Window);
        glfwSetWindowUserPointer(m_Window, &m_Data);
        SetVSync(true);
    }

    void UnixWindow::ShutDown() {
        glfwDestroyWindow(m_Window);
    }

    void UnixWindow::OnUpdate() {
        glfwPollEvents();
        glfwSwapBuffers(m_Window);
    }

    void UnixWindow::SetVSync(bool enabled) {
        if (enabled) {
            glfwSwapInterval(1);
        } else {
            glfwSwapInterval(0);
        }

        m_Data.VSync = enabled;
    }

    bool UnixWindow::IsVSync() const {
        return m_Data.VSync;
    }
}