scnf.x: scnf.c
	gcc scnf.o -o scnf.x
scnf.o: scnf.c
	gcc -c scnf.c -o scnf.o
clean:
	rm -rf *.o scnf.x
all: clean scnf.o scnf.x
