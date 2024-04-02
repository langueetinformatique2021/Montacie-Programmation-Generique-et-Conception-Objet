all: test1Dame test2Dame

test1Dame: test1Dame.o Dame.o 
	gcc -g test1Dame.o Dame.o -lstdc++ -o test1Dame
	
test2Dame: test2Dame.o Dame.o 
	gcc -g test2Dame.o Dame.o -lstdc++ -o test2Dame
	
test1Dame.o: test1Dame.cpp Dame.h
	gcc -std=c++0x -g -c -w test1Dame.cpp
	
test2Dame.o: test2Dame.cpp Dame.h
	gcc -std=c++0x -g -c -w test2Dame.cpp
	
Dame.o: Dame.cpp Dame.h
	gcc -std=c++0x -g -c -w Dame.cpp
	
clean: 
	rm -f *.o test1Dame test2Dame 