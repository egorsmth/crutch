#pragma once

#include "../core.h"
#include "../events/Event.h"

namespace Shiva {
    class SHIVA_API Layer {
        public:
        Layer(const std::string& nmae = "Layer");
        virtual ~Layer();

        virtual void OnAttach() {}
        virtual void OnDetach() {}
        virtual void OnUpdate() {}
        virtual void OnEvent(Event& e) {}

        inline const std::string& GetName() const { return m_DebugName; }

        protected:
        std::string m_DebugName;
    };
}