#include <stdio.h>
#include <stdlib.h>
#include "array_list.h"

// TODO: Dont use an int here,
// use an unsigned int since a
// the size of an array must be
// a positive number.
array_list *init(int init_size) 
{   
    size_t init_len = (init_size > 0) ? init_size : BUFSIZ ;
    array_list *new_list = (array_list*)malloc( sizeof(array_list));
    new_list->list = malloc(sizeof(void*) * init_len);
    new_list->length = init_len;
    return new_list;
}

void dealloc_alist(array_list *a_list)
{
    int i;
    for(i = 0; i < (a_list->length); ++i)
        free(a_list->list[i]);
    free(a_list->list);
}

// Append a new element to the end of a_list.
void insert(void *value, array_list *a_list)
{
    int i = 0;
    void *iter = (a_list->list) + i;
    while(*iter != NULL) iter += (++i); 
    *iter = value;
}

int main() {
    array_list *test = init(1);
    printf("The length of the test array is %d\n", test->length);
    return 0;
}
