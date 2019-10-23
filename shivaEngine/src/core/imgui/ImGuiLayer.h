#pragma once

#include "../core.h"
#include "../layer/Layer.h"

namespace Shiva {
    class SHIVA_API ImGuiLayer : public Layer
    {
        public:
        ImGuiLayer();
        ~ImGuiLayer();

        void OnAttach();
        void OnUpdate();
        void OnEvent(Event& event);

        private:
        float m_Time = 0.0f;
    };
}