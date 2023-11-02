#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

#include "NodeTypes.h"

LLNode * createLLNode (string name, int rating);
LLNode * insertAtHead (LLNode * top, string name, int rating);
LLNode * insertAtTail (LLNode * top, string name, int rating);
LLNode * deleteAtHead (LLNode * top);
LLNode * getLast (LLNode * top);
LLNode * contains (LLNode * top, int name);
int size (LLNode * top);
void printList (LLNode * top);
void clear (LLNode * top1);

#endif
