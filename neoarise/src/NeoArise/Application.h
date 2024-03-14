#pragma once

#include "Core.h" 

namespace NeoArise {
class NEOARISE_API Application{
	public:
        Application();
        virtual ~Application();

		void Run();
};

// to be defined in CLIENT
Application *CreateApplication();
}


