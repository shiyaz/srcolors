CC     = gcc
CFLAGS = -Wall -pedantic -ansi

all:

clean:
	rm *.o bin/*

test.o: srcolors.h test.c
	$(CC) $(CFLAGS) -c test.c

srcolors.o: srcolors.h srcolors.c
	$(CC) $(CFLAGS) -c srcolors.c

test: test.o srcolors.o
	$(CC) $(CFLAGS) -o bin/test test.o srcolors.o
