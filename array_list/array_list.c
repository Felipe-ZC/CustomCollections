#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array_list.h"

array_list *init() 
{   
	array_list *new_list = (array_list*)malloc(sizeof(array_list));
	new_list->capacity = BUFSIZ;
	new_list->list = malloc(sizeof(void*) * new_list->capacity);
	new_list->size = 0;
	return new_list;
}

void dealloc_alist(array_list *a_list)
{
	free(a_list->list);
	free(a_list);
}

int resize(array_list *a_list)
{	
	// Increase capacity by BUFSIZ elements...
	a_list->capacity += BUFSIZ;
	a_list->list = realloc(a_list->list, sizeof(void*) * (a_list->capacity));	
	return a_list->capacity;
}

// Append a new element to the end of a_list.
int insert(void *value, array_list *a_list)
{
	if(a_list->size >= a_list->capacity) resize(a_list);
	a_list->list[(a_list->size)] = value;
	a_list->size++;
	return 0;
}

void* del(int index, array_list *a_list)
{	
	if(index < a_list->size)
   	{
		int i = 0;
		while(i < index) ++i;
		void *tmp = a_list->list[i];
		a_list->list[i] = NULL;
		return tmp;
	}
   	else return NULL;
}

void *get(int index, array_list *a_list)
{
    return (a_list->size > index) ? a_list->list[index] : NULL;
}
