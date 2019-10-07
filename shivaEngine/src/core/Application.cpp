#include "Application.h"
#include "Log.h"
#include "events/ApplicationEvent.h"

namespace Shiva {
    Application::Application()
    {}

    Application::~Application()
    {}

    void Application::Run() {
        WindowResizeEvent e(1200, 800);
        LOG_TRACE(e);
        std::cout << "Shiva is everything" << std::endl;
        // while (true);
    }
}