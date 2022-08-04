# include "header.h"

/*
    This function inserts a node after a specified poistion in the linked list.
*/

void listInsertAfter(myList ** head, myList ** tail, myList * curNode, myList * newNode)    {
    
    // Case 1: The list is empty so just simpy append to the list by making the head and tail pointers point to the new node.
    
    if (*head == NULL)   {   //List is empty.
        *head = newNode;
        *tail = newNode;
    }

    // Case 2: Insert at the end of the list since the node chosen was equivelent to the tail node so simply append the list from the tail.

    else if (curNode == *tail) {                       //Insert after tail.
        (*tail)->next = newNode;
        *tail = newNode;
    }

    // Case 3: Insert After the specified node (Can take place anywhere in the list except the tail node).

    else{
        newNode->next = curNode->next;
        curNode->next = newNode;
    }
}