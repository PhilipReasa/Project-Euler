CC=g++
CFLAGS=-c -Wall -pedantic

all: shell

shell: problem5.o problem4.o problem3.o problem2.o problem1.o shell.o
	$(CC) shell.o problem1.o problem2.o problem3.o problem4.o problem5.o -o ProjectEulerShell

shell.o: shell.cpp
	$(CC) $(CFLAGS) shell.cpp

problem1.o: problem1.cpp
	$(CC) $(CFLAGS) problem1.cpp

problem2.o: problem2.cpp
	$(CC) $(CFLAGS) problem2.cpp

problem3.o: problem3.cpp
	$(CC) $(CFLAGS) problem3.cpp

problem4.o: problem4.cpp
	$(CC) $(CFLAGS) problem4.cpp

problem5.o: problem5.cpp
	$(CC) $(CFLAGS) problem5.cpp

clean:
	rm *o *out ProjectEulerShell

