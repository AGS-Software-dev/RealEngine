#include "CoreApplication.h"

namespace CoreApplication
{

    void CoreApplication::processInput(GLFWwindow* window)
    {
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, true);
    }

    void CoreApplication::framebuffer_size_callback(GLFWwindow* window, int width, int height)
    {
        glViewport(0, 0, width, height);
    }
    
    int CoreApplication::Run()
    {

        CoreApplication::OpenGLLayer openGLLayer ;

        CoreApplication::GLFWLayer.InitGLFW();

        GLFWwindow* window;

        openGLLayer.CreateWindow(window, 800, 600, "RealEngine");

        if (!window) {
            std::cerr << "Failed to create GLFW window!" << std::endl;
            return -1;
        }

        if (!CoreApplication::OpenGLLayer.InitGlad()) {
            std::cerr << "Failed to initialize GLAD!" << std::endl;
            return -1;
        }

        glfwSetFramebufferSizeCallback(window, CoreApplication::framebuffer_size_callback);

        // render loop
        while (!glfwWindowShouldClose(window))
        {
            // input
            processInput(window);

            // rendering commands here
            glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            // check and call events and swap the buffers
            glfwPollEvents();
            glfwSwapBuffers(window);
        }

        glfwTerminate();
        return 0;

    }

}