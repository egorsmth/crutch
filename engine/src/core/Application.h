#pragma once

#include "Core.h"

namespace Crutch {
    class HAZEL_API Application {
        public:
        Application();
        virtual ~Application();

        void run();
    };

    Application* CreateApplication();
}