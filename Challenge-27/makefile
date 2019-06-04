flags= -Wall -Wextra -Werror -pedantic

challenge-27: challenge-27.o BSTNode.o BSTree.o
	g++ $(flags) challenge-27.o BSTNode.o BSTree.o -o ../executables/challenge-27

BSTNode.o: BSTNode.cpp BSTNode.h
	g++ $(flags) -c BSTNode.cpp -o BSTNode.o
	
BSTree.o: BSTree.cpp BSTree.h
	g++ $(flags) -c BSTree.cpp -o BSTree.o