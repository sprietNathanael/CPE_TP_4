CC=gcc
CFLAGS=-W -Wall -g -Wextra
EXEC=chainedList_int chainedList_char

all: $(EXEC)

chainedList_int: main_int.o int_list.o
	$(CC) -o chainedList_int main_int.o int_list.o

main_int.o: main_int.c int_list.h
	$(CC) -o main_int.o -c main_int.c $(CFLAGS)

int_list.o: int_list.c
	$(CC) -o int_list.o -c int_list.c $(CFLAGS)

chainedList_char: main_char.o char_list.o
	$(CC) -o chainedList_char main_char.o char_list.o

main_char.o: main_char.c char_list.h
	$(CC) -o main_char.o -c main_char.c $(CFLAGS)

char_list.o: char_list.c
	$(CC) -o char_list.o -c char_list.c $(CFLAGS)

clean:
	rm -rf *.o *.h.gch

mrproper: clean
	rm -rf $(EXEC)
