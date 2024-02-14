#include<iostream>
using namespace std;

// Two Pointer Approach
// Time Complexity : O(N)
void extremePrint(int arr[], int n) {

	int start = 0;
	int end = n - 1;
	while (start <= end) {

		if (start == end) {
			cout << arr[start] << " ";
			break;
		}
		cout << arr[start++] << " ";
		cout << arr[end--] << " ";
	}
}

// Time Complexity : O(N)
void printArray(int arr[], int n) {

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "NORMAL Printing the array:\n";
	printArray(arr, 10);

	cout << "EXTREME Printing the array:\n";
	extremePrint(arr, 10);

	return 0;
}