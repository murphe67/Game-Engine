#include "Application.h"
#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace GEngine {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		GE_TRACE(e);
		while (true);
	}

}