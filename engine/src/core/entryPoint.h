#pragma once

extern Crutch::Application* Crutch::CreateApplication();

int main(int argc, char const *argv[])
{
    Crutch::Log::Init();
    Crutch::Log::GetCoreLogger()->warn("fucking logger");

    printf("suck\n");
    auto app = Crutch::CreateApplication();
    app->run();
    delete app;
}
