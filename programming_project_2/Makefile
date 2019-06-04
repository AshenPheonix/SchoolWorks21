flags= -Wall -Wextra -Werror -pedantic

project-2: pp2.o BStdLib.o box.o prizes.o
	g++ $(flags)  pp2.o BStdLib.o box.o prizes.o -o project-2

BStdLib.o: bstdlib.cpp bstdlib.h
	g++ $(flags) -c bstdlib.cpp -o BStdLib.o
	
box.o: box.cpp box.h
	g++ $(flags) -c box.cpp -o box.o
	
prizes.o: prizes.cpp prizes.h
	g++ $(flags) -c prizes.cpp -o prizes.o
	
pp2.o: pp2.cpp
	g++ $(flags) -c pp2.cpp -o pp2.o
	
clean:
	rm -f *.o

cleanall: clean
	rm -f project-2