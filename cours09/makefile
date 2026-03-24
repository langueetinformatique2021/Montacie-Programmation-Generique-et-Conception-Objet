all: testRule testEntity testSymbol testConst_Edge testNode

testNode: testNode.cpp
	g++ -w -g testNode.cpp -o testNode
		
testConst_Edge: testConst_Edge.cpp
	g++ -w -g testConst_Edge.cpp -o testConst_Edge
	
testSymbol: testSymbol.cpp
	g++ -w -g testSymbol.cpp -o testSymbol
	
testEntity: testEntity.cpp
	g++ -w -g testEntity.cpp -o testEntity
	
testRule: testRule.cpp
	g++ -w -g testRule.cpp  -o testRule

clean: 
	-rm -f *.o testRule testEntity testSymbol testConst_Edge testNode2 testNode	
