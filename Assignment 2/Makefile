CC = gcc
CFLAGS = -g -Wall -Wextra 

all: main

main: main.o functions.o readFile_randWord.o 
	$(CC) $(CFLAGS) -o main main.o functions.o readFile_randWord.o

main.o: main.c functions.h constants.h readFile_randWord.h
	$(CC) $(CFLAGS) -c main.c

readFile_randWord.o: readFile_randWord.c readFile_randWord.h constants.h
	$(CC) $(CFLAGS) -c readFile_randWord.c

functions.o: functions.c functions.h constants.h
	$(CC) $(CFLAGS) -c functions.c

clean:
	rm -f main *.o
