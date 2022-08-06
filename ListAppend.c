# include "header.h"

/*
    This is the ListAppend function which simulates the operation of appending to the List ADT.
*/

void listAppend(myList ** head, myList ** tail, myList * newNode)    {

    /* 
        Case 1: The list is empty (because head pointes to NULL) therefore both the head and the tail nodes will be made to point to 
        the newNode.
    */

    if (*head == NULL)   {   
        *head = newNode;
        *tail = newNode;
    }

    /* 
        Case 2: The list is not empty as the head pointer does not point to NULL this means that we append to the end of the list by 
        modifying the previouse tail nodes next pointer to newNode and the tail pointer to the newNode.
    */

    else{
        (*tail)->next = newNode;
        *tail = newNode;
    }
}