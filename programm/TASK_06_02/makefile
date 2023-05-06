ret.x: ret.c
	gcc ret.o -o ret.x
ret.o: ret.c
	gcc -c ret.c -o ret.o
exit.x: exit.c
	gcc exit.o -o exit.x
exit.o: exit.c
	gcc -c exit.c -o exit.o
clean:
	rm -rf *.o exit.x ret.x
all: clean ret.o ret.x exit.o exit.x
