#pragma once

#include <memory.h>
#include "core.h"
#include "spdlog/spdlog.h"

namespace Shiva {
    class SHIVA_API Log {
        public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

        private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
};


#define LOG_CORE_ERROR(...) ::Shiva::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LOG_CORE_WARN(...)  ::Shiva::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LOG_CORE_INFO(...)  ::Shiva::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LOG_CORE_TRACE(...) ::Shiva::Log::GetCoreLogger()->trace(__VA_ARGS__)

#define LOG_ERROR(...) ::Shiva::Log::GetClientLogger()->error(__VA_ARGS__)
#define LOG_WARN(...)  ::Shiva::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LOG_INFO(...)  ::Shiva::Log::GetClientLogger()->info(__VA_ARGS__)
#define LOG_TRACE(...) ::Shiva::Log::GetClientLogger()->trace(__VA_ARGS__)
