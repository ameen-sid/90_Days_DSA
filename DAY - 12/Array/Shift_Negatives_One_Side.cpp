#include<iostream>
using namespace std;

// Time Complexity : O(N)
void shiftNegativesOneSide(int arr[], int n) {

	int start = 0;
	int end = n - 1;
	while (start < end) {

		if (arr[start] >= 0 && arr[end] <= 0)
			swap(arr[start], arr[end]);

		if (arr[start] < 0 && arr[end] > 0) {
			start++;
			end--;
		}

		if (arr[start] < 0)
			start++;

		if (arr[end] > 0)
			end--;
	}
}

// Time Complexity : O(N)
void printArray(int arr[], int n) {

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	int arr[] = { 23, -7, 12, -10, 11, 40, 0, -1 };

	cout << "Printing array before shift negatives one side:\n";
	printArray(arr, 8);

	shiftNegativesOneSide(arr, 8);

	cout << "Printing array after shift negatives one side:\n";
	printArray(arr, 8);

	return 0;
}