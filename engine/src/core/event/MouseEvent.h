#pragma once

#include "Event.h"

#include <sstream>

namespace Crutch {
    class HAZEL_API MouseMovedEvent : public Event {
        public:

        MouseMovedEvent(float x, float y) : m_x(x), m_y(y) {}

        inline float GetX() const { return m_x; }
        inline float GetY() const { return m_y; }

        std::string ToString() const override {
            std::stringstream ss;
            ss << "MouseMovedEvent: (" << m_x << ", " << m_y << ")";
            return ss.str();
        }

        EVENT_CLASS_TYPE(MouseMoved)
        EVENT_CLASS_CATEGORY(CategoryMouse | CategoryInput)

        private:

        float m_x, m_y;
    };

    class HAZEL_API MouseScrolledEvent : public Event {
        public:

        MouseScrolledEvent(float xOffset, float yOffset): m_x(xOffset), m_y(yOffset) {}

        inline float GetXOffset() const { return m_x; }
        inline float GetYOffset() const { return m_y; }

        std::string ToString() const override {
            std::stringstream ss;
            ss << "MouseScrolledEvent: (" << m_x << ", " << m_y << ")";
            return ss.str();
        }

        EVENT_CLASS_TYPE(MouseScrolled)
        EVENT_CLASS_CATEGORY(CategoryMouse | CategoryInput)

        private:

        float m_x, m_y;
    };

    class HAZEL_API MouseButtonEvent: public Event {
        public:
        inline int GetMouseButton() const { return m_btn; }

        EVENT_CLASS_CATEGORY(CategoryMouse | CategoryInput)

        protected:

        MouseButtonEvent(int btn) : m_btn(btn) {}

        int m_btn;
    };

    class HAZEL_API MouseButtonPressedEvent : public MouseButtonEvent {
        public:

        MouseButtonPressedEvent(int btn) : MouseButtonEvent(btn) {}

        std::string ToString() const override {
            std::stringstream ss;
            ss << "MouseButtonPressedEvent: " << m_btn;
            return ss.str();
        }

        EVENT_CLASS_TYPE(MouseButtonPressed)
    };

    class HAZEL_API MouseButtonReleasedEvent : public MouseButtonEvent {
        public:

        MouseButtonReleasedEvent(int btn) : MouseButtonEvent(btn) {}

        std::string ToString() const override {
            std::stringstream ss;
            ss << "MouseButtonReleasedEvent: " << m_btn;
            return ss.str();
        }

        EVENT_CLASS_TYPE(MouseButtonReleased)
    };
}