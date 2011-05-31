prog: prog.o module.o
	gcc prog.o module.o -o prog

module.o: module.c module.h
	gcc -c module.c -o module.o

prog.o: prog.c
	gcc -c prog.c -o prog.o

clean:
	rm -f prog.o module.o prog
