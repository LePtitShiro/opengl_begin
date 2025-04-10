//
// Created by lucas on 10/04/2025.
//

#ifndef BLOCK_H
#define BLOCK_H
#include <glm/glm.hpp>
#include <utils/TypeBlock.h>



class block {

private:
    glm::vec3 position;// Position
    glm::vec3 size; // Size
    TypeBlock typeBlock; // Type of block


    unsigned int VAO, VBO; // Vertex Array Object and Vertex Buffer Object

    void initBuffers();
    void initShaders();


public:
    block(float x, float y, float z, TypeBlock typeBlock);
    block(float x, float y, float z);
    ~block();

    void draw();
    void update();
    void setPosition(float x, float y, float z);
    void setSize(float width, float height, float depth);
    void setTypeBlock(TypeBlock typeBlock);

};



#endif //BLOCK_H
