//
// Created by Ching-An Tsai on 09/04/2018.
//

#include "BST.h"

BST::BST() {
    mpRoot = nullptr;
}

BST::~BST() {
    destroyTree(mpRoot);
}

void BST::destroyTree(Node *pNode) {
    if (pNode != nullptr) {
        destroyTree(pNode->getLeft());
        destroyTree(pNode->getRight());
        delete(pNode);
    }
}

void BST::insert(string data, int unit) {
    insert(mpRoot, data, unit);
}

void BST::insert(Node *&pNode, string data, int unit) {
    if (pNode == nullptr) {
        pNode = new TransactionNode(data, unit);
    } else if (unit < dynamic_cast<TransactionNode *> (pNode)->getUnit())
        insert(pNode->getLeft(), data, unit);
    else
        insert(pNode->getRight(), data, unit);
}

void BST::inOrderTraversal() {
    inOrderTraversal(mpRoot);
}

void BST::inOrderTraversal(Node *node) {
    if (node != nullptr) {
        inOrderTraversal(node->getLeft());
        node->printData();
        inOrderTraversal(node->getRight());
    }
}

TransactionNode &BST::findSmallest() {
    Node *preNode = nullptr, *currentNode = mpRoot;
    TransactionNode *tNode = nullptr;
    int unit;
    while (currentNode != nullptr) {
        preNode = currentNode;
        currentNode = currentNode->getLeft();
    }
    tNode = dynamic_cast<TransactionNode *> (preNode);
//    unit = tNode->getUnit();
    return *tNode;
}

TransactionNode &BST::findLargest() {
    Node *preNode = nullptr, *currentNode = mpRoot;
    TransactionNode *tNode = nullptr;
    int unit;
    while (currentNode != nullptr) {
        preNode = currentNode;
        currentNode = currentNode->getRight();
    }
    tNode = dynamic_cast<TransactionNode *> (preNode);
    return *tNode;
}




