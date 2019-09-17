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
hash_map* init(int (*hash_ptr)(char *key))
{
    hash_map *new_map = (hash_map*)malloc(sizeof(hash_map));
	new_map->hash = (hash_ptr != NULL) ? hash_ptr : &default_hash;
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
// NOTE: Memory for value MUST be allocated already...
void insert(char *key, void *value, hash_map *h_map)
{		
	int index = h_map->hash(key);
	if(index >= h_map->length)
	   	index %= h_map->length;
	h_map->map[index] = value;
}

void *get(char *key, hash_map *h_map)
{
	return h_map->map[h_map->hash(key)];	
}
 
// Use this function for testing only...
int main()
{	
	hash_map *test = init(NULL);
	
	char test_keys[3][30] = {"pipo", "yes", "hello"};
	char test_vals[3][30] = {"papo", "no", "goodbye"};
	
	int i;
	for(i = 0; i < 3; ++i) 
		insert(*((test_keys) + i), *((test_vals) + i), test);
	for(i = 0; i < 3; ++i) 
		printf( "key: %s, value: %s\n", *(test_keys + i), (char*)(get(*((test_keys) + i), test)) );

	dealloc_map(test);
    return 0;
}
