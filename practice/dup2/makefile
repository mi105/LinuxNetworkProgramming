PROGRAM = dup2
ERROR = error

CC = gcc
FLAGS = -Wall -pedantic -ansi -o

$(PROGRAM): $(PROGRAM).c  $(ERROR).h  $(ERROR).c
	$(CC) $(FLAGS) $@ $^

	
	

.PHONY : clean

clean:
	rm -f *.gch katedump $(PROGRAM) output.txt




