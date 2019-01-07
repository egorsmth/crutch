#include <Crutch.h>

class Sandbox : public Crutch::Application
{
   public:
   Sandbox() {

   }
   ~Sandbox() {

   }
};

Crutch::Application* Crutch::CreateApplication() {
   return new Sandbox();
}

