#pragma once

#include "Layer.h"

namespace GLFWLayer {

    // Derived class for managing GLFW-specific layer behavior
    class GLFWLayer : public Layer::Layer {

    public:
        // Default constructor, will be used for basic initialization
        GLFWLayer() = default;

        // Virtual destructor to ensure proper cleanup when derived class is deleted
        virtual ~GLFWLayer();

        // Called when the layer is attached to the system or engine
        virtual void OnAttach() override;

        virtual void InitGLFW();

        //virtual int createGLFWItems();

        // Called when the layer is detached from the system or engine
        virtual void OnDetach() override;

        // Called each frame for updating the layer
        virtual void OnUpdate(int t) override;

        // Method for ImGui rendering, uncomment when needed
        // virtual void OnImGuiRender() override;

        // Pushes data into a vector array or some other structure
        virtual void LayerArrayPusher();

    };

}
