#include<iostream>
// STL library of set
#include<set>
using namespace std;

int main() {
	// set declaration
	set<int> s;

	// insert elements in set
	s.insert(5);
	s.insert(5);
	s.insert(5);
	s.insert(1);
	s.insert(6);
	s.insert(6);
	s.insert(0);
	s.insert(0);
	s.insert(0);

	// print the elements of set
	for (auto i : s)
		cout << i << " ";
	cout << endl;

	// initialize set iterator to point at beginning
	set<int>::iterator it = s.begin();
	it++;

	// erase the element of iterator points to
	s.erase(it);
	for (auto i : s)
		cout << i << " ";
	cout << endl;

	// count function returns that elements is present or not
	cout << "Count: " << s.count(5) << endl;

	// find function to return the iterator of that elements
	set<int>::iterator itr = s.find(5);
	for (auto it = itr; it != s.end(); it++)
		cout << *it << " ";
	cout << endl;

	return 0;
}