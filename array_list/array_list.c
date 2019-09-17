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
    new_list->list = malloc(sizeof(void*) * init_length);
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

int main() {
    array_list *test = init(0);
    printf("The length of the test array is %d", test->length);
    return 0;
}
