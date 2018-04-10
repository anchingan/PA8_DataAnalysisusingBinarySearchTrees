//
// Created by Ching-An Tsai on 09/04/2018.
//

#ifndef PA8_DATAANALYSISUSINGBINARYSEARCHTREES_NODE_H
#define PA8_DATAANALYSISUSINGBINARYSEARCHTREES_NODE_H

#include <string>

using std::string;

class Node {
public:
    Node(string str);
    virtual ~Node();
    void setData(string str);
    void setLeft(Node *leftNode);
    void setRight(Node *rightNode);
    string getData();
    Node *&getLeft();
    Node *&getRight();
    virtual void printData() = 0;

private:
    Node *pLeft;
    Node *pRight;

protected:
    string mData;
};


#endif //PA8_DATAANALYSISUSINGBINARYSEARCHTREES_NODE_H
