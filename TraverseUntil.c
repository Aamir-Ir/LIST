# include "header.h"

/*
    This function is used to traverse until a particular node in the list which is picked by the user. It is used as a helped function
    for the insertAfter and removeAfter functions to find the "curNode" variable for them.
*/

myList * traverseUntil(myList * head, int iA) {
    int i = 1;
    myList * curNode = head;

    // If it is the head node return NULL for the removeAfter operation as you cannot remove or insert before the head node.

    if (iA == 0)    {
        return NULL;
    }
    
    // If the list is empty. 

    if (head == NULL)   {
        return NULL;
    }

    // If the earlier conditions are not met then we are ready to traverse until a specific node.

    while (i != iA)    {
        curNode = curNode->next;    // Traverse.
        i++;                        // Keep track of the position.
    }

    // Return the expected node.

    return curNode;
}