CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = Grader
SRC = Grader.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: run clean