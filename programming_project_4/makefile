flags= -Wall -Wextra -Werror -pedantic

project-4: interpreter.o project-4.o word.o
	g++ $(flags) project-4.o interpreter.o word.o -o project-4
	
interpreter.o: interpreter.h interpreter.cpp
	g++ $(flags) -c interpreter.cpp -o interpreter.o
	
project-4.o: project-4.cpp
	g++ $(flags) -c project-4.cpp -o project-4.o
	
word.o: word.h word.cpp
	g++ $(flags) -c word.cpp -o word.o