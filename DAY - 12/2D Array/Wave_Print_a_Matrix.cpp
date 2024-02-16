#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(cols * rows)
void waveOrder(vector< vector<int> >& matrix) {

	int rows = matrix.size();
	int cols = matrix[0].size();

	for (int i = 0; i < cols; i++) {

		// for even no of cols --> Top to Bottom
		if ((i & 1) == 0) {
			for (int j = 0; j < rows; j++)
				cout << matrix[j][i] << " ";
		}

		// for odd no of cols --> Bottom to Top
		else {
			for (int j = rows - 1; j >= 0; j--)
				cout << matrix[j][i] << " ";
		}
	}
}

// Time Complexity : O(rows * cols)
void printMatrix(vector< vector<int> > matrix) {

	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[i].size(); j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
}

int main() {
	vector< vector<int> > matrix = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	cout << "Print Matrix Normally:\n";
	printMatrix(matrix);

	cout << "Print matrix in wave order:\n";
	waveOrder(matrix);

	return 0;
}