CC=gcc
CFLAGS=-W -Wall -g
EXEC=chainedList

all: $(EXEC)

chainedList: main.o list.o
	$(CC) -o chainedList main.o list.o

main.o: main.c list.h
	$(CC) -o main.o -c main.c $(CFLAGS)

list.o: list.c
	$(CC) -o list.o -c list.c $(CFLAGS)

clean:
	rm -rf *.o *.h.gch

mrproper: clean
	rm -rf $(EXEC)
