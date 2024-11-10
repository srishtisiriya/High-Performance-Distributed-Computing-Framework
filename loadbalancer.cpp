// LoadBalancer.cpp
#include "LoadBalancer.h"
#include <iostream>

void LoadBalancer::distributeTasks(std::vector<Node>& nodes, TaskManager& taskManager) {
    std::cout << "Distributing tasks among " << nodes.size() << " nodes..." << std::endl;
    for (auto& node : nodes) {
        node.processTask();  // Each node processes a task
    }
}
