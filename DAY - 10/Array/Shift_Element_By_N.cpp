#include<iostream>
using namespace std;

// Time Complexity : O(N)
// Space Complexity : O(T) ==> Where T is no of times to shift elements in array.
void shiftArray(int arr[], char direction, int times, int n) {

	if (direction == 'L' || direction == 'l') {

		// Shift array to left
		int temp[times];
		for (int i = 0; i < times; i++)
			temp[i] = arr[i];

		int j = 0;
		for (int i = times; i < n; i++)
			arr[j++] = arr[i];

		for (int i = 0; j < n; i++, j++)
			arr[j] = temp[i];
	}
	else {

		// Shift array to right
		int temp[times];
		for (int i = 0, j = n - times; j < n; i++, j++)
			temp[i] = arr[j];

		int j = n - 1;
		for (int i = (n - times) - 1; i >= 0; i--)
			arr[j--] = arr[i];

		for (int i = times - 1; j >= 0; i--, j--)
			arr[j] = temp[i];
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

	shiftArray(arr, 'L', 3, 10);

	cout << "Print array after shifting left by 3:\n";
	printArray(arr, 10);

	shiftArray(arr, 'R', 3 + 5, 10);

	cout << "Print array after shifting right by 5:\n";
	printArray(arr, 10);

	return 0;
}