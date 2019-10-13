#pragma once

#include "core.h"
#include "events/Event.h"
#include "events/ApplicationEvent.h"
#include "Window.h"

namespace Shiva {
    class SHIVA_API Application {
        public:
        Application();
        virtual ~Application();

        void Run();

        void OnEvent(Event& e);

        private:

        bool OnWindowClose(WindowCloseEvent& e);

        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    extern Application* CreateApplication();

};