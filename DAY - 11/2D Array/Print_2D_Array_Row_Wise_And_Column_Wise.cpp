#include<iostream>
using namespace std;

// Time Complexity : O(cols * rows)
void printColumnWise(int arr[][4], int rows, int cols) {

	for (int j = 0; j < cols; j++) {

		for (int i = 0; i < rows; i++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

// Time Complexity : O(rows * cols)
void printRowWise(int arr[][4], int rows, int cols) {

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

int main() {
	int arr[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	cout << "Printing 2D Array elements Row Wise:\n";
	printRowWise(arr, 3, 4);

	cout << "Printing 2D Array elements Column Wise:\n";
	printColumnWise(arr, 3, 4);

	return 0;
}