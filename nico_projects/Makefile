CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDFLAGS=
EXEC=programme1
BIN=main.o
SRC=main.c
HEAD=
 
all: $(EXEC)
 
programme1: $(BIN)
	$(CC) -o $(EXEC) $(BIN) $(LDFLAGS)
 
%.o: %.c $(HEAD)
	$(CC) -c $< $(CFLAGS)
 
clean:
	rm -f *.o *~ 2> /dev/null
 
clear: clean
	rm -f $(EXEC) $(USER)_speed.tgz 2> /dev/null
 
zip: clear
	mkdir -p $(USER)_speed
	cp Makefile *.c *.h *.sok $(USER)_speed
	tar czf $(USER)_sokoban.tgz $(USER)_speed
	rm -rf $(USER)_speed