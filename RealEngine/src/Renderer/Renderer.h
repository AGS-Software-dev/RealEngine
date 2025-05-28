#pragma once

#include <iostream>

#include <Renderer/Shaders/ShaderObjects/VAO.h>
#include <Renderer/Shaders/ShaderObjects/VBO.h>
#include <Renderer/Shaders/ShaderObjects/EBO.h>

namespace Renderer
{

    // Simple cube data
    float cubeVertices[] = {
        // x,    y,    z
        -0.5f, -0.5f, -0.5f,  // 0
         0.5f, -0.5f, -0.5f,  // 1
         0.5f,  0.5f, -0.5f,  // 2
        -0.5f,  0.5f, -0.5f,  // 3
        -0.5f, -0.5f,  0.5f,  // 4
         0.5f, -0.5f,  0.5f,  // 5
         0.5f,  0.5f,  0.5f,  // 6
        -0.5f,  0.5f,  0.5f   // 7
    };

    unsigned int cubeIndices[] = {
        // Back face
        0, 1, 2,  2, 3, 0,
        // Front face
        4, 5, 6,  6, 7, 4,
        // Left face
        0, 4, 7,  7, 3, 0,
        // Right face
        1, 5, 6,  6, 2, 1,
        // Top face
        3, 2, 6,  6, 7, 3,
        // Bottom face
        0, 1, 5,  5, 4, 0
    };


	class Renderer
	{

	public:

		Renderer(VBO::VBO VBO, EBO::EBO EBO, VAO::VAO VAO);
		virtual ~Renderer();

	};

}
