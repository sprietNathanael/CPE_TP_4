CC=gcc
CFLAGS=-W -Wall -g
EXEC=chainedList

all: $(EXEC)

chainedList: main.o
	$(CC) -o chainedList main.o

main.o: main.c
	$(CC) -o main.o -c main.c $(CFLAGS)

clean:
	rm -rf *.o *.h.gch

mrproper: clean
	rm -rf $(EXEC)
