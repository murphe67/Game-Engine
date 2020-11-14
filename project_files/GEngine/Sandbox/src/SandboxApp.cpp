#include <GEngine.h>

class ExampleLayer : public GEngine::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{

		if (GEngine::Input::IsKeyPressed(GE_KEY_TAB))
			GE_TRACE("Tab key is pressed");
	}

	void OnEvent(GEngine::Event& event) override
	{
		if (event.GetEventType() == GEngine::EventType::KeyPressed)
		{
			GEngine::KeyPressedEvent& e = (GEngine::KeyPressedEvent&)event;
			GE_TRACE("{0}", (char)e.GetKeyCode());
		}
	}
};

class Sandbox : public GEngine::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new GEngine::ImGuiLayer());
	}

	~Sandbox()
	{

	}
};

GEngine::Application* GEngine::CreateApplication()
{
	return new Sandbox();
}