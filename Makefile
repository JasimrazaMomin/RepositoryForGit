CC = gcc
CFLAGS = -Wall -Wextra -Wconversion -Wsign-conversion -Wshadow -Wpedantic -std=c99
EXECUTABLE = bankpartc
all: $(EXECUTABLE)
$(EXECUTABLE): ATM_Bank_c.c
	$(CC) $(CFLAGS) -o $(EXECUTABLE) ATM_Bank_c.c
clean:
	rm -f $(EXECUTABLE)
