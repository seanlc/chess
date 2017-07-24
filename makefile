CC= g++
CFLAGS= -std=c++11 -Wall -ggdb

main: main.cpp Board.h.gch
	$(CC) $(CFLAGS) -o main main.cpp
Board.h.gch: Board.h
	$(CC) $(CFLAGS) Board.h
clean:
	rm -f main Board.h.gch
