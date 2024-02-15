#include<iostream>
using namespace std;

// Time Complexity : O(rows * cols)
bool findTarget(int arr[][4], int rows, int cols, int target) {

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {

			if (arr[i][j] == target)
				return true;
		}
	}
	return false;
}

int main() {
	int arr[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	int target = 13;

	if (findTarget(arr, 3, 4, target)) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}