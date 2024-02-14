#include<iostream>
using namespace std;

// Time Complexity : O(N)
void shiftArray(int arr[], char direction, int n) {

	if (direction == 'L' || direction == 'l') {

		// Shift array to left
		int temp = arr[0];
		for (int i = 0; i < n - 1; i++) {

			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}
	else {

		// Shift array to right
		int temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--) {

			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
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

	cout << "Print array before shifting any direction:\n";
	printArray(arr, 10);

	shiftArray(arr, 'L', 10);

	cout << "Print array after shifting left by one:\n";
	printArray(arr, 10);

	shiftArray(arr, 'R', 10);
	shiftArray(arr, 'R', 10);

	cout << "Print array after shifting right by one:\n";
	printArray(arr, 10);

	return 0;
}