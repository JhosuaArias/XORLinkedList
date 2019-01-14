//
// Created by Jhosua on 13/1/2019.
//

#include <cstdint>
#include "Node.h"

Node::Node(int value) {
    this->both = nullptr;
    this->value = value;
}

void Node::setBoth(Node* node) {
    this->both = node;
}

Node *Node::getOtherNode(Node *node) {
    return (Node*)((uintptr_t)node ^ (uintptr_t)both);
}

