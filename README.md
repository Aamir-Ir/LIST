# LIST-ADT---Linked-List-Implementation
This project is a personal project of mine where I have implemented a list ADT as a Linked List. It contains the common operations performed by a simple list ADT which is append, prepend, insert, remove, search, print (forward), print (reverse), sort, is empty, and get length. Each file contains an operation which is explained through the comments.

Memory:
All the nodes are dynamically allocated. I have also made sure to keep a track of all the nodes I remove from the list and free them properly. To confirm this I have used valgrind to make sure there are no memory leaks, and initialization errors.

Compilation:
Use the make command to compile the program through the makefile. then use the executable named list (./list) to execute the program.
