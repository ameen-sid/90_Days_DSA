#include<iostream>
using namespace std;

// Time Complexity : O(N)
int findSum(int arr[], int n) {

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];

	return sum;
}

int main() {
	int arr[100];
	int size;

	cout << "Enter the no of elements in the array: ";
	cin >> size;

	cout << "Enter the elements of the array:\n";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	cout << "The Sum of the array is: " << findSum(arr, size);

	return 0;
}