flags= -Wall -Wextra -Werror -pedantic

challenge-18: challenge-18.o SLNode.o SList.o
	g++ $(flags) challenge-18.o SLNode.o SList.o -o ../executables/pc18

challenge-18.o: challenge-18.cpp
	g++ $(flags) -c challenge-18.cpp -o challenge-18.o
	
SLNode.o: SLNode.cpp SLNode.h
	g++ $(flags) -c SLNode.cpp -o SLNode.o
	
SList.o: SList.cpp SList.h
	g++ $(flags) -c SList.cpp -o SList.o