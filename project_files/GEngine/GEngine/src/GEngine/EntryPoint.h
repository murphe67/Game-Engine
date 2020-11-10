#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GEngine::Application* GEngine::CreateApplication();

int main(int argc, char** argv)
{
	GEngine::Log::Init();
	GE_CORE_WARN("Initialised Log!");
	GE_INFO("Hello!");

	printf("Game Engine Start");
	auto app = GEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif