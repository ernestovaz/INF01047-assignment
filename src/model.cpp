#include "Model.h"

Model::Model(const char* filename, const char* basepath = NULL, bool triangulate = true)
{
    bool success = tinyobj::LoadObj(&attrib, &shapes, &materials, &err, filename, basepath, triangulate);

    if(!success)
        throw std::runtime_error("Erro ao carregar modelo.");
}
