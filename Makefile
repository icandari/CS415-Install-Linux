animal: main.o animal.o
	g++ main.o animal.o -o animal 

main.o: main.cpp animal.h
	g++ -c main.cpp

animal.o: animal.cpp animal.h
	g++ -c animal.cpp