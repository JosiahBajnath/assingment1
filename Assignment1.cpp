#include <iostream>
#include <fstream>
#include <cstring>
#include "BinaryTree.h"
#include "BinarySearchTree.h"

using namespace std;

void readWordsAndStoreInBST(BTNode*& wordBST) {
    ifstream wordsFile("Words.txt");
    if (!wordsFile.is_open()) {
        cerr << "Failed to open Words.txt" << endl;
        return;
    }

    string word;
    while (wordsFile >> word) {
        if (word == "END") {
            break;
        }
        wordBST = insertBSTRec(wordBST, word);
    }

    wordsFile.close();
}

int main() {
    BTNode * wordBST = NULL;

    cout << "COMP 2611 Assignment 1" << endl;
    cout << "======================" << endl << endl;

    readWordsAndStoreInBST(wordBST);
	
    // Read and execute commands here
    // Modify this part based on your assignment requirements

    return 0;
}

