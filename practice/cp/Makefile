PROGRAM = cp
LIB = error
LIBH = $(LIB).h
LIBC = $(LIB).c

SOURCES =$(PROGRAM).c
CC = gcc
CFLAGS =  -Wall -ansi -pedantic -o 

$(PROGRAM):  $(SOURCES) $(LIBH) $(LIBC)
	$(CC) $(CFLAGS) $@ $^


.PHONY: clean

clean: 
	-rm $(PROGRAM) *.gch
