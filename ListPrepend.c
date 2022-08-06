# include "header.h"

/*
    This is the ListPrepend function which simulates the prepend operation for the List ADT.
*/

void listPrepend(myList ** head, myList ** tail, myList * newNode)    {

    /* 
        Case 1: The list is empty (because head pointes to NULL) therefore both the head and the tail nodes will be made to point to 
        the newNode.
    */

    if (*head == NULL)   {   
        *head = newNode;
        *tail = newNode;
    }

    /* 
        Case 2: The list is not empty as the head pointer does not point to NULL this means that we prepend to the start of the list by 
        modifying the the newNode nodes next pointer to the previous head pointer and point the head pointer to the newNode.
    */

    else{
        newNode->next = *head;
        *head = newNode;
    }
}