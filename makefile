CC = g++ -std=c++11
CFLAGS = -g

default: TextAdventureGame 

TextAdventureGame: main.o replace.o plot.o
	$(CC) $(CFLAGS) -o TextAdventureGame main.o replace.o plot.o

main.o: main.cpp header.h 
	$(CC) $(CFLAGS) -c main.cpp

replace.o: replace.cpp header.h
	$(CC) $(CFLAGS) -c replace.cpp

plot.o: plot.cpp header.h
	$(CC) $(CFLAGS) -c plot.cpp

clean:
	$(RM) count *.o *~


