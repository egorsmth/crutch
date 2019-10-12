#pragma once

#include "core.h"
#include "events/Event.h"
#include "Window.h"

namespace Shiva {
    class SHIVA_API Application {
        public:
        Application();
        virtual ~Application();

        void Run();

        private:
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    extern Application* CreateApplication();

};