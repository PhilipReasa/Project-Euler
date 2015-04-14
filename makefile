CC=g++
CFLAGS=-c -Wall -pedantic

all: shell

shell: problem8.o problem7.o problem6.o problem5.o problem4.o problem3.o problem2.o problem1.o shell.o
	$(CC) shell.o problem1.o problem2.o problem3.o problem4.o problem5.o problem6.o problem7.o problem8.o -o ProjectEulerShell

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

problem6.o: problem6.cpp
	$(CC) $(CFLAGS) problem6.cpp

problem7.o: problem7.cpp
	$(CC) $(CFLAGS) problem7.cpp

problem8.o: problem8.cpp
	$(CC) $(CFLAGS) problem8.cpp


clean:
	rm *o *out ProjectEulerShell

