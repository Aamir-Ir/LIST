# include "header.h"

/*
    A function name menu() to print the menu to reduce redundancy.
*/

int menu() {   
    int num;    // Used for input.

    // Menu for all common list ADT operations.

    printf("1) Append Operation.\n");
    printf("2) Prepend Operation.\n");
    printf("3) InsertAfter operation.\n");
    printf("4) RemoveAfter Operation.\n");
    printf("5) Search Operation.\n");
    printf("6) Print Operation.\n");
    printf("7) Print Reverse Operation.\n");
    printf("8) Sort Operation.\n");
    printf("9) IsEmpty Operation.\n");
    printf("10) GetLength Operation.\n");
    printf("Quit: 0\n");
    scanf("%d", &num);

    // Return users selections.
    
    return num;
}