#include<iostream>
// STL library of list
#include<list>
using namespace std;

int main() {
	// list declaration
	list<int> l;

	// list declaration and initialization with values
	list<int> r(5, 100);
	// print the elements of list
	for (int i : r)
		cout << i << " ";
	cout << endl;

	// list declaration and initialization with copy of another list 
	list<int> n(l);

	// insert 1 at back of list 'l'
	l.push_back(1);
	// insert 2 at front of list 'l'
	l.push_front(2);

	// print the elements of list 'l'
	for (int i : l)
		cout << i << " ";
	cout << endl;

	// erase function to erase the elements of list of specific range
	l.erase(l.begin());
	cout << "after erase: ";
	for (int i : l)
		cout << i << " ";
	cout << endl;

	// size function to get the size of list
	cout << "Size: " << l.size() << endl;

	return 0;
}