#pragma once

#include "Core.h"
#include "event/Event.h"
#include "Window.h"

#include "event/ApplicationEvent.h"

namespace Crutch {
    class HAZEL_API Application {
        public:
        Application();
        virtual ~Application();

        void run();

        void OnEvent(Event& e);

        private:

        bool OnClose(WindowCloseEvent& e);
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    Application* CreateApplication();
}