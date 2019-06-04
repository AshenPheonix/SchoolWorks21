flags= -Wall -Wextra -Werror -pedantic

challenge-25: challenge-25.o BSTNode.o
	g++ $(flags) challenge-25.o BSTNode.o -o ../executables/pc25

challenge-25.o: challenge-25.cpp
	g++ $(flags) -c challenge-25.cpp -o challenge-25.o
	
BSTNode.o: BSTNode.cpp BSTNode.h
	g++ $(flags) -c BSTNode.cpp -o BSTNode.o