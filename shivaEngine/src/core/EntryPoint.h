#pragma once

#include "Application.h"

extern Shiva::Application* Shiva::CreateApplication();

int main(int argc, char const *argv[])
{
    auto app = Shiva::CreateApplication();
    app->Run();
    delete app;
}
