#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(rows * cols)
vector<int> spiralOrder(vector< vector<int> >& matrix) {

	vector<int> ans;

	int m = matrix.size();
	int n = matrix[0].size();
	int totalElements = m * n;

	int startingRow = 0;
	int endingCol = n - 1;
	int endingRow = m - 1;
	int startingCol = 0;

	int count = 0;
	while (count < totalElements) {

		// Printing Starting Row
		for (int i = startingCol; i <= endingCol && count < totalElements; i++) {
			ans.push_back(matrix[startingRow][i]);
			count++;
		}
		startingRow++;

		// Printing Ending Col
		for (int i = startingRow; i <= endingRow && count < totalElements; i++) {
			ans.push_back(matrix[i][endingCol]);
			count++;
		}
		endingCol--;

		// Printing Ending Row
		for (int i = endingCol; i >= startingCol && count < totalElements; i--) {
			ans.push_back(matrix[endingRow][i]);
			count++;
		}
		endingRow--;

		// Printing Starting Col
		for (int i = endingRow; i >= startingRow && count < totalElements; i--) {
			ans.push_back(matrix[i][startingCol]);
			count++;
		}
		startingCol++;
	}

	return ans;
}

// Time Complexity : O(rows * cols)
void printArray(vector<int> arr) {

	for (int val : arr)
		cout << val << " ";
	cout << endl;
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
		{1, 2, 3, 4, 5, 6},
		{7, 8, 9, 10, 11, 12},
		{13, 14, 15, 16, 17, 18},
		{19, 20, 21, 22, 23, 24},
		{25, 26, 27, 28, 29, 30}
	};

	cout << "Print matrix normally:\n";
	printMatrix(matrix);

	cout << "Print matrix spirally:\n";
	vector<int> spiralPrint = spiralOrder(matrix);
	printArray(spiralPrint);

	return 0;
}