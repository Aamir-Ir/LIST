# include "header.h"

/*
    This is the PrintList funciton which simulates the operation to print the entire List ADT.
*/

void printList(myList * head) {

    /*
        If the list is empty state that it is and promt the user to add nodes to display a list.
    */

    if (isEmpty(head) == true)   {
        printf("List is currently empty you need to add nodes to display the list.\n");
        return;
    }

    myList * curNode = head;                // Create a current pointer make it point to the head pointer.

    // While the current pointer does not hit the end of the list print the data in the node and then traverse the list.

    while (curNode != NULL)    {
        printf("%d\n", curNode->data);      // Print the data.
        curNode = curNode->next;            // Traverse the list.
    }
}