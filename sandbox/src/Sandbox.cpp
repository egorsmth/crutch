#include "src/shiva.h"

class Sandbox : public Shiva::Application{
public:
Sandbox(){}

~Sandbox(){}
};

Shiva::Application* Shiva::CreateApplication() {
    return new Sandbox();
}
