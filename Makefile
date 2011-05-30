prog: prog.c module.o module.h
	gcc prog.c module.o -o prog

module.o: module.c module.h
	gcc -c module.c -o module.o
