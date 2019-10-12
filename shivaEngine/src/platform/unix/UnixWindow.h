#pragma once

#include "../../core/Window.h"
#include <GLFW/glfw3.h>

namespace Shiva {
    class UnixWindow : public Window {
        public:
        UnixWindow(const WindowProps& props);
        virtual ~UnixWindow();

        void OnUpdate() override;

        inline unsigned int GetWidth() const override { return m_Data.Width; }
        inline unsigned int GetHeight() const override { return m_Data.Height; }

        inline void SetEventCallback(const EventCallbackFn& callback) override { m_Data.EventCallback = callback; }
        void SetVSync(bool enabled);
        bool IsVSync() const;

        private:

        virtual void Init(const WindowProps& props);
        virtual void ShutDown();

        GLFWwindow* m_Window;

        struct WindowData {
            std::string Title;
            unsigned int Width, Height;
            bool VSync;

            EventCallbackFn EventCallback;
        };

        WindowData m_Data;
    };
}