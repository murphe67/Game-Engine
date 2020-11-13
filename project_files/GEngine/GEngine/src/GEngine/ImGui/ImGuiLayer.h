#pragma once

#include "GEngine/Layer.h"

namespace GEngine
{
	class GENGINE_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer();


		void OnAttach();
		void OnDetach();
		void OnUpdate();
		void OnEvent();
	private:
		float m_Time = 0.0f;
	};
}