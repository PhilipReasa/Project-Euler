CC=g++
CFLAGS=-c -std=c++11 -Wall -pedantic

all: shell

shell: problem67.o problem15-20.o problem14.o problem13.o problem12.o problem11.o problem10.o problem9.o problem8.o problem7.o problem6.o problem5.o problem4.o problem3.o problem2.o problem1.o shell.o
	$(CC) shell.o problem1.o problem2.o problem3.o problem4.o problem5.o problem6.o problem7.o problem8.o problem9.o problem10.o problem11.o problem12.o problem13.o problem14.o problem15-20.o problem67.o -o ProjectEulerShell

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

problem9.o: problem9.cpp
	$(CC) $(CFLAGS) problem9.cpp

problem10.o: problem10.cpp
	$(CC) $(CFLAGS) problem10.cpp

problem11.o: problem11.cpp
	$(CC) $(CFLAGS) problem11.cpp

problem12.o: problem12.cpp
	$(CC) $(CFLAGS) problem12.cpp

problem13.o: problem13.cpp
	$(CC) $(CFLAGS) problem13.cpp

problem14.o: problem14.cpp
	$(CC) $(CFLAGS) problem14.cpp

problem15-20.o: problem15-20.cpp
	$(CC) $(CFLAGS) problem15-20.cpp

problem67.o: problem67.cpp
	$(CC) $(CFLAGS) problem67.cpp

clean:
	rm *o *out ProjectEulerShell

