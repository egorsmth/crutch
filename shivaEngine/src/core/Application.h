#pragma once

#include "core.h"
#include "Log.h"

namespace Shiva {
    class SHIVA_API Application {
        public:
        Application();
        virtual ~Application();

        void Run();
    };

    extern Application* CreateApplication();

};