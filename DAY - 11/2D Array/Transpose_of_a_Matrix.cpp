#include<iostream>
using namespace std;

// Time Complexity : O(order^2)
void transpose(int matrix[][3], int order) {

	for (int i = 0; i < order; i++) {

		for (int j = i; j < order; j++)
			swap(matrix[i][j], matrix[j][i]);
	}
}

// Time Complexity : O(order^2)
void printMatrix(int matrix[][3], int order) {

	for (int i = 0; i < order; i++) {

		for (int j = 0; j < order; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
}

int main() {
	int matrix[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	cout << "Printing Matrix before transposing:\n";
	printMatrix(matrix, 3);

	transpose(matrix, 3);

	cout << "Printing Matrix after tansposing:\n";
	printMatrix(matrix, 3);

	return 0;
}