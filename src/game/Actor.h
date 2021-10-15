#pragma once 

#include <glm/vec4.hpp>

class Actor
{
private:
    glm::vec4 position;
    glm::vec4 facing;
public:
    Actor();
    glm::vec4 getPosition();
    glm::vec4 getFacing();
    void moveForward();
    void moveBackward();
    void moveLeft();
    void moveRight();
};