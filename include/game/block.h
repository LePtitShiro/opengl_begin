//
// Created by lucas on 10/04/2025.
//

#ifndef BLOCK_H
#define BLOCK_H
#include <glm/glm.hpp>



class block {

private:
    glm::vec3 position;// Position
    float width, height, depth; // Size
    float r, g, b; // Color

    unsigned int VAO, VBO; // Vertex Array Object and Vertex Buffer Object

    void initBuffers();
    void initShaders();


public:
    block();

    void draw();
    void update();
    void setPosition(float x, float y, float z);
    void setSize(float width, float height, float depth);
    void setColor(float r, float g, float b);

};



#endif //BLOCK_H
