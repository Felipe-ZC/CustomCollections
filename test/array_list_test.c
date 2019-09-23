#include <stdio.h>
#include <stdint.h>
#include "../array_list/array_list.h"
#define LOW_BOUND  10000
#define HIGH_BOUND 10000000

int test_insert(array_list *my_list)
{
	int i;	
	printf("The size of the list is: %d\n", my_list->size);	
	printf("The capacity of the list is: %d\n", my_list->capacity);	
    printf("Populating list...\n");

    for(i = 0; i < LOW_BOUND; ++i) {
        insert((void*)(intptr_t)i, my_list); 
        printf("The size of the list is: %d\n", my_list->size);	
	    printf("The capacity of the list is: %d\n", my_list->capacity);
    }
	
    printf("Populating list again...\n");

    for(i = LOW_BOUND; i < HIGH_BOUND ; ++i) {
        insert((void*)(intptr_t)(char)i, my_list);
        printf("The size of the list is: %d\n", my_list->size);	
	    printf("The capacity of the list is: %d\n", my_list->capacity);
    }

    printf("-------- End --------\n");	
}


int main()
{
	array_list *list = init();
	test_insert(list);	
	dealloc_alist(list);
	return 0;
}
