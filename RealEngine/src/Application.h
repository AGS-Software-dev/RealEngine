#pragma once

#include <iostream>
#include <vector>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <Log/Log.h>
#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>

// Renderer specific stuff

#include <Renderer/Renderer.h>
#include <Renderer/Shaders/Shaders.h>
#include <Renderer/Shaders/ShaderObjects/VAO.h>
#include <Renderer/Shaders/ShaderObjects/VAO.h>
#include <Renderer/Shaders/ShaderObjects/VBO.h>
#include <Renderer/Shaders/ShaderObjects/EBO.h>

struct Vec3 { float x, y, z; };
struct Vec2 { float u, v; };

struct Vertex {
    Vec3 position;
    Vec3 normal;
    Vec2 uv;
};

std::vector<Vec3> temp_positions;
std::vector<Vec3> temp_normals;
std::vector<Vec2> temp_uvs;
std::vector<Vertex> final_vertices;
std::vector<uint32_t> indices;


namespace Real
{

    unsigned int CreateCubeVAO()
    {
        GLuint vao, vbo, ebo;
        glGenVertexArrays(1, &vao);
        glGenBuffers(1, &vbo);
        glGenBuffers(1, &ebo);

        glBindVertexArray(vao);

        glBindBuffer(GL_ARRAY_BUFFER, vbo);
        glBufferData(GL_ARRAY_BUFFER, sizeof(Renderer::cubeVertices), Renderer::cubeVertices, GL_STATIC_DRAW);

        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(Renderer::cubeIndices), Renderer::cubeIndices, GL_STATIC_DRAW);

        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);

        return vao;
    }


}