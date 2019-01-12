#pragma once

#include "pcl.h"

extern Crutch::Application* Crutch::CreateApplication();

int main(int argc, char const *argv[])
{
    Crutch::Log::Init();
    Crutch::Log::GetCoreLogger()->warn("fucking logger");
    LOG_ERROR("err");
    LOG_INFO("err");
    LOG_DEBUG("err");
    LOG_CORE_ERROR("err");
    LOG_CORE_INFO("err");
    LOG_CORE_DEBUG("err");

    printf("suck\n");
    auto app = Crutch::CreateApplication();
    app->run();
    delete app;
}