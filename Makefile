CC = gcc
CFLAGS = -g -Wall -Wextra

all: main

main: main.o functions.o
	$(CC) $(CFLAGS) -o main main.o functions.o

main.o: main.c functions.h 
	$(CC) $(CFLAGS) -c main.c

functions.o: functions.c functions.h 
	$(CC) $(CFLAGS) -c functions.c

clean:
	rm -f main *.o



# CC = gcc
# CFLAGS = -Wall -Wextra
# all: main

# main: main.c functions.h
# 	$(CC) $(CFLAGS) -o main main.c
# clean:
# 	rm -f main



# CC = gcc
# CFLAGS = -Wall -Wextra -Wconversion -Wsign-conversion -Wshadow -Wpedantic -std=c99
# EXECUTABLE = factorial
# all: $(EXECUTABLE)
# $(EXECUTABLE): factorial.c
# 	$(CC) $(CFLAGS) -o $(EXECUTABLE) factorial.c
# clean:
# 	rm -f $(EXECUTABLE)
