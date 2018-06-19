CC = gcc
CFLAGS  = -Wall -Werror -std=c99
OBJ = build/menu.o build/printmass.o build/zap.o build/generater.o build/move.o build/umove.o build/victory.o
OB = build/main_test.o build/printmass.o build/zap.o build/generater.o build/move.o build/umove.o build/victory.o


.PHONY: clean open test

default: build bin bin/game bin/game-test test

test: bin/game-test
	 bin/game-test

bin/game: $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o bin/game -lm

build/menu.o: src/menu.c 
		$(CC) $(CFLAGS) -c src/menu.c -o build/menu.o -lm

build/printmass.o: src/printmass.c
		$(CC) $(CFLAGS) -c src/printmass.c -o build/printmass.o -lm

build/zap.o: src/zap.c
		$(CC) $(CFLAGS) -c src/zap.c -o build/zap.o -lm

build/generater.o: src/generater.c
		$(CC) $(CFLAGS) -c src/generater.c -o build/generater.o -lm

build/move.o: src/move.c
		$(CC) $(CFLAGS) -c src/move.c -o build/move.o -lm

build/victory.o: src/victory.c
		$(CC) $(CFLAGS) -c src/victory.c -o build/victory.o -lm

build/umove.o: src/umove.c
		$(CC) $(CFLAGS) -c src/umove.c -o build/umove.o -lm

bin/game-test: $(OB)
	$(CC) $(CFLAGS) $(OB) -o bin/game-test -lm

build/main_test.o: test/main.c thirdparty/ctest.h src/func.h 
	$(CC) $(CFLAGS) -I thirdparty -I src -c ./test/main.c -o ./build/main_test.o -lm

build:
	mkdir build

bin:
	mkdir bin

clean:
	rm -rf build bin

open:
	./bin/game
