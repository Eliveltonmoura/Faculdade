all : Midia.o Cd.o Dvd.o drive.o #clama as classes 
	g++ *.o main.cpp -o prog
main.o : Midia.h # criar os .o 
	g++ -c *.cpp
c :
	rm -rf *.o prog	
a : # execução do programa
	./prog	