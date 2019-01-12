#pragma once

#include "Event.h"

namespace Crutch {
    class HAZEL_API WindowResizeEvent : public Event {
        public:
        WindowResizeEvent(unsigned int width, unsigned int height)
            : m_width(width), m_height(height) {}

        inline unsigned int GetWidth() const { return m_width; }
        inline unsigned int GetHeight() const { return m_height; }

        std::string ToString() const override {
            std::stringstream ss;
            ss << "WondowResizeEvent: " << m_width << ", " << m_height;
            return ss.str();
        }

        EVENT_CLASS_TYPE(WindowResize)
        EVENT_CLASS_CATEGORY(CategoryApp)

        private:

        unsigned int m_width, m_height;
    };

    class HAZEL_API WindowCloseEvent: public Event {
        public:

        WindowCloseEvent() {}

        EVENT_CLASS_TYPE(WindowClose)
        EVENT_CLASS_CATEGORY(CategoryApp)
    };

    class HAZEL_API WindowFocusEvent : public Event {
        public:

        WindowFocusEvent() {}

        EVENT_CLASS_TYPE(WindowFocus)
        EVENT_CLASS_CATEGORY(CategoryApp)
    };

    class HAZEL_API WindowLostFocusEvent : public Event {
        public:

        WindowLostFocusEvent() {}

        EVENT_CLASS_TYPE(WindowLostFocus)
        EVENT_CLASS_CATEGORY(CategoryApp)
    };

    class HAZEL_API AppTickEvent : public Event {
        public:

        AppTickEvent() {}

        EVENT_CLASS_TYPE(AppTick)
        EVENT_CLASS_CATEGORY(CategoryApp)
    };

    class HAZEL_API AppUpdateEvent : public Event {
        public:

        AppUpdateEvent() {}

        EVENT_CLASS_TYPE(AppUpdate)
        EVENT_CLASS_CATEGORY(CategoryApp)
    };

    class HAZEL_API AppRenderEvent : public Event {
        public:

        AppRenderEvent() {}

        EVENT_CLASS_TYPE(AppRender)
        EVENT_CLASS_CATEGORY(CategoryApp)
    };
}