#include<iostream>
using namespace std;

// Two Pointer Approach (Optimized Solution)
// Time Complexity : O(N)
void sort0and1(int arr[], int n) {

	int start = 0;
	int end = n - 1;
	while (start <= end) {

		if (arr[start] == 0 && arr[end] == 1) {
			start++;
			end--;
		}

		if (arr[start] == 1 && arr[end] == 0) {
			swap(arr[start], arr[end]);
			start++;
			end--;
		}

		if (arr[start] == 0 && arr[end] == 0)
			start++;

		if (arr[start] == 1 && arr[end] == 1)
			end--;
	}
}

// Counting Approach (Brute Force Solution)
// Time Complexity : O(N)
void sort0and1B(int arr[], int n) {

	int countZero = 0;
	for (int i = 0; i < n; i++) {

		if (arr[i] == 0)
			countZero++;
	}

	for (int i = 0; i < countZero; i++)
		arr[i] = 0;

	for (int i = countZero; i < n; i++)
		arr[i] = 1;
}

// Time Complexity : O(N)
void printArray(int arr[], int n) {

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	int arr[10] = { 1, 0, 0, 0, 1, 1, 1, 0, 0, 0 };

	cout << "Print array before sorting:\n";
	printArray(arr, 10);

	sort0and1(arr, 10);

	cout << "Print array after sorting:\n";
	printArray(arr, 10);

	return 0;
}