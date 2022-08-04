# include "header.h"

int main(int argc, char * argv[])  {
    int input;                          // Keeps track of user input for the menu operations.
    int insertAfter;                    // Keeps track of user input for which node to insert a newNode after.
    int removeAfter;                    // Keeps track of user input for which node to remover after a newNode.
    bool status;                        // Keeps track of the status of the list wether it is empty or not.
    int length;                         // Keeps track of the exact lenght of the list.
    int key;                            // Keeps track of user input for which integer you want to serach for in the list.
    int position;                       // Keeps track of position where the data was found.
    myList * head = NULL;               // Keeps track of the head of the list.
    myList * tail = NULL;               // Keeps track of the tail of the list.
    myList * aNode;                     // Keeps track of new nodes that are created.
    myList * curNode;                   // Keeps track of the current node used accross multiple operations.

    // Menu/Greeting.

    printf("Hello Welcome to my implementation of a LIST ADT. Below You will see common operations performed by a list ADT.\n");
    input = menu();
    
    // Run the program until the user enters 0 to end it.

    while (input != 0)    {

        /*
            IF the number is in range of the menu operations then the program will run the appropriate operation otherwise ask agian
            for a new integer.
        */

        if ((input >= 0) && (input <= 10))    {
        
            // Operation 1: Append to the end of the LIST ADT.

            if (input == 1) {                       
                aNode = addNewNode();               // Creation of a new node.
                listAppend(&head, &tail, aNode);    // Append the node to the list.
            }

            // Operation 2: Prepend to the start of the LIST ADT.
        
            else if (input == 2)    {
                aNode = addNewNode();               // Creation of a new node.
                listPrepend(&head, &tail, aNode);   // Prepend the node to the list.             
            }
        
            // Operation 3: Insert After a node in the LIST ADT.

            else if (input == 3)    {

                // Case 1: If the list is empty just simply append to the list.

                if (isEmpty(head) == true)   {
                    printf("There are no new nodes so simply just append to the list.\n");
                    curNode = traverseUntil(head, insertAfter);
                    aNode = addNewNode();
                    listInsertAfter(&head, &tail, curNode, aNode); 
                }

                // Case 2: Insert after any node in the list.

                else{
                    printList(head);
                    printf("Hey which node do you want to insert a newNode after.\n");
                    scanf("%d", &insertAfter);

                    // Error check for appropriate integer.

                    while ((insertAfter > getLength(head)) || (insertAfter < 0))    {
                            printf("Error the number you gave has no node before it so you cannot use the insert after operation. Pick again.\n");
                            scanf("%d", &insertAfter);
                    }

                    // Sub Case 1: If input is 0 do nothing.

                    if (insertAfter == 0)   {
                        printf("You cannot insert before the head node using the operation insertAfter.\n");
                    }

                    // Sub Case 2: Acceptable input.

                    else    {
                        curNode = traverseUntil(head, insertAfter);
                        aNode = addNewNode();
                        listInsertAfter(&head, &tail, curNode, aNode); 
                    }
                }
            }
        
            // Operation 4: Remove After Operation of the LIST ADT.

            else if (input == 4)  {

                // Case 1: If the list is empty report it.

                if (isEmpty(head) == true) {
                    printf("The list is empty so you cannot remove anything unless you add nodes in the list to remove.\n");
                }

                // Case 2: If there are not enough nodes report it. 

                else if (getLength(head) == 1)  {
                    printf("You need the list to atleast have 2 nodes in order to use the remove after operation.\n");
                }

                // Case 3: Carry out the operation normally. 

                else    {      
                    printList(head);
                    printf("Pick the node prior to the one you want to remove.\n");
                    scanf("%d", &removeAfter);

                    // Error check for appropriate integer.

                    while ((removeAfter >= getLength(head)) || (removeAfter < 0))    {
                        printf("Error the number you gave has no node after to remove. Pick again.\n");
                        scanf("%d", &removeAfter);
                    }
                    
                    // Remove the specified node.

                    curNode = traverseUntil(head, removeAfter);
                    listRemoveAfter(head, tail, curNode);
                }
            }

            // Operation 5: Search Operation of the LIST ADT.

            else if (input == 5)    {
        
                //Case 1: List is emtpy.

                if (isEmpty(head) == true)   {                                                                      
                    printf("The list is empty you cannot search for an integer in it until you add nodes.\n");
                }

                //Case 2: Look for the node with the search key.

                else    {
                    printf("You are in the search operation which integer do you want to look for:");
                    scanf("%d", &key);
                    position = listSearch(head, key);
        
                    // Sub Case 1: Node containing the key found report its position. 

                    if (position != 0)  {
                        printf("A node with the data was found at position: %d.\n", position);
                    }
        
                    // Sub Case 2: If no node has the key then report no node contains the key.
                    
                    else    {
                        printf("There is no node that contains that integer.\n");
                    }
                }
            }

            // Operation 6: Print the LIST ADT.
        
            else if (input == 6)    {
                printList(head);            
            }

            // Operation 7: Print the LIST ADT in reverse.

            else if (input == 7)    {
                listTraverseReverse(head);
            }
        
           // Operation 8: Sort the list in Ascending order using Insertion Sort algorithm.    

            else if (input == 8)    {
                listInsertionSortSinglyLinkedList(&head, &tail);
            }

            // Operation 9: Check if the list is empty or not operation of the LIST ADT.

            else if (input == 9)    {                               
                status = isEmpty(head);

                // Report the status if the list is empty or not.

                if (status == true) {
                    printf("The list is empty.\n");
                }
        
                else{
                    printf("The list is not empty.\n");
                }
            }

            // Operation 10: GetLength Operation of the LIST ADT.

            else if (input == 10)   {                                
                length = getLength(head);
                printf("The length of the list is %d.\n", length);                
            }
            
            // Reprint menu and ask for the next operation.

            printf("Okay previous operation complete please pick again.\n");
            input = menu();
        }
 
        else{

            // Error Handling for incorrect integer.

            printf("Invalid input please try again.\n");
            input = menu();
        }
    }

    freeList(head);

    return 1;
}