#pragma once

#include <memory.h>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Crutch {
    class HAZEL_API Log {
    public:
        static void Init();
        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
}

#define LOG_INFO(...) ::Crutch::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LOG_DEBUG(...) ::Crutch::Log::GetCoreLogger()->debug(__VA_ARGS__)
#define LOG_ERROR(...) ::Crutch::Log::GetCoreLogger()->error(__VA_ARGS__)
