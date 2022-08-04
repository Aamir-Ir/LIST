# include "header.h"

/*
    Here is a group of functions which together print the linked list node's in reverse. This is achieved through Recursion.
*/

// The inital function is called to traverse the list backwards.

void listTraverseReverse(myList * head)   {

    // Check to see if the list is empty or not exit the function if it is.

    if (isEmpty(head) == true)   {
        printf("List is currently empty you need to add nodes to display the list in reverse.\n");
        return;
    }

    // Call recursive function ListTraverseReverseRecursive.

    listTraverseReverseRecursive(head);
}

void listTraverseReverseRecursive(myList * node)  {

    // if the node is not NULL call the funciton using the next node and print the data of that node.

    if (node != NULL)   {
        listTraverseReverseRecursive(node->next);           // Call the function and traverse to the next node.
        printf("%d\n", node->data);                         // Operations performed at each node which is to print the data.
    }
}