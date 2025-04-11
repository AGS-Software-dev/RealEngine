#pragma once

#include <iostream>

#include <vector>

#include "../Log/Log.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Layer
{

	class Layer
	{
	public:
		Layer(const std::string& name = "Layer");
		virtual ~Layer() = default;

		virtual void OnAttach() {}
		virtual void OnDetach() {}
		virtual void OnUpdate(int t) {}
		//virtual void OnImGuiRender() {}
		//virtual void OnEvent(Event& event) {}

		std::vector<std::string> LayerArray = {};

		virtual void LayerArrayPusher() {};

		const std::string& GetName() const { return DebugName; }
	protected:
		std::string DebugName;
	};

}