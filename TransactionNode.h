//
// Created by Ching-An Tsai on 09/04/2018.
//

#ifndef PA8_DATAANALYSISUSINGBINARYSEARCHTREES_TRANSACTIONNODE_H
#define PA8_DATAANALYSISUSINGBINARYSEARCHTREES_TRANSACTIONNODE_H

#include "Node.h"
#include <string>

using std::string;


class TransactionNode : public Node{
public:
    TransactionNode(string str, int unit): Node(str){
        mUnit = unit;
    }
    ~TransactionNode();
    void setUnit(int unit);
    int getUnit();
    void printData();

private:
    int mUnit;


};


#endif //PA8_DATAANALYSISUSINGBINARYSEARCHTREES_TRANSACTIONNODE_H
