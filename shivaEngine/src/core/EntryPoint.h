#pragma once

#include "Application.h"

extern Shiva::Application* Shiva::CreateApplication();

int main(int argc, char const *argv[])
{
    Shiva::Log::Init();

    Shiva::Log::GetCoreLogger()->warn("SUP MELLO");
    auto app = Shiva::CreateApplication();
    app->Run();
    delete app;
}
