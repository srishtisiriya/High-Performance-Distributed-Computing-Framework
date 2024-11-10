// Node.h
#ifndef NODE_H
#define NODE_H

class Node {
public:
    Node(int id);  // Constructor to initialize node with an ID
    void processTask();  // Method to simulate processing a task
private:
    int id;  // ID of the node
};

#endif

