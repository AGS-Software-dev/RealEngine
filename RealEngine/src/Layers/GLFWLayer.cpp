#include "Layer.h"
#include "GLFWLayer.h"

namespace GLFWLayer
{

	void GLFWLayer::InitGLFW()
	{

		glfwInit();
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		#ifdef _APPLE
			glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
		#endif

	}

	void GLFWLayer::OnAttach()
	{

		std::cout << "LayerAttached" << std::endl;

	}
	
	void GLFWLayer::LayerArrayPusher()
	{

		Layer::LayerArray.push_back("GLFWLayer");

		REAL_INFO(LayerArray[0]);

	}

}
