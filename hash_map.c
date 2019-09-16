#include <stdio.h>
#include <stdlib.h>
#include "hash_map.h"

// Initialize a new instance of hash_map...
// TODO: Allow argument for hash function...
hash_map* init() {
    hash_map *new_map = (hash_map*)malloc(sizeof(hash_map));
    
};

int default_hash(int len) 
{   
    srand(time(0));
    return rand() % len;
}

int insert(void *value, hash_map h_map)
{
    
}

// Use this function for testing only...
int main()
{ 
    return 0;
}
