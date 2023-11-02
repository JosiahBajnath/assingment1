#ifndef _BINARYTREE_H
#define _BINARYTREE_H

#include "NodeTypes.h"

BTNode * createBTNode(std::string word); // Declare the function

void preOrder (BTNode * root);
void inOrder (BTNode * root);
void postOrder (BTNode * root);

int moment (BTNode * root);
int numOneChild (BTNode * root);
int numNonTerminal (BTNode * root);
int nodeDepth (BTNode * node);

int height(BTNode * root);
bool isEqual(BTNode * root1, BTNode * root2);
int weight(BTNode * root);
void levelOrderByLevels (BTNode * node);
void deleteBT (BTNode * root);

#endif
