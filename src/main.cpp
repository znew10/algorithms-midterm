#include <iostream>
#include <fstream>
#include "RedBlackTree.h"

using namespace std;

int main() {
    RedBlackTree bst;

    string line;
    ifstream input("../inputs/sample_data.txt");    

    while (getline(input, line)) {
        bst.insert(stoi(line));
    }

    bst.deleteNode(25);
    bst.print();
    return 0;
}