cmake_minimum_required(VERSION 3.10)
project(DistributedSystem)

set(CMAKE_CXX_STANDARD 17)

# Add source files
add_executable(DistributedSystem main.cpp node.cpp taskmanager.cpp loadbalancer.cpp)

# Include directories (if you have header files in a separate folder)
target_include_directories(DistributedSystem PRIVATE .)
