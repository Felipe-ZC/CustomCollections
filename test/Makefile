CC=gcc # Compiler to use...
CFLAGS=-I-c # gcc compile args...

array_list_test: array_list_test.c
	($(MAKE) clean -C ../array_list) || echo "no object files"
	$(MAKE) -C ../array_list
	gcc -o array_list_test ../array_list/array_list.o array_list_test.c	
