#include<iostream>
// STL library for algorithms
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	vector<int> v;

	v.push_back(1);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);

	// binary search algorithm
	cout << "Finding 6: " << binary_search(v.begin(), v.end(), 6) << endl;

	// find lower bound	
	cout << "Lower Bound 6: " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

	// find upper bound
	cout << "Upper Bound 6: " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

	int a = 3;
	int b = 5;

	// find max
	cout << "Max: " << max(a, b) << endl;
	// find min
	cout << "Min: " << min(a, b) << endl;

	cout << "Before swap:\n";
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	// swap values
	swap(a, b);

	cout << "After swap:\n";
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	string abc = "abcd";
	// reverse string or array
	reverse(abc.begin(), abc.end());
	cout << "String: " << abc << endl;

	// rotate array or string
	rotate(v.begin(), v.begin() + 1, v.end());
	cout << "After Rotate:\n";
	for (int i : v)
		cout << i << " ";
	cout << endl;

	// sort array or string
	sort(v.begin(), v.end());
	cout << "After Sort:\n";
	for (int i : v)
		cout << i << " ";
	cout << endl;

	return 0;
}