#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_map.h"

int default_hash(char* key) 
{   
	int i, sum = 0;
	// TODO: Find a constant time operation...
	for(i = 0; i < strlen(key); ++i)
	   	sum += (int)(key[i]);
	return sum;   
}

// Initialize a new instance of hash_map...
/*hash_map* init_w_hash(int (*hash_ptr)(char *key))
{
    hash_map *new_map = (hash_map*)malloc(sizeof(hash_map));
	new_map->hash = (hash_ptr != NULL) ? hash_ptr : &default_hash;
	new_map->map = malloc(sizeof(void*) * BUFSIZ);
	new_map->length = BUFSIZ;
 	return new_map;
}*/

hash_map* init()
{
    hash_map *new_map = (hash_map*)malloc(sizeof(hash_map));
    new_map->hash = &default_hash;
    new_map->map = malloc(sizeof(void*) * BUFSIZ);
    new_map->length = BUFSIZ;
    return new_map;
}

void dealloc_map(hash_map *h_map)
{
    free(h_map->map);
    free(h_map);
}

// TODO: Check if there is already a value for the given key...
// Memory for value must be dynamically allocated and freed
// aka let the caller handle that...
void insert(char *key, void *value, hash_map *h_map)
{		
    int index = h_map->hash(key);
    if(index >= h_map->length) index %= (h_map->length - 1);
    h_map->map[index] = value; // TODO: This only points to value
}

void *get(char *key, hash_map *h_map)
{
    return h_map->map[h_map->hash(key)];	
} 
