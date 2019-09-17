struct _list {
    void ** list;
    int length; 
} typedef array_list;

array_list *init(int);
void *del(int);
void *resize(array_list*);
void *get(int);
void insert_at(int, array_list*);
void insert(void*);
void dealloc_alist(array_list*);
