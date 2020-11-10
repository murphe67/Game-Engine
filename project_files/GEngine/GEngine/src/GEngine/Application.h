#pragma once
#include "GEngine/Core.h"

namespace GEngine
{
	class GENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be definined in CLIENT
	Application* CreateApplication();
}