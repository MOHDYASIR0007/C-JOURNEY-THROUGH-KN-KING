CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = flight_tracker
SRC = flight_tracker.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: run clean