// Node.cpp
#include "Node.h"
#include <iostream>

Node::Node(int id) {
    this->id = id;  // Initialize the node with the given ID
}

void Node::processTask() {
    std::cout << "Node " << id << " is processing task." << std::endl;
}

