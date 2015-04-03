CC=g++
CFLAGS=-c -Wall

all: shell

shell: problem2.o problem1.o shell.o
	$(CC) shell.o problem1.o problem2.o -o ProjectEulerShell

shell.o: shell.cpp
	$(CC) $(CFLAGS) shell.cpp

problem1.o: problem1.cpp
	$(CC) $(CFLAGS) problem1.cpp

problem2.o: problem2.cpp
	$(CC) $(CFLAGS) problem2.cpp

clean:
	rm *o *out ProjectEulerShell

