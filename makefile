CC = g++ -std=c++11
CFLAGS = -g 

default: RobotTheFriendlyRobot 

RobotTheFriendlyRobot: main.o intro.o replace.o plot.o BagAdd.o BagExplain.o BagRemove.o
	$(CC) $(CFLAGS) -o RobotTheFriendlyRobot main.o replace.o intro.cpp plot.o BagAdd.o BagExplain.o BagRemove.o

main.o: main.cpp header.h 
	$(CC) $(CFLAGS) -c main.cpp

intro.o: intro.cpp header.h
	$(CC) $(CFLAGS) -c intro.cpp

replace.o: replace.cpp header.h
	$(CC) $(CFLAGS) -c replace.cpp

plot.o: plot.cpp header.h
	$(CC) $(CFLAGS) -c plot.cpp

BagAdd.o: BagAdd.cpp header.h
	$(CC) $(CFLAGS) -c BagAdd.cpp

BagExplain.o: BagExplain.cpp header.h
	$(CC) $(CFLAGS) -c BagExplain.cpp

BagRemove.o: BagRemove.cpp header.h
	$(CC) $(CFLAGS) -c BagRemove.cpp 

clean:
	$(RM) count *.o *~


