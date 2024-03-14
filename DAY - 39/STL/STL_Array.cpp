#include<iostream>
// STL library of array
#include<array>
using namespace std;

int main() {
	// basic array declaration and initialization
	int basic[3] = { 1, 2, 3 };

	// STL array declaration and initialization
	array<int, 4> a = { 1, 2, 3, 4 };

	// size function of STL array
	int size = a.size();

	// print the elements of array
	for (int i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << endl;

	// at function of STL array to access value at any index
	cout << "Element at 2nd index: " << a.at(2) << endl;

	// empty function of STL array for check array is empty or not
	cout << "Empty or not: " << a.empty() << endl;

	// front function of STL array to find first element of the array
	cout << "First Element: " << a.front() << endl;
	// back function to STL array to find last element of the array
	cout << "Last Element: " << a.back() << endl;

	return 0;
}