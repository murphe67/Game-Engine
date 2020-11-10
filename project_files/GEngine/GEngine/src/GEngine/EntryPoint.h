#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GEngine::Application* GEngine::CreateApplication();

int main(int argc, char** argv)
{
	printf("Game Engine Start");
	auto app = GEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif