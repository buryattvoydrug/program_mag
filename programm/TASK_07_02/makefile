msk.x: msk.c
	gcc msk.o -o msk.x
msk.o: msk.c
	gcc -c msk.c -o msk.o
clean:
	rm -rf *.o msk.x
all: clean msk.o msk.x
