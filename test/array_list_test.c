#include <stdio.h>
#include <stdint.h>
#include "../array_list/array_list.h"

int test_insert(array_list *my_list)
{
	int i;
	
	printf("The size of the list is: %d\n", my_list->size);	
	printf("The capacity of the list is: %d\n", my_list->capacity);
	
	printf("-------------- Populating list --------------\n");
	for(i = 0; i < (my_list->capacity); ++i)
	   	insert((void*)(intptr_t)i, my_list);
	printf("-------------- Done Populating list --------------\n");
	
	printf("The size of the list is: %d\n", my_list->size);	
	printf("The capacity of the list is: %d\n", my_list->capacity);
	printf("Inserting one more element...\n");
	insert((void*)(intptr_t)69420, my_list);
	printf("The size of the list is: %d\n", my_list->size);	
	printf("The capacity of the list is: %d\n", my_list->capacity);

	printf("-------------- Populating list --------------\n");
	for(i = (my_list->size); i < (my_list->capacity); ++i)
	   	insert((void*)(intptr_t)i, my_list);
	printf("-------------- Done Populating list --------------\n");
	
	printf("Inserting one more element...\n");
	insert((void*)(intptr_t)69420, my_list);
	printf("The size of the list is: %d\n", my_list->size);	
	printf("The capacity of the list is: %d\n", my_list->capacity);

}


int main()
{
	array_list *list = init();
	test_insert(list);	
	dealloc_alist(list);
	return 0;
}
