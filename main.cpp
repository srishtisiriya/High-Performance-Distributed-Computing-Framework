#include <iostream>
#include <vector>
#include "Node.h"
#include "TaskManager.h"
#include "LoadBalancer.h"

int main() {
    // Create some nodes
    Node node1(1);  // Node 1 with ID 1
    Node node2(2);  // Node 2 with ID 2
    Node node3(3);  // Node 3 with ID 3

    // Add nodes to a vector (representing the distributed system)
    std::vector<Node> nodes = { node1, node2, node3 };

    // Create a task manager and load balancer
    TaskManager taskManager;
    LoadBalancer loadBalancer;

    // Divide tasks and distribute them
    taskManager.divideTask();
    loadBalancer.distributeTasks(nodes, taskManager);

    return 0;
}
