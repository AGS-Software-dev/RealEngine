#pragma once

#include "Layers/OpenGLLayer.h"
#include "Layers/GLFWLayer.h"
#include "Types.h"// Ensure Types.h exists if necessary
#include "Log/Log.h"
#include "API/api.h"

namespace CoreApplication
{
    class CoreApplication
    {
    public:
        CoreApplication();  // Constructor
        virtual ~CoreApplication();  // Destructor

        // Member function declarations
        static OpenGLLayer::OpenGLLayer OpenGLLayer;
        static GLFWLayer::GLFWLayer GLFWLayer;

        virtual int Run();

        static void framebuffer_size_callback(GLFWwindow* window, int width, int height);

        void processInput(GLFWwindow* window);

    private:
        int CoreApplicationID;
        // Optionally, you can add private members here
    };
}