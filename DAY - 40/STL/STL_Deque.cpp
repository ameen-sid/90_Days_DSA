#include<iostream>
// STL library of deque
#include<deque>
using namespace std;

int main() {
	// deque declaration
	deque<int> d;

	// insert 1 in the deque at back
	d.push_back(1);
	// insert 2 in the deque at front
	d.push_front(2);

	// print the elements of deque
	for (int i : d)
		cout << i << " ";
	cout << endl;

	// remove element from back 
	d.pop_back();
	// remove element from front
	/* d.pop_front(); */

	// print elements after remove
	for (int i : d)
		cout << i << " ";
	cout << endl;

	// insert 1 at back
	d.push_back(1);
	// print the elements of deque
	for (int i : d)
		cout << i << " ";
	cout << endl;

	// at function to access the any index or position of deque
	cout << "Element at first index: " << d.at(1) << endl;

	// front function to access the first element of deque
	cout << "First Element: " << d.front() << endl;
	// back function to access the last element of deque
	cout << "Last Element: " << d.back() << endl;

	// empty function to check deque is empty or not
	cout << "Deque is empty or not: " << d.empty() << endl;

	// size function to get the size of deque
	cout << "Deque size before erase: " << d.size() << endl;
	// erase function to erase the elements of deque of specific range
	d.erase(d.begin(), d.begin() + 1);
	cout << "Deque size after erase: " << d.size() << endl;

	// print the elements of deque
	for (int i : d)
		cout << i << " ";
	cout << endl;

	return 0;
}