#ifndef _BINARYSEARCHTREE_H
#define _BINARYSEARCHTREE_H

BTNode * insertBSTRec (BTNode * root, string word);
BTNode * containsBSTRec (BTNode * root, string word);
BTNode * deleteNodeBST (BTNode * root, string word);
BTNode * minimumBST (BTNode * root);
BTNode * maximumBST (BTNode * root);
BTNode * inOrderSuccessor (BTNode * btNode);
BTNode * ceiling(BTNode * root, string key);
BTNode * reBalanceBST (BTNode * root);

#endif
