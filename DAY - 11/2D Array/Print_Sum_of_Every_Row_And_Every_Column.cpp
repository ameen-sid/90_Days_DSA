#include<iostream>
using namespace std;

// Time Complexity : O(cols * rows)
void printSumOfColumns(int arr[][4], int rows, int cols) {

	int sum;
	for (int j = 0; j < cols; j++) {

		sum = 0;
		for (int i = 0; i < rows; i++) {

			cout << arr[i][j] << " ";
			sum += arr[i][j];
		}
		cout << "\t==>\t" << sum << endl;
	}
}

// Time Complexity : O(rows * cols)
void printSumOfRows(int arr[][4], int rows, int cols) {

	int sum;
	for (int i = 0; i < rows; i++) {

		sum = 0;
		for (int j = 0; j < cols; j++) {

			cout << arr[i][j] << " ";
			sum += arr[i][j];
		}
		cout << "\t==>\t" << sum << endl;
	}
}

int main() {
	int arr[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	cout << "Printing sum of every row:\n";
	printSumOfRows(arr, 3, 4);

	cout << "Printing sum of every column:\n";
	printSumOfColumns(arr, 3, 4);

	return 0;
}