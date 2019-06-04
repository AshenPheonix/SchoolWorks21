flags= -Wall -Wextra -Werror -pedantic

extra: genetics.o pop.o extra.o bstdlib.o
	g++ $(flags) genetics.o pop.o extra.o bstdlib.o -o extra

genetics.o: genetics.cpp genetics.h
	g++ $(flags) -c genetics.cpp -o genetics.o

pop.o: pop.cpp pop.h
	g++ $(flags) -c pop.cpp -o pop.o

extra.o: extra.cpp
	g++ $(flags) -c extra.cpp -o extra.o

bstdlib.o: bstdlib.cpp bstdlib.h
	g++ $(flags) -c bstdlib.cpp -o bstdlib.o