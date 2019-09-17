struct _list {
    void ** list;
    int length; 
} typedef array_list;

array_list *init(int);
void *remove(int);
void *resize(array_list);
void *get(int);
void insert_at(int);
void insert(void*);
void dealloc_arr_list(array_list);
