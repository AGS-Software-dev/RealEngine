#pragma once

#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

#include "Application.h"

bool LoadOBJ(const std::string& path) {
    std::ifstream file(path);
    if (!file.is_open()) {
        std::cerr << "Failed to open OBJ file: " << path << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string prefix;
        ss >> prefix;

        if (prefix == "v") {
            Vec3 pos;
            ss >> pos.x >> pos.y >> pos.z;
            temp_positions.push_back(pos);
        }
        else if (prefix == "vt") {
            Vec2 uv;
            ss >> uv.u >> uv.v;
            temp_uvs.push_back(uv);
        }
        else if (prefix == "vn") {
            Vec3 norm;
            ss >> norm.x >> norm.y >> norm.z;
            temp_normals.push_back(norm);
        }
        else if (prefix == "f") {
            std::string vertex_str;
            for (int i = 0; i < 3; ++i) {
                ss >> vertex_str;

                std::stringstream vss(vertex_str);
                std::string posIndexStr, uvIndexStr, normIndexStr;
                size_t p1 = vertex_str.find('/');
                size_t p2 = vertex_str.find('/', p1 + 1);

                posIndexStr = vertex_str.substr(0, p1);
                uvIndexStr = vertex_str.substr(p1 + 1, p2 - p1 - 1);
                normIndexStr = vertex_str.substr(p2 + 1);

                int posIndex = std::stoi(posIndexStr) - 1;
                int uvIndex = uvIndexStr.empty() ? 0 : std::stoi(uvIndexStr) - 1;
                int normIndex = normIndexStr.empty() ? 0 : std::stoi(normIndexStr) - 1;

                Vertex v;
                v.position = temp_positions[posIndex];
                v.uv = uvIndexStr.empty() ? Vec2{ 0.0f, 0.0f } : temp_uvs[uvIndex];
                v.normal = normIndexStr.empty() ? Vec3{ 0.0f, 0.0f, 0.0f } : temp_normals[normIndex];

                final_vertices.push_back(v);
                indices.push_back(static_cast<uint32_t>(final_vertices.size() - 1));
            }
        }
    }

    file.close();
    std::cout << "Loaded " << final_vertices.size() << " vertices." << std::endl;
    return true;
}
