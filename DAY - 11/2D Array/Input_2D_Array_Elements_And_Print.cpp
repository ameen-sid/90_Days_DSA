#include<iostream>
using namespace std;

// Time Complexity : O(rows * cols)
void print2DArray(int arr[][4], int rows, int cols) {

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

int main() {
	int arr[3][4];
	int rows = 3, cols = 4;

	// Inputting elements of array
	cout << "Enter the elements of array: \n";
	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {

			cin >> arr[i][j];
		}
	}

	cout << "Printing the elements of array: \n";
	print2DArray(arr, rows, cols);

	return 0;
}