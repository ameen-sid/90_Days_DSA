#include<iostream>
using namespace std;

// Time Complexity : O(N)
bool searchElement(int arr[], int n, int key) {

	for (int i = 0; i < n; i++) {

		if (arr[i] == key)
			return true;
	}
	return false;
}

int main() {
	int arr[100] = { 0 };
	int size;

	cout << "Enter the no of elements in an array: ";
	cin >> size;

	cout << "Enter the elements of the array:\n";
	for (int i = 0; i < size; i++) {

		cin >> arr[i];
	}

	int key;

	cout << "Enter the element to search in the array: ";
	cin >> key;

	if (searchElement(arr, size, key))
		cout << "The " << key << " is present in the array";
	else
		cout << "The " << key << " isn't present in the array";

	return 0;
}