//
// Created by Ching-An Tsai on 09/04/2018.
//

#include "Node.h"

Node::Node(string str) {
    mData = str;
    pLeft = nullptr;
    pRight = nullptr;

}

Node::~Node() {

}

void Node::setData(string str) {
    mData = str;
}

void Node::setLeft(Node *leftNode) {
    pLeft = leftNode;
}

void Node::setRight(Node *rightNode) {
    pRight = rightNode;
}

string Node::getData() {
    return mData;
}

Node *&Node::getLeft() {
    return pLeft;
}

Node *&Node::getRight() {
    return pRight;
}
