# -*- Makefile -*-

all: mains

mains: main.o libmyBank.a
	gcc -Wall -o mains main.o libmyBank.a
	
libmyBank.a: myBank.o
	ar -rcs libmyBank.a myBank.o

main.o: main.c myBank.h
	gcc -Wall -c main.c

myBank.o: myBank.c myBank.h
	gcc -Wall -fPIC -c myBank.c

.PHONY: all clean

clean:
	rm -f *.o *.a mains
