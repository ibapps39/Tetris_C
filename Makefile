CC = gcc
CFLAGS = -Wall -Wextra -std=c17
LDFLAGS = -lm -lpthread
INCLUDE_PATHS = -I./include
SOURCES = tetris.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = tetris_C
all: $(EXECUTABLE)
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(INCLUDE_PATHS) $(OBJECTS) -o $(EXECUTABLE)
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE_PATHS) -c $< -o $@
clean:
	rm -f $(EXECUTABLE) $(OBJECTS)
run: $(EXECUTABLE)
	./$(EXECUTABLE)
