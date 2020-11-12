#pragma once
#include "Core.h"
#include "Window.h"

namespace GEngine
{
	class GENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// To be definined in CLIENT
	Application* CreateApplication();
}