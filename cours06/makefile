all: testVector testDeque testList testStack testQueue testIterateur testArray
	
testVector: testVector.cpp
	g++ -std=c++0x -w -g testVector.cpp -o testVector
	
Date.o: Date.cpp
	g++ -std=c++0x -c -w -g Date.cpp 
	
testArray: testArray.o
	g++ -w -g testArray.o -o testArray
	
testArray.o: testArray.cpp
	g++ -std=c++0x -fpermissive -c -w -g testArray.cpp 
	
testDeque: testDeque.o Date.o
	g++ -w -g testDeque.o Date.o -o testDeque
	
testDeque.o: testDeque.cpp
	g++ -std=c++0x -fpermissive -c -w -g testDeque.cpp 
	
testList: testList.o 
	g++ -w -g testList.o ../cours04/Date.o -o testList
	
testList.o: testList.cpp
	g++ -std=c++0x -c -w -g testList.cpp 

testStack: testStack.o 
	g++ -w -g testStack.o ../cours03/Animal.o -o testStack
	
testStack.o: testStack.cpp
	g++ -std=c++0x -c -w -g testStack.cpp
	
testQueue: testQueue.cpp
	g++ -std=c++0x -w -g testQueue.cpp -o testQueue

testIterateur: testIterateur.o
	g++ -w -g testIterateur.o ../cours04/Date.o -o testIterateur

testIterateur.o: testIterateur.cpp
	g++ -std=c++0x -c -w -g testIterateur.cpp 
	
clean: 
	rm -f *.o testVector testDeque testList testStack testQueue testIterateur testArray
