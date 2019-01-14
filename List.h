//
// Created by Jhosua on 13/1/2019.
//

#ifndef XORLINKEDLIST_LIST_H
#define XORLINKEDLIST_LIST_H


#include "Node.h"

class List {

    Node* first;

public:
    List();
    void add(int);
    int get(int);
    void print();

private:
    void add(Node*, Node*, Node*);
    int get(int, Node*, Node*);
    void print(Node*, Node*);
};


#endif //XORLINKEDLIST_LIST_H
