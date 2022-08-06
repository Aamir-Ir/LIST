# include "header.h"

/*
    This function uses the insertion sort algorithm to perform the sort operation on the linked list.

    NOTE:

    Insertion Sort Alogrithm Time Compleixity.
    WORST CASE: O(N^2).
    BEST CASE: O(N).
*/

void listInsertionSortSinglyLinkedList(myList ** head, myList ** tail)    {
    myList * beforeCurrent = *head;
    myList * next;
    myList * curNode = (*head)->next;
    myList * position;

    while (curNode != NULL) {
        next = curNode->next;
        position = ListFindInsertionPosition(*head, curNode->data);

        if (position == beforeCurrent)  {
            beforeCurrent = curNode;
        } 
        else{
            listRemoveAfter(*head, *tail, beforeCurrent);

            if (position == NULL)   {
                listPrepend(head, tail, curNode);
            }
            else{
                listInsertAfter(head, tail, position, curNode);
            }
        }

        curNode = next;
    }
}