struct _list {
    void ** list;
    int size; // Number of elements in list
    int capacity; // Total number of elements that can be currently held in list
} typedef array_list;

array_list *init();
void *del(int, array_list*);
int resize(array_list*);
void *get(int, array_list*);
int insert_at(int, array_list*);
int insert(void*, array_list*);
void dealloc_alist(array_list*);
