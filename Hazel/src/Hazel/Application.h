#pragma once
#include "Core.h"
namespace LPP {

	class LPP_API Application
	{
	public:
		Application();

		~Application();
		void Run();

	};

	Application* createApplication();
}

