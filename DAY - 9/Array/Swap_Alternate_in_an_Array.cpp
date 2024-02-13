#include<iostream>
using namespace std;

// Time Complexity : O(N)
void swapAlternate(int arr[], int n) {

	for (int i = 0; i < n - 1; i += 2)
		swap(arr[i], arr[i + 1]);
}

// Time Complexity : O(N)
void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
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

	cout << "Printing array before swapping alternate elements:\n";
	printArray(arr, size);

	swapAlternate(arr, size);

	cout << "Printing array after swapping alternate elements:\n";
	printArray(arr, size);

	return 0;
}