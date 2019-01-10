#include "Application.h"

#include "event/ApplicationEvent.h"
#include "Log.h"

namespace Crutch {
    Application::Application() {}
    Application::~Application() {}
    void Application::run() {
        WindowResizeEvent e(320, 640);
        if (e.IsInCategory(CategoryApp)) {
            LOG_CORE_DEBUG(e);    
        }
        LOG_CORE_DEBUG(e);
        
        while (true);
    }
}