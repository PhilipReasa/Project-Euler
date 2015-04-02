CC=g++
CFLAGS=-c -Wall

all: shell

shell: problem1.o shell.o
	$(CC) shell.o problem1.o -o ProjectEulerShell

shell.o: shell.cpp
	$(CC) $(CFLAGS) shell.cpp

problem1.o: problem1.cpp
	$(CC) $(CFLAGS) problem1.cpp

clean:
	rm *o *out ProjectEulerShell

