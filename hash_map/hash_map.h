struct _map {
    void **map; 
	int length;
    int (*hash)(char*);
} typedef hash_map;

hash_map *init(int(*hashFunc)(char*));
int default_hash(char*);  
void insert(char*, void*, hash_map*);
void *get(char*, hash_map*);
void dealloc_map(hash_map*);
