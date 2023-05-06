main.x: main.c
	gcc main.o -o main.x
main.o: main.c
	gcc -c main.c -o main.o
clean:
	rm -rf *.o main.x
all: clean main.o main.x
