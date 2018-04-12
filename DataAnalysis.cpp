//
// Created by Ching-An Tsai on 10/04/2018.
//

#include "DataAnalysis.h"
#include <string>
#include <sstream>
#include <iostream>

using std::stringstream;
using std::stoi;
using std::cout;
using std::endl;

DataAnalysis::DataAnalysis() {
    mTreePurchased = *new BST();
    mTreeSold = *new BST();
    openFile(&mCsvStream);
    readFile(&mCsvStream);
}

DataAnalysis::~DataAnalysis() {
//    delete(mTreeSold);
//    delete(mTreePurchased);
}

void DataAnalysis::openFile(ifstream *fileStream) {
    fileStream->open("/Users/chingan/Documents/Cpts122/PA8_DataAnalysisusingBinarySearchTrees/data.csv");
}

void DataAnalysis::readFile(ifstream *fileStream) {
    string str;
    // Read title
    getline(*fileStream, str);
    while(getline(*fileStream, str)){
        insert(str);
    }
    cout << "-----Purchased-----" << endl;
    mTreePurchased.inOrderTraversal();
    cout << "-----Sold-----" << endl;
    mTreeSold.inOrderTraversal();
    fileStream->close();
}

void DataAnalysis::insert(string str) {
    int units;
    string transaction, productName;
    splitLine(str, units, transaction, productName);
    if (transaction.compare("Purchased") == 0) {
        mTreePurchased.insert(productName, units);
    } else {
        mTreeSold.insert(productName, units);
    }
}

void DataAnalysis::splitLine(string str, int &unit, string &transaction, string &productName) {
    stringstream stream(str);
    string strTmp;
    getline(stream, strTmp, ',');
    unit = stoi(strTmp);
    getline(stream, productName, ',');
    getline(stream, transaction);
    //remove last character
    transaction.erase(transaction.size() - 1);
}

void DataAnalysis::runAnalysis() {
    analysis();
}

void DataAnalysis::analysis() {
    cout << "-----Summary-----" << endl;
    cout << "Sold largest: ";
    mTreeSold.findLargest().printData();
    cout << "Sold smallest: ";
    mTreeSold.findSmallest().printData();
    cout << "Purchased largest: ";
    mTreePurchased.findLargest().printData();
    cout << "Purchased smallest: ";
    mTreePurchased.findSmallest().printData();
}
