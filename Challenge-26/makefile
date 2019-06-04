flags= -Wall -Wextra -Werror -pedantic

challenge-26: challenge-26.o BSTNode.o BSTree.o
	g++ $(flags) challenge-26.o BSTNode.o BSTree.o -o ../executables/challenge-26

BSTNode.o: BSTNode.cpp BSTNode.h
	g++ $(flags) -c BSTNode.cpp -o BSTNode.o
	
BSTree.o: BSTree.cpp BSTree.h
	g++ $(flags) -c BSTree.cpp -o BSTree.o