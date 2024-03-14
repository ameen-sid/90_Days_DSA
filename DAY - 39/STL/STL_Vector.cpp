#include<iostream>
// STL library of vector or dynamic array
#include<vector>
using namespace std;

int main() {
	// vector declaration
	vector<int> v;

	// vector declaration and initialization with size 5 and all values of array are 1
	vector<int> a(5, 1);
	// print the elements of 'a' vector
	cout << "Print vector a: ";
	for (int i : a)
		cout << i << " ";
	cout << endl;

	// vector declaration and initialization with values of another vector
	vector<int> last(a);
	// print the elements of 'last' vector
	cout << "Print vector a: ";
	for (int i : a)
		cout << i << " ";
	cout << endl;

	// capacity function of vector to check the capacity of empty vector
	cout << "Capacity of empty vector: " << v.capacity() << endl;

	// insert 1 in the vector
	v.push_back(1);
	// check the capacity
	cout << "Capacity: " << v.capacity() << endl;

	// insert 2 and 3 in the vector 
	v.push_back(2);
	v.push_back(3);
	// check the capacity and size of vector
	cout << "Capacity: " << v.capacity() << endl;
	cout << "Size: " << v.size() << endl;

	// at function to access the value at any index or position
	cout << "Element at 2nd index: " << v.at(2) << endl;

	// front function to access the first element of the vector
	cout << "First Element: " << v.front() << endl;
	// back function to access the last element of the vector
	cout << "Last Element: " << v.back() << endl;


	cout << "Print vector before pop:\n";
	for (int i : v)
		cout << i << " ";
	cout << endl;

	// delete last element from the vector
	v.pop_back();

	cout << "Print vector after pop:\n";
	for (int i : v)
		cout << i << " ";
	cout << endl;

	// size function to get the size of vector
	cout << "Size before clear: " << v.size() << endl;
	// clear function to clear the element of the vector
	v.clear();
	cout << "Size after clear: " << v.size() << endl;

	return 0;
}