all: testTable

testTable: testTable.o cle.o valeur.o 
	gcc -g testTable.o cle.o valeur.o -lstdc++ -o testTable
	
testTable.o: testTable.cpp cle.h valeur.h
	gcc -std=c++0x -g -c -w testTable.cpp
	
cle.o: cle.cpp cle.h
	gcc -std=c++0x -g -c -w cle.cpp
	
valeur.o: valeur.cpp valeur.h
	gcc -std=c++0x -g -c -w valeur.cpp
	
clean: 
	rm -f *.o testTable 