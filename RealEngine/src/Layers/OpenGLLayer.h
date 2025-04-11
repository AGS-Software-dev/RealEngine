#pragma once

#include "Layer.h"

namespace OpenGLLayer
{

	class OpenGLLayer : public Layer::Layer
	{

	public:

		OpenGLLayer() = default;
		virtual ~OpenGLLayer();

		virtual GLFWwindow* CreateWindow(GLFWwindow* window, int width, int height, const char* name);

		GLFWwindow* window;

		virtual int InitGlad();

	};

}