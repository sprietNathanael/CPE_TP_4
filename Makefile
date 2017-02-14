CC=gcc
CFLAGS=-W -Wall -g -Wextra
EXEC=chainedList

all: $(EXEC)

chainedList: main.o int_list.o
	$(CC) -o chainedList main.o int_list.o

main.o: main.c int_list.h
	$(CC) -o main.o -c main.c $(CFLAGS)

int_list.o: int_list.c
	$(CC) -o int_list.o -c int_list.c $(CFLAGS)

clean:
	rm -rf *.o *.h.gch

mrproper: clean
	rm -rf $(EXEC)
