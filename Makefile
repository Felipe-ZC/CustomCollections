CC=gcc # Compiler to use...
CFLAGS=-I-c # gcc compile args...

all:
	($(MAKE) clean -C hash_map) || echo "no object files"
	$(MAKE) -C hash_map  

