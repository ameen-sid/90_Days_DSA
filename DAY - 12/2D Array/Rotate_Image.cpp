#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(N)
void reverse(vector< vector<int> >& mat, int row, int n) {

	int start = 0;
	int end = n - 1;
	while (start < end) {

		swap(mat[row][start], mat[row][end]);
		start++;
		end--;
	}
}

// Time Complexity : O(rows * cols)
void transpose(vector< vector<int> >& mat) {

	for (int i = 0; i < mat.size(); i++) {
		for (int j = i; j < mat[0].size(); j++)
			swap(mat[i][j], mat[j][i]);
	}
}

// Time Complexity : O(rows * cols) + O(rows^N)
void rotateImage(vector< vector<int> >& matrix) {

	// To rotate the 2d matrix in clockwise, 90 degree
	// First transpose the matrix
	transpose(matrix);

	// Then reverse each row of the matrix
	for (int i = 0; i < matrix.size(); i++)
		reverse(matrix, i, matrix[i].size());
}

// Time Complexity : O(rows * cols)
void printMatrix(vector< vector<int> > matrix) {

	for (vector<int> row : matrix) {
		for (int col : row)
			cout << col << " ";
		cout << endl;
	}
}

int main() {
	vector< vector<int> > matrix = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	cout << "Print the matrix before rotating 90 degree:\n";
	printMatrix(matrix);

	rotateImage(matrix);

	cout << "Print the matrix after rotating 90 degree:\n";
	printMatrix(matrix);

	return 0;
}