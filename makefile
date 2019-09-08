all: llist clear

llist: main.o linkedList.o data.o
	gcc main.o linkedList.o data.o -o llist

main.o: main.c
	gcc -c main.c -o main.o

linkedList.o: LinkedList.c
	gcc -c LinkedList.c -o linkedList.o

data.o:
	gcc -c Data.c -o data.o

clear:
	del *.o