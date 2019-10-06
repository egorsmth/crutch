#pragma once

#include "Application.h"

extern Shiva::Application* Shiva::CreateApplication();

int main(int argc, char const *argv[])
{

    Shiva::Log::Init();

    LOG_CORE_INFO("this is core info");
    LOG_CORE_TRACE("this is core trace");
    LOG_CORE_ERROR("this is core error");

    LOG_INFO("this is  client info");
    LOG_TRACE("this is client  trace");
    LOG_ERROR("this is client  error");

    auto app = Shiva::CreateApplication();
    app->Run();
    delete app;
}
