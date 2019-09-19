struct _list {
    void ** list;
    int size; 
} typedef array_list;

array_list *init();
void *del(int);
void *resize(array_list*);
void *get(int, array_list*);
void insert_at(int, array_list*);
void insert(void*, array_list*);
void dealloc_alist(array_list*);
