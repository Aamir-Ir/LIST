# include "header.h"

/*
    This function removes a node after the specified node in the linked list.
*/

void listRemoveAfter(myList * head, myList * tail, myList * curNode)   {
    myList * sucNode;
    myList * removedNode;
    
    // Case 1: Remove the head of the list.

    if ((curNode == NULL) && (head != NULL))    {
        removedNode = head;                             // Keep track of the node you want to remove so you can free it.
        sucNode = head->next;
        head = sucNode;

        /*
            Sub Case: If the head node is the only node in the list make sure the ail pointer also points to NULL so we meet the 
            conditions for an empty list. 
        */

        if (sucNode == NULL)    {
            tail = NULL;
        }

        free(removedNode);                              // Free the node you removed from the linked list.
    }

    // Case 2: Remove any other node except the head of the list.

    else if (curNode->next != NULL) {
        removedNode = curNode->next;                    // Keep track of the node you want to remove so you can free it.
        sucNode = curNode->next->next;
        curNode->next = sucNode;

        // Sub Case: If you are removing the last node of the list (tail node), you need to update where the tail node points.

        if (sucNode != NULL)    {
            tail = curNode;
        }

        free(removedNode);                              // Free the node you removed from the linked list.
    }
    
}