// LoadBalancer.h
#ifndef LOADBALANCER_H
#define LOADBALANCER_H

#include <vector>
#include "Node.h"
#include "TaskManager.h"

class LoadBalancer {
public:
    void distributeTasks(std::vector<Node>& nodes, TaskManager& taskManager);
};

#endif

