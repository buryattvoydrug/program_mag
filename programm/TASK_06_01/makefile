args.x: args.c
	gcc args.o -o args.x
args.o: args.c
	gcc -c args.c -o args.o
clean:
	rm -rf *.o args.x
all: clean args.o args.x
