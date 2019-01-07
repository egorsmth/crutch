#pragma once

extern Crutch::Application* Crutch::CreateApplication();

int main(int argc, char const *argv[])
{
    printf("suck\n");
    auto app = Crutch::CreateApplication();
    app->run();
    delete app;
}
