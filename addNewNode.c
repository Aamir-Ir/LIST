# include "header.h"

/*
    This is a function used to create a new node of type myList. The node consists of the data part and the pointer part as defined
    in the header file. The function returns a pointer of type myList after allocating space on the HEAP for a node and inserting
    the data for the node and setting the next pointer to NULL. This effectively creates a newNode with the required data.

    Visually ->          ______ ___
                 new--->| data | 0-|---> NULL

    This node is then returned and pointed to by the aNode of type myList * in main which is then used to be added on to the list
    accross multiple function operations in the LIST ADT such as Append, Prepend, InsertAfter, etc.   
                           
*/

myList * addNewNode()   {
    int num;                                    // Used for input for the data part.
    myList * new = malloc(sizeof(myList));      // New pointer of type myList * recieves space on the HEAP with the malloc() function.

    // Input for the data part of the node.

    printf("Add an interger value to the list:\n");
    scanf("%d", &num);

    // Store the data in the node and set the next ppinter of the node to NULL.

    new->data = num;
    new->next = NULL;

    // Return the pointer to aNode in main where the aNode of type myList * points to this newly created node.

    return new;
}