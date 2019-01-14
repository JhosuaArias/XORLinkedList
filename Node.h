//
// Created by Jhosua on 13/1/2019.
//

#ifndef XORLINKEDLIST_NODE_H
#define XORLINKEDLIST_NODE_H


class Node {

    void setBoth(Node* node);

public:
    Node* both;

    Node(int);
    Node* getOtherNode(Node* node);

    int value;
};


#endif //XORLINKEDLIST_NODE_H
