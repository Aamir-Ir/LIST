#include <stdio.h>          
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h> 

/*
    myList structure consists of the data which is a single integer and the dynamic coonection to the next node in the list.
*/

typedef struct list{
    int data; 		      //integer value.
    struct list * next;   //dynamic connection to the next node in the list.
}myList;

// Common List ADT Operations (See functions for further explanations).

void listAppend(myList ** head, myList ** tail, myList * newNode);

void listPrepend(myList ** head, myList ** tail, myList * newNode);

void listInsertAfter(myList ** head, myList ** tail, myList * curNode, myList * newNode);

void listRemoveAfter(myList * head, myList * tail, myList * curNode);

int listSearch(myList * head, int key);

void printList(myList * head);

// The following two function together print the list in Reverse order.

void listTraverseReverse(myList * head);

void listTraverseReverseRecursive(myList * node);

// The following two function together perform the insertion sort algorithm

void listInsertionSortSinglyLinkedList(myList ** head, myList ** tail);

myList *  ListFindInsertionPosition(myList * head, int data);

bool isEmpty(myList * head);

int getLength(myList * head);

// Helper functions (See functions for further explanations).

myList * traverseUntil(myList * head, int iA);

myList * addNewNode();

void freeList(myList * head);

int menu(); 



