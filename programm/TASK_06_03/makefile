test.x: test.c
	gcc test.o -o test.x
test.o: test.c
	gcc -c test.c -o test.o
clean:
	rm -rf *.o test.x
all: clean test.o test.x