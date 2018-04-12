//
// Created by Ching-An Tsai on 10/04/2018.
//

#ifndef PA8_DATAANALYSISUSINGBINARYSEARCHTREES_DATAANALYSIS_H
#define PA8_DATAANALYSISUSINGBINARYSEARCHTREES_DATAANALYSIS_H

#include <fstream>
#include "BST.h"

using std::ifstream;

class DataAnalysis {
public:
    DataAnalysis();
    ~DataAnalysis();
    void runAnalysis();
private:
    BST mTreeSold;
    BST mTreePurchased;
    ifstream mCsvStream;
    void openFile(ifstream *fileStream);
    void readFile(ifstream *fileStream);
    void insert(string str);
    void splitLine(string str, int &unit, string &transaction, string &productName);
    void analysis();

};


#endif //PA8_DATAANALYSISUSINGBINARYSEARCHTREES_DATAANALYSIS_H
