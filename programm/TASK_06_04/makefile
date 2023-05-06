main.x: main.c
	gcc main.o -o main.x
main.o: main.c
	gcc -c main.c -o main.o
hello.x: hello.c
	gcc hello.o -o hello.x
hello.o: hello.c
	gcc -c hello.c -o hello.o
clean:
	rm -rf *.o *.x
all: clean hello.o main.o hello.x main.x 
