CC = g++ -std=c++11
CFLAGS = -g

default: RobotTheFriendlyRobot

RobotTheFriendlyRobot: main.o Intro.o replace.o plot.o BagAdd.o BagExplain.o BagRemove.o
	$(CC) $(CFLAGS) -o RobotTheFriendlyRobot main.o replace.o Intro.cpp plot.o BagAdd.o BagExplain.o BagRemove.o

main.o: main.cpp header.h
	$(CC) $(CFLAGS) -c main.cpp -o $@

Intro.o: Intro.cpp header.h
	$(CC) $(CFLAGS) -c Intro.cpp -o $@

replace.o: replace.cpp header.h
	$(CC) $(CFLAGS) -c replace.cpp -o $@

plot.o: plot.cpp header.h
	$(CC) $(CFLAGS) -c plot.cpp -o $@

BagAdd.o: BagAdd.cpp header.h
	$(CC) $(CFLAGS) -c BagAdd.cpp -o $@

BagExplain.o: BagExplain.cpp header.h
	$(CC) $(CFLAGS) -c BagExplain.cpp -o $@

BagRemove.o: BagRemove.cpp header.h
	$(CC) $(CFLAGS) -c BagRemove.cpp -o $@

clean:
	$(RM) count *.o *~
