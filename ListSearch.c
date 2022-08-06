# include "header.h"

/*
    This is the ListSearch function. The function searches for a given key by the user in the linked list if it is found it will
    return the position of the node containing the data in the list.
*/

int listSearch(myList * head, int key) {
    myList * curNode = head;            // Start from the head pointer.
    int iteration = 1;                  // Keep track of the position.

    // While curNode does not equal NULL traverse the list.

    while (curNode != NULL)    {

        // if the data in the current node matches the key return the position of the node.

        if (curNode->data == key)   {
            return iteration;
        }
        curNode = curNode->next;        // Traverse.
        iteration++;                    // Iterate the position.
    }

    // Return the position.
    
    return 0;
}