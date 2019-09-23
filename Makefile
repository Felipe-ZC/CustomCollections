CC=gcc # Compiler to use...
CFLAGS=-I-c # gcc compile args...

all:
	($(MAKE) clean -C hash_map) || echo "no object files"
	$(MAKE) -C hash_map  
	($(MAKE) clean -C array_list) || echo "no object files"
	$(MAKE) -C array_list 

array_list:
	($(MAKE) clean -C array_list) || echo "no object files"
	$(MAKE) -C array_list

hash_map:
	($(MAKE) clean -C hash_map) || echo "no object files"
	$(MAKE) -C hash_map

lib: all
	$(MAKE) all 
	ar rcs ./lib/cc_lib.a array_list/array_list.o hash_map/hash_map.o 
