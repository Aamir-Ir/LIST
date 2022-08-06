# include "header.h"

/*
    This function is named IsEmpty and it simulates the operation IsEmpty for the List ADT.
*/

bool isEmpty(myList * head) {

    // Case 1: Since the head is NULL (empty) return true.   
    
    if (head == NULL)   {
        return true;
    }

    // Case 2: Since head is not NULL (not empty) return false.
    
    else{                   
        return false;
    }
}
