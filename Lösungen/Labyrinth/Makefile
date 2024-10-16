all: labyrinth

labyrinth: main.o labyrinth.o move.o openingscreen.o
	gcc -o labyrinth main.o labyrinth.o move.o openingscreen.o

main.o: main.c labyrinth.h move.h openingscreen.h
	gcc -c main.c

labyrinth.o: labyrinth.c labyrinth.h
	gcc -c labyrinth.c

move.o: move.c move.h labyrinth.h
	gcc -c move.c

openingscreen.o: openingscreen.c openingscreen.h
	gcc -c openingscreen.c

clean:
	rm -f *.o labyrinth
