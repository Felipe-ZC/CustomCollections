#define BUFF 512

struct _map {
    void *map[BUFF];
    int length = BUFF;
    void (*hash)(int len);
} typedef hash_map;

int default_hash(int len); // Default hash function 
int insert(void *value, hash_map h_map);
void *get(void *key);
int dealloc_map(hash_map h_map);
