CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = broker_revisit
SRC = Broker_revisit.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

.PHONY: all clean