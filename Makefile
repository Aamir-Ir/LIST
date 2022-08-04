list: ListAppend.o ListPrepend.o ListInsertAfter.o listRemoveAfter.o ListSearch.o listInsertionSortSinglyLinkedList.o ListFindInsertionPosition.o IsEmpty.o GetLength.o addNewNode.o PrintList.o PrintListReverse.o TraverseUntil.o menu.o freeList.o main.o
	gcc -Wall -std=c99 ListAppend.o ListPrepend.o ListInsertAfter.o listRemoveAfter.o ListSearch.o listInsertionSortSinglyLinkedList.o ListFindInsertionPosition.o IsEmpty.o GetLength.o addNewNode.o PrintList.o PrintListReverse.o TraverseUntil.o menu.o freeList.o main.o -o list

ListAppend.o: ListAppend.c header.h
	gcc -Wall -std=c99 -c ListAppend.c

ListPrepend.o: ListPrepend.c header.h
	gcc -Wall -std=c99 -c ListPrepend.c

ListInsertAfter.o: ListInsertAfter.c header.h
	gcc -Wall -std=c99 -c ListInsertAfter.c

listRemoveAfter.o: listRemoveAfter.c header.h
	gcc -Wall -std=c99 -c listRemoveAfter.c

ListSearch.o: ListSearch.c header.h
	gcc -Wall -std=c99 -c ListSearch.c

PrintList.o: PrintList.c header.h
	gcc -Wall -std=c99 -c PrintList.c

PrintListReverse.o: PrintListReverse.c header.h
	gcc -Wall -std=c99 -c PrintListReverse.c

listInsertionSortSinglyLinkedList.o: listInsertionSortSinglyLinkedList.c header.h
	gcc -Wall -std=c99 -c listInsertionSortSinglyLinkedList.c

ListFindInsertionPosition.o: ListFindInsertionPosition.c header.h
	gcc -Wall -std=c99 -c ListFindInsertionPosition.c

IsEmpty.o: IsEmpty.c header.h
	gcc -Wall -std=c99 -c IsEmpty.c

GetLength.o: GetLength.c header.h
	gcc -Wall -std=c99 -c GetLength.c

addNewNode.o: addNewNode.c header.h
	gcc -Wall -std=c99 -c addNewNode.c

TraverseUntil.o: TraverseUntil.c header.h
	gcc -Wall -std=c99 -c TraverseUntil.c

menu.o: menu.c header.h
	gcc -Wall -std=c99 -c menu.c

freeList.o: freeList.c header.h
	gcc -Wall -std=c99 -c freeList.c

main.o: main.c header.h
	gcc -Wall -std=c99 -c main.c

clean:
	rm *.o list
