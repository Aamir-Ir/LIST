# include "header.h"

/*
    This function is named IsEmpty and it simulates the operation IsEmpty for the List ADT.
*/

bool isEmpty(myList * head) {   
    if (head == NULL)   {   // Since the head is NULL the list is empty so return true.
        return true;
    }
    else{                   // False since head is not NULL (not empty).
        return false;
    }
}