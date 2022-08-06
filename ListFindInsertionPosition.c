# include "header.h"

/*
    This function as the name implies find the insertion position of the node depedning on the data.

    NOTE:

    Insertion Sort Alogrithm Time Compleixity.
    WORST CASE: O(N^2).
    BEST CASE: O(N).
*/

myList *  ListFindInsertionPosition(myList * head, int data)    {
    myList * curNodeA = NULL;
    myList * curNodeB = head;

    while ((curNodeB != NULL) && (data > curNodeB->data))    {
        curNodeA = curNodeB;
        curNodeB = curNodeB->next;
    }
    return curNodeA;
}