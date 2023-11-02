#include <iostream>
#include <cstdlib>
#include "BinaryTree.h"

using namespace std;

BTNode * createBTNode(std::string word) {
    // Implementation of the function
    BTNode * newNode = new BTNode;
    newNode->word = word;
    newNode->count = 1;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->parent = NULL;
    return newNode;
}

void preOrder(BTNode * root) {
    if (root == NULL)
        return;

    // Process the node (e.g., print or perform some action)
    cout << root->word << " ";

    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(BTNode * root) {
    if (root == NULL)
        return;

    inOrder(root->left);
    
    // Process the node (e.g., print or perform some action)
    cout << root->word << " ";
    
    inOrder(root->right);
}

void postOrder(BTNode * root) {
    if (root == NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    
    // Process the node (e.g., print or perform some action)
    cout << root->word << " ";
}

int moment(BTNode * root) {
    if (root == NULL)
        return 0;

    return (1 + moment(root->left) + moment(root->right));
}

int numOneChild(BTNode * root) {
    if (root == NULL)
        return 0;

    int count = 0;
    if (root->left != NULL)
        count++;
    if (root->right != NULL)
        count++;

    count += numOneChild(root->left);
    count += numOneChild(root->right);

    return count;
}

int numNonTerminal(BTNode * root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    return 1 + numNonTerminal(root->left) + numNonTerminal(root->right);
}

int nodeDepth(BTNode * node) {
    int depth = 0;

    while (node != NULL) {
        node = node->parent;
        depth++;
    }

    return depth;
}

