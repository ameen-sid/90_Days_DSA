#include<iostream>
using namespace std;

// Optimize Solution (Dutch Flag Algorithm)
// Time Complexity : O(N)
void sort012(int arr[], int n) {

	int low = 0;
	int high = n - 1;
	int mid = 0;
	while (mid <= high) {

		if (arr[mid] == 0)
			swap(arr[low++], arr[mid++]);
		else if (arr[mid] == 1)
			mid++;
		else
			swap(arr[mid], arr[high--]);
	}
}

// Brute Force Solution
// Time Complexity : O(N)
void sort012B(int arr[], int n) {

	int countZero = 0;
	int countOne = 0;
	for (int i = 0; i < n; i++) {

		if (arr[i] == 0)
			countZero++;
		else if (arr[i] == 1)
			countOne++;
	}

	for (int i = 0; i < countZero; i++)
		arr[i] = 0;

	for (int i = countZero; i < (countZero + countOne); i++)
		arr[i] = 1;

	for (int i = (countZero + countOne); i < n; i++)
		arr[i] = 2;
}

// Time Complexity : O(N)
void printArray(int arr[], int n) {

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	int arr[10] = { 1, 0, 0, 2, 1, 2, 1, 2, 2, 0 };

	cout << "Print array before sorting:\n";
	printArray(arr, 10);

	sort012(arr, 10);

	cout << "Print array after sorting:\n";
	printArray(arr, 10);

	return 0;
}