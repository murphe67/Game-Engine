#pragma once

#include "GEngine\Layer.h"
#include <GEngine\Events\MouseEvent.h>
#include <GEngine\Events\KeyEvent.h>
#include <GEngine\Events\ApplicationEvent.h>

namespace GEngine
{
	class GENGINE_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer();


		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnImGuiRender() override;

		void Begin();
		void End();

	private:
		float m_Time = 0.0f;
	};
}