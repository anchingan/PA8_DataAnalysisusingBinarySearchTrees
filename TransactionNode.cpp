//
// Created by Ching-An Tsai on 09/04/2018.
//

#include <iostream>
#include "TransactionNode.h"

using std::cout;
using std::endl;

TransactionNode::~TransactionNode() {
}

void TransactionNode::setUnit(int unit) {
    mUnit = unit;
}

int TransactionNode::getUnit() {
    return mUnit;
}

void TransactionNode::printData() {
    cout << mData << ": " << mUnit << endl;
}


