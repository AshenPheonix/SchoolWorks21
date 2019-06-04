flags= -Wall -Wextra -Werror -pedantic

challenge-20: challenge-20.o SLNode.o SList.o
	g++ $(flags) challenge-20.o SLNode.o SList.o -o ../executables/pc20

challenge-18.o: challenge-20.cpp
	g++ $(flags) -c challenge-20.cpp -o challenge-20.o
	
SLNode.o: SLNode.cpp SLNode.h
	g++ $(flags) -c SLNode.cpp -o SLNode.o
	
SList.o: SList.cpp SList.h
	g++ $(flags) -c SList.cpp -o SList.o