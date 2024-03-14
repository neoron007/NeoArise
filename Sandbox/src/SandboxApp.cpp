#include <Neoarise.h>

class Sandbox : public NeoArise::Application {
 public:
	 Sandbox() {

  }

	 ~Sandbox() {

	 }
};

NeoArise::Application* NeoArise::CreateApplication() { return new Sandbox(); }
