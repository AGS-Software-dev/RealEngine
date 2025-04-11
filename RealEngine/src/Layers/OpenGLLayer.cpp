#include "OpenGLLayer.h"

namespace OpenGLLayer
{

	GLFWwindow* OpenGLLayer::CreateWindow(GLFWwindow* window, int width, int height, const char* name)
	{


		window = glfwCreateWindow(width, height, name, NULL, NULL);
		if (window == NULL)
		{
			std::cout << "Failed to create GLFW window" << std::endl;
			glfwTerminate();
		}
		glfwMakeContextCurrent(window);

		return window;

	}

	int OpenGLLayer::InitGlad()
	{

		if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
		{
			std::cout << "Failed to initialize GLAD" << std::endl;
			return -1;
		}

		glViewport(0, 0, 800, 600);

	}

}