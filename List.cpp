//
// Created by Jhosua on 13/1/2019.
//
#include <iostream>
#include <cstdint>
#include <cstdlib>
#include "List.h"

using namespace std;

List::List() {
    first = nullptr;
}

void List::add(int element) {
   Node* node = new Node(element);

    if(first == nullptr) {
        first = node;
    } else if(first->both == nullptr) {
        first->both = node;
        node->both = first;
    } else {
        add(first, node , first->both);
    }
}

void List::add(Node* prev, Node* insert, Node* current) {
    if(current->both == prev) {
        current->both =(Node*)((uintptr_t)prev ^ (uintptr_t)insert);
        insert->both = current;
    } else {
        add(current, insert, current->getOtherNode(prev));
    }
}

void List::print() {
    if(first == nullptr) {
        cout << "Empty" << endl;
    } else {
      print(nullptr, first);
    }
}

void List::print(Node* prev, Node * node) {
    cout << "[" << node->value<< "]";
    if (node->both != prev) {
        print(node, node->getOtherNode(prev));
    }
}

int List::get(int index) {
    if (first != nullptr) {
        return get(index, nullptr, first);
    } else {
        return -1;
    }
}

int List::get(int index , Node * prev, Node * node) {
    if(index == 0) {
        return node->value;
    } else if (node->both != prev) {
       get(index-1, node, node->getOtherNode(prev));
    } else {
        return -1;
    }
}



