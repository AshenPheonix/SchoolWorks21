flags= -Wall -Wextra -Werror -pedantic

challenge-17: challenge-17.o SLNode.o
	g++ $(flags) challenge-17.o SLNode.o -o ../executables/pc17

challenge-17.o: challenge-17.cpp
	g++ $(flags) -c challenge-17.cpp -o challenge-17.o
	
SLNode.o: SLNode.cpp SLNode.h
	g++ $(flags) -c SLNode.cpp -o SLNode.o