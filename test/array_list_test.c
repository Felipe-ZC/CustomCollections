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
	for(i = 0; i < BUFSIZ; ++i)
   	{	
        insert((void*)(intptr_t)i, myList);
		printf("The size of the list is now: %d\n", myList->size);	
	}

	dealloc_alist(myList);
	/*for(i = 0; i < BUFSIZ; ++i)	printf("%d\n", (int*)get(i, myList));*/
				
	return 0;
}
