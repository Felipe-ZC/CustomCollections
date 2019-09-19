#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array_list.h"

// TODO: Dont give users access to the array_list directly!
// Declare it as static in this file so it can only be used
// by methods defined in this file!
array_list *init() 
{   
	array_list *new_list = (array_list*)malloc(sizeof(array_list));
	new_list->list = malloc(sizeof(void*)*BUFSIZ);
	new_list->size = 0;
	return new_list;
}

void dealloc_alist(array_list *a_list)
{
	int i;
	// TODO: Add another function that deallocs all the items 
	// inside of list, let user know its unsafe.
	/*for(i = 0; i < (a_list->size); ++i) free(a_list->list[i]);*/
	free(a_list->list);
	free(a_list);
}

// Append a new element to the end of a_list.
void insert(void *value, array_list *a_list)
{
	if(a_list->size >= 0) {
		a_list->list[(a_list->size)] = value;
		a_list->size++;
	} // else return -1 
}

void *get(int index, array_list *a_list)
{
    return (a_list->size > index) ? a_list->list[index] : NULL;
}

int main() {
	array_list *test = init(1);
	char *dyna_str = (char*)malloc(sizeof(char*));
	strcpy(dyna_str, "swag");
	insert("yolo", test);
	insert(dyna_str, test);
	printf("%s\n", (char*)(test->list[0]));
	printf("The length of the test array is %d\n", test->size);
        free(dyna_str);
	dealloc_alist(test);
	return 0;
}
