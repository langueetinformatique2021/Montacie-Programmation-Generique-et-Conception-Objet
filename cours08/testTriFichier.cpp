#include <iostream>
#include <fstream>
#include <list>
#include <iterator>

#include "../cours04/Date.h"

using namespace std;
int main() {
	list <Date> ld;
	// lecture des dates
	ifstream fEntree("cours04/Date.txt");
	istream_iterator<Date> in_it(fEntree);
	copy(in_it, istream_iterator<Date>(), back_inserter(ld));
	fEntree.close();
	
	ld.sort();	// tri
	
	for (list<Date>::iterator it = ld.begin(); it != ld.end();it++)
	 cout << *it;
}
