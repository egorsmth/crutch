#pragma once

#include "Core.h"
#include "event/Event.h"
#include "Window.h"

namespace Crutch {
    class HAZEL_API Application {
        public:
        Application();
        virtual ~Application();

        void run();

        private:

        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    Application* CreateApplication();
}