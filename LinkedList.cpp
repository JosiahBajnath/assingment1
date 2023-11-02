#include <iostream>
#include <cstdlib>
#include "LinkedList.h"

using namespace std;


LLNode * createNode (string name, int rating) {
	return NULL;
}



LLNode * insertAtHead (LLNode * top, string name, int rating) {
   
   return NULL;          			
}   



LLNode * insertAtTail (LLNode * top, string name, int rating) {
 	return NULL;  			

}


LLNode * deleteAtHead (LLNode * top) {
   
	return NULL;
}



LLNode * getLast (LLNode * top) {

   return NULL;
}



LLNode * contains (LLNode * top, int name) {

   return NULL;      
}



int size (LLNode * top) {
   LLNode * curr;
   int numNodes = 0;
   
   curr = top;
   while (curr != NULL) {
      numNodes = numNodes + 1;
      curr = curr->next;
   }
   return numNodes;
}



void printList (LLNode * top) {
 	return;

}



void clear (LLNode * top) {
	return;

}
