
struct _map {
    void **map; 
	int length;
    int (*hash)(char*);
} typedef hash_map;

//hash_map *init(int(*hashFunc)(char*));
hash_map *init();
int default_hash(char*);  
void insert(char*, void*, hash_map*);
void *get(char*, hash_map*);
void dealloc_map(hash_map*);
