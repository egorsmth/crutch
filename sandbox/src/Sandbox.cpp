#include "src/shiva.h"

class ExampleLayer: public Shiva::Layer {
    public:

    ExampleLayer() : Layer("Example") {}

    void OnUpdate() override {
        LOG_INFO("ExampleLayer::update");
    }

    void OnEvent(Shiva::Event& e) override {
        LOG_TRACE("{0}", e);
    }
};

class Sandbox : public Shiva::Application{
public:
Sandbox(){
    PushLayer(new ExampleLayer());
}

~Sandbox(){}
};

Shiva::Application* Shiva::CreateApplication() {
    return new Sandbox();
}
