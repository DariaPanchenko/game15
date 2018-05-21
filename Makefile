CC = gcc
CFLAGS  = -Wall -Werror -std=c99

.PHONY: clean open

bin/game: build/menu.o build/printmass.o build/zap.o bin
		$(CC) $(CFLAGS) build/menu.o build/printmass.o build/zap.o -o bin/game -lm

build/menu.o: src/menu.c build
		$(CC) $(CFLAGS) -c src/menu.c -o build/menu.o -lm

build/printmass.o: src/printmass.c build
		$(CC) $(CFLAGS) -c src/printmass.c -o build/printmass.o -lm

build/zap.o: src/zap.c build
		$(CC) $(CFLAGS) -c src/zap.c -o build/zap.o -lm

build:
	mkdir build

bin:
	mkdir bin

clean:
	rm -rf build bin

open:
	./bin/game
