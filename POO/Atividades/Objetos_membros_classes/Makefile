all: Relogio.o RelogioComAlarme.o
	g++ *.o main.cpp -o prog
imprimi.o: RelogioComAlarme.h Relogio.h
	g++ -c *.cpp
clear:
	rm -rf *.o prog	
a:
	./prog