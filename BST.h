//
// Created by Ching-An Tsai on 09/04/2018.
//

#ifndef PA8_DATAANALYSISUSINGBINARYSEARCHTREES_BST_H
#define PA8_DATAANALYSISUSINGBINARYSEARCHTREES_BST_H

#include "Node.h"
#include "TransactionNode.h"


class BST {
public:
    BST();
    ~BST();

    void insert(string data, int unit);
    void inOrderTraversal();
    TransactionNode &findSmallest();
    TransactionNode &findLargest();



private:

    Node *mpRoot;
    void destroyTree(Node *node);
    void insert(Node *&pNode, string data, int unit);
    void inOrderTraversal(Node *Node);

};


#endif //PA8_DATAANALYSISUSINGBINARYSEARCHTREES_BST_H
