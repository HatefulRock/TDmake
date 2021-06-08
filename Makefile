all:main

ex1.o:ex1.c ex1.h
	gcc -c ex1.c

main: ex1.o
	gcc -o main ex1.o