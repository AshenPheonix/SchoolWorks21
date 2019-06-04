flags= -Wall -Wextra -Werror -pedantic

project-3: pp3.o DLNode.o DList.o interpreter.o
	g++ $(flags) pp3.o DLNode.o DList.o interpreter.o -o project-3
	
pp3.o: pp3.cpp
	g++ $(flags) -c pp3.cpp -o pp3.o
	
DLNode.o: DLNode.cpp DLNode.h
	g++ $(flags) -c DLNode.cpp -o DLNode.o

DList.o: DList.cpp DList.h
	g++ $(flags) -c DList.cpp -o DList.o
	
interpreter.o: interpreter.h interpreter.cpp
	g++ $(flags) -c interpreter.cpp -o interpreter.o