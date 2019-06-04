earth: earth.o cinreader.o activator.o
	g++ earth.o cinreader.o activator.o -o earth

mars: mars.o cinreader.o rocketship.o specialrocketship.o
	g++ cinreader.o mars.o rocketship.o specialrocketship.o -o mars

jupiter: jupiter.o cinreader.o rocketship.o
	g++ jupiter.o cinreader.o rocketship.o -o jupiter

saturn: saturn.o cinreader.o rocketship.o
	g++ saturn.o cinreader.o rocketship.o -o saturn

titan: titan.o cinreader.o
	g++ titan.o cinreader.o -o titan
	
cinreader.o: CinReader.h CinReader.cpp
	g++ -c CinReader.cpp -o cinreader.o
	
titan.o: titan.cpp
	g++ -c titan.cpp -o titan.o
	
saturn.o: saturn.cpp
	g++ -c saturn.cpp -o saturn.o
	
jupiter.o: jupiter.cpp
	g++ -c jupiter.cpp -o jupiter.o
	
mars.o: mars.cpp
	g++ -c mars.cpp -o mars.o

rocketship.o: rocketship.h rocketship.cpp
	g++ -c rocketship.cpp -o rocketship.o
	
specialrocketship.o: specialrocketship.h specialrocketship.cpp
	g++ -c specialrocketship.cpp -o specialrocketship.o
	
activator.o: activator.h activator.cpp
	g++ -c activator.cpp -o activator.o
	
clean:
	rm *.o
	