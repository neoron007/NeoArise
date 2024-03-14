#pragma once

#ifdef NA_PLATFORM_WINDOWS
extern NeoArise::Application *NeoArise::CreateApplication();

int main(int argc, char **argv) {
	auto app = NeoArise::CreateApplication();    
	app->Run();
	delete app;
}
#endif // HZ_PLATFORM_WINDOWS
