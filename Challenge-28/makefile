flags= -Wall -Wextra -Werror -pedantic

challenge-28: challenge-28.o fooditem.o item.o magicitem.o
	g++ $(flags) challenge-28.o fooditem.o item.o magicitem.o -o ../executables/challenge-28
	
challenge-28.0: challenge-28.cpp
	g++ $(flags) -c challenge-28.cpp -o challenge-28.o

fooditem.o: fooditem.h fooditem.cpp
	g++ $(flags) -c fooditem.cpp -o fooditem.o
	
item.o: item.h item.cpp
	g++ $(flags) -c item.cpp -o item.o

magicitem.o: magicitem.h magicitem.cpp
	g++ $(flags) -c magicitem.cpp -o magicitem.o
	
clean:
	rm *.o