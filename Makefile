all: pc1 pc2 pc3 pc4 pc5 pc6 pc7 pc8 pc9 pc10 pc11 pc12 pc13 pc14 pc15 pc16 pc21 pc22 pc23 pp1
allHard: pc6Hard pc7Hard pc8Hard pc9Hard pc10Hard pc11Hard pc12Hard pc13Hard pc14Hard pc15Hard pc16Hard pc21Hard pc22Hard pc23Hard pc25Hard pp1Hard

flags= -Wall -Wextra -Werror -pedantic

pc1: Challenge-1/pc1

pc2: Challenge-2/pc2

pc3: Challenge-3/pc3

pc4: Challenge-4/pc4

pc5: Challenge-5/pc5

pc6: Challenge-6/pc6

pc7: Challenge-7/pc7

pc8: Challenge-8/pc8

pc9: Challenge-9/pc9

pc10: Challenge-10/pc10

pc11: Challenge-11/pc11

pc12: Challenge-12/pc12

pc13: Challenge-13/pc13

pc14: Challenge-14/pc14

pc15: Challenge-15/pc15

pc16: Challenge-16/pc16

pc21: Challenge-21/pc21

pc22: Challenge-22/pc22

pc23: Challenge-23/pc23

pp1: programming_project_1/pp1

pc6Hard: Challenge-6/pc6Hard

pc7Hard: Challenge-7/pc7Hard

pc8Hard: Challenge-8/pc8Hard

pc9Hard: Challenge-9/pc9Hard

pc10Hard: Challenge-10/pc10Hard

pc11Hard: Challenge-11/pc11Hard

pc12Hard: Challenge-12/pc12Hard

pc13Hard: Challenge-13/pc13Hard

pc14Hard: Challenge-14/pc14Hard

pc15Hard: Challenge-15/pc15Hard

pc16Hard: Challenge-16/pc16Hard

pc21Hard: Challenge-21/pc21Hard

pc22Hard: Challenge-22/pc22Hard

pc23Hard: Challenge-23/pc23Hard

pc25Hard: Challenge-25/pc25Hard

pp1Hard: programming_project_1/pp1Hard

Challenge-1/pc1: Challenge-1/challenge-1.cpp
	g++ -o executables/pc1 Challenge-1/challenge-1.cpp
	
Challenge-2/pc2: Challenge-2/challenge-2.cpp
	g++ -o executables/pc2 Challenge-2/challenge-2.cpp
	
Challenge-3/pc3: Challenge-3/challenge-3.cpp
	g++ -o executables/pc3 Challenge-3/challenge-3.cpp
	
Challenge-4/pc4: Challenge-4/challenge-4.cpp
	g++ -o executables/pc4 Challenge-4/challenge-4.cpp

Challenge-5/pc5: Challenge-5/challenge-5.cpp
	g++ -o executables/pc5 Challenge-5/challenge-5.cpp

Challenge-6/pc6: Challenge-6/challenge-6.cpp
	g++ -o executables/pc6 Challenge-6/challenge-6.cpp
	
Challenge-7/pc7: Challenge-7/challenge-7.cpp
	g++ -o executables/pc7 Challenge-7/challenge-7.cpp

Challenge-8/pc8: Challenge-8/challenge-8.cpp
	g++ -o executables/pc8 Challenge-8/challenge-8.cpp

Challenge-9/pc9: Challenge-9/challenge-9.cpp
	g++ -o executables/pc9 Challenge-9/challenge-9.cpp
	
Challenge-10/pc10: Challenge-10/challenge-10.cpp
	g++ -o executables/pc10 Challenge-10/challenge-10.cpp

Challenge-11/pc11: Challenge-11/challenge-11.cpp
	g++ -o executables1/pc11 Challenge-11/challenge-11.cpp

Challenge-12/pc12: Challenge-12/challenge-12.cpp
	g++ -o executables/pc12 Challenge-12/challenge-12.cpp
	
Challenge-13/pc13: Challenge-13/challenge-13.cpp
	g++ -o executables/pc13 Challenge-13/challenge-13.cpp
	
Challenge-14/pc14: Challenge-14/challenge-14.cpp
	g++ -o executables/pc14 Challenge-14/challenge-14.cpp

Challenge-15/pc15: Challenge-15/challenge-15.cpp
	g++ -o executables/pc15 Challenge-15/challenge-15.cpp

Challenge-16/pc16: Challenge-16/challenge-16.cpp
	g++ -o executables/pc16 Challenge-16/challenge-16.cpp

Challenge-21/pc21: Challenge-21/challenge-21.cpp
	g++ -o executables/pc21 Challenge-21/challenge-21.cpp
	
Challenge-22/pc22: Challenge-22/challenge-22.cpp
	g++ -o executables/pc22 Challenge-22/challenge-22.cpp

Challenge-23/pc23: Challenge-23/challenge-23.cpp
	g++ -o executables/pc23 Challenge-23/challenge-23.cpp

programming_project_1/pp1: programming_project_1/stringTheory.cpp
	g++ -o programming_project_1/pp1 programming_project_1/stringTheory.cpp
	
Challenge-6/pc6Hard: Challenge-6/challenge-6.cpp
	g++ $(flags) -o executables/pc6 Challenge-6/challenge-6.cpp
	
Challenge-7/pc7Hard: Challenge-7/challenge-7.cpp
	g++ $(flags) -o executables/pc7 Challenge-7/challenge-7.cpp
	
Challenge-8/pc8Hard: Challenge-8/challenge-8.cpp
	g++ $(flags) -o executables/pc8 Challenge-8/challenge-8.cpp
	
Challenge-9/pc9Hard: Challenge-9/challenge-9.cpp
	g++ $(flags) -o executables/pc9 Challenge-9/challenge-9.cpp
	
Challenge-10/pc10Hard: Challenge-10/challenge-10.cpp
	g++ $(flags) -o executables/pc10 Challenge-10/challenge-10.cpp
	
Challenge-11/pc11Hard: Challenge-11/challenge-11.cpp
	g++ $(flags) -o executables/pc11 Challenge-11/challenge-11.cpp
	
Challenge-12/pc12Hard: Challenge-12/challenge-12.cpp
	g++ $(flags) -o executables/pc12 Challenge-12/challenge-12.cpp
	
Challenge-13/pc13Hard: Challenge-13/challenge-13.cpp
	g++ $(flags) -o executables/pc13 Challenge-13/challenge-13.cpp
	
Challenge-14/pc14Hard: Challenge-14/challenge-14.cpp
	g++ $(flags) -o executables/pc14 Challenge-14/challenge-14.cpp
	
Challenge-15/pc15Hard: Challenge-15/challenge-15.cpp
	g++ $(flags) -o executables/pc15 Challenge-15/challenge-15.cpp

Challenge-16/pc16Hard: Challenge-16/challenge-16.cpp
	g++ $(flags) -o executables/pc16 Challenge-16/challenge-16.cpp

Challenge-21/pc21Hard: Challenge-21/challenge-21.cpp
	g++ $(flags) -o executables/pc21 Challenge-21/challenge-21.cpp
	
Challenge-22/pc22Hard: Challenge-22/challenge-22.cpp
	g++ $(flags) -o executables/pc22 Challenge-22/challenge-22.cpp

Challenge-23/pc23Hard: Challenge-23/challenge-23.cpp
	g++ $(flags) -o executables/pc23 Challenge-23/challenge-23.cpp

Challenge-25/pc25Hard: Challenge-25/challenge-25.cpp
	g++ S(flags) -o executables/pc25 Challenge-25/challenge-25.cpp

programming_project_1/pp1Hard: programming_project_1/stringTheory.cpp
	g++ $(flags) -o executables/pp1 programming_project_1/stringTheory.cpp