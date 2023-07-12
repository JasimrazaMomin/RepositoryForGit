CC = gcc
CFLAGS = -Wall -Wextra -Wconversion -Wsign-conversion -Wshadow -Wpedantic -std=c99
EXECUTABLE = factorial
all: $(EXECUTABLE)
$(EXECUTABLE): factorial.c
	$(CC) $(CFLAGS) -o $(EXECUTABLE) factorial.c
clean:
	rm -f $(EXECUTABLE)
