#include<iostream>
// STL library of map
#include<map>
using namespace std;

int main() {
	// map declaration
	map<int, string> m;

	// insert the elements in the map
	m[1] = "sid";
	m[2] = "ameen";
	m[13] = "bro";

	// another appraoch to insert the element in the map
	m.insert({ 5, "john" });

	// print the elements of map
	for (auto i : m)
		cout << i.first << " " << i.second << endl;

	// count function returns that elements is present or not
	cout << "Finding 13: " << m.count(13) << endl;

	// erase that elements from the map
	m.erase(13);
	for (auto i : m)
		cout << i.first << " " << i.second << endl;

	// find function returns the iterator of that elements
	auto it = m.find(5);
	for (auto i = it; i != m.end(); i++)
		cout << (*i).first << endl;

	return 0;
}