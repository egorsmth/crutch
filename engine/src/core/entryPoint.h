#pragma once

#define LOG_ERROR(...) ::Crutch::Log::GetCoreLogger()->error(__VA_ARGS__)

extern Crutch::Application* Crutch::CreateApplication();

int main(int argc, char const *argv[])
{
    Crutch::Log::Init();
    Crutch::Log::GetCoreLogger()->warn("fucking logger");
    LOG_ERROR("err");

    printf("suck\n");
    auto app = Crutch::CreateApplication();
    app->run();
    delete app;
}