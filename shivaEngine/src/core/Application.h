#pragma once

#include "core.h"
#include "events/Event.h"

namespace Shiva {
    class SHIVA_API Application {
        public:
        Application();
        virtual ~Application();

        void Run();
    };

    extern Application* CreateApplication();

};