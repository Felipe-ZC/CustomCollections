#include <stdio.h>
#include <stdint.h>
#include "../array_list/array_list.h"

int main()
{
	array_list *myList = init();
	int i;
	
	printf("The size of the list is: %d\n", myList->size);	
	printf("The capacity of the list is: %d\n", myList->capacity);
	
	printf("-------------- Populating list --------------\n");
	for(i = 0; i < myList->capacity; ++i) insert((void*)(intptr_t)i, myList);
	printf("-------------- Done Populating list --------------\n");
	
	printf("The size of the list is: %d\n", myList->size);	
	printf("The capacity of the list is: %d\n", myList->capacity);
	printf("Inserting one more element...\n");
	
	insert((void*)(intptr_t)69420, myList);
	
	printf("The size of the list is: %d\n", myList->size);	
	printf("The capacity of the list is: %d\n", myList->capacity);
	
	for(i = 0; i < myList->size; ++i)	printf("%d\n", (int*)get(i, myList));
	
	dealloc_alist(myList);
			
	return 0;
}
