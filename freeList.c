# include "header.h"

/*
    This function is used to free all the nodes in the HEAP that we have created and stored on the HEAP using the malloc function.
    This is possible as the head node has access to every node that we have allocated on the HEAP as the head pointer points to the 
    first node in the list and all others nodes are linked using the next pointer in the pointer part of the node therefore every
    node can be traversed by using the head pointer so we can free every node on the HEAP. This will result in 0 memory leaks.
*/

void freeList(myList * head)    {
    myList * curNode = head;

    // Traverse the list to free all the nodes once the program ends as there is no need to keep the list in memory.

    while (head != NULL)    {
        curNode = head;         // This curNode stores the address of the node head points to temporarily.
        head = head->next;      // Traverse head forward a node.
        free(curNode);          // Free the pointer of the curNode node.
    }    
}