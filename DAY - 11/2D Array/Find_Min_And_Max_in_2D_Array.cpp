#include<iostream>
#include<limits>
using namespace std;

// Time Complexity : O(rows * cols)
int findMax(int arr[][4], int rows, int cols) {

	int max = INT16_MIN;
	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {

			if (arr[i][j] > max)
				max = arr[i][j];
		}
	}
	return max;
}

// Time Complexity : O(rows * cols)
int findMin(int arr[][4], int rows, int cols) {

	int min = INT16_MAX;
	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {

			if (arr[i][j] < min)
				min = arr[i][j];
		}
	}
	return min;
}

int main() {
	int arr[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	cout << "The Minimum element in 2d array is: " << findMin(arr, 3, 4) << endl;
	cout << "The Maximum element in 2d array is: " << findMax(arr, 3, 4) << endl;
	return 0;
}