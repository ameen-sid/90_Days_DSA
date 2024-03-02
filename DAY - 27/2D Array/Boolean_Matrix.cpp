#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(row * col)
void booleanMatrix(vector< vector<int> >& matrix) {

	int row = matrix.size();
	int col = matrix[0].size();

	bool arr_row[row];
	fill(arr_row, arr_row + row, false);
	bool arr_col[col];
	fill(arr_col, arr_col + col, false);

	for (int i = 0; i < row; i++) {

		for (int j = 0; j < col; j++) {

			if (matrix[i][j] == 1) {
				arr_row[i] = true;
				arr_col[j] = true;
			}
		}
	}

	for (int i = 0; i < row; i++) {

		if (arr_row[i] == 1) {
			for (int j = 0; j < col; j++)
				matrix[i][j] = 1;
		}
	}

	for (int i = 0; i < col; i++) {

		if (arr_col[i] == 1) {
			for (int j = 0; j < row; j++)
				matrix[j][i] = 1;
		}
	}
}

// Time Complexity : O(row * col)
void printMatrix(vector< vector<int> > matrix) {

	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[0].size(); j++)
			cout << matrix[i][j] << " ";

		cout << endl;
	}
}

int main() {
	vector< vector<int> > matrix{
		{1, 0, 0},
		{1, 0, 0},
		{1, 0, 0},
		{0, 0, 0}
	};

	cout << "Print Matrix Before Modification:\n";
	printMatrix(matrix);

	booleanMatrix(matrix);

	cout << "Print Matrix After Modification:\n";
	printMatrix(matrix);

	return 0;
}