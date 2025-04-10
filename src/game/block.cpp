//
// Created by lucas on 10/04/2025.
//

#include <game/block.h>


block::block(float x, float y, float z) {
    this->position = glm::vec3(x, y, z);
    this->size = glm::vec3(1.0f, 1.0f, 1.0f); // Default size
    this->typeBlock = TypeBlock::GRASS; // Default type
}

block::block(float x, float y, float z, TypeBlock typeBlock) {
    this->position = glm::vec3(x, y, z);
    this->size = glm::vec3(1.0f, 1.0f, 1.0f); // Default size
    this->typeBlock = typeBlock; // Default type
}

block::~block() {
    // Cleanup code if needed
}

void block::initBuffers() {
    // Initialize VAO and VBO here
}

void block::initShaders() {
    // Initialize shaders here
}

void block::draw() {
    // Bind VAO and draw the block
}
void block::update() {
    // Update logic if needed
}
void block::setPosition(float x, float y, float z) {
  this->position = glm::vec3(x, y, z);
}

void block::setSize(float x, float y, float z) {
  this->size = glm::vec3(x, y, z);
}
void block::setTypeBlock(TypeBlock type) {
  this->typeBlock = type;
}