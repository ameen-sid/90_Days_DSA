#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : ()
vector< vector<int> > matrixMultiplication(vector< vector<int> >& A, vector< vector<int> >& B) {

	int row1 = A.size();
	int row2 = B.size();

	int col1 = A[0].size();
	int col2 = B[0].size();
	vector< vector<int> > ans;

	if (col1 == row2) {

		for (int i = 0; i < row1; i++) {

			vector<int> temp;
			for (int j = 0; j < col2; j++) {

				int sum = 0;
				for (int k = 0; k < col1; k++) {
					sum += A[i][k] * B[k][j];
				}
				temp.push_back(sum);
			}
			ans.push_back(temp);
		}
	}
	return ans;
}

// Time Complexity : (rows * cols)
void printMatrix(vector< vector<int> > matrix) {

	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[0].size(); j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
}

int main() {
	vector< vector<int> > a{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	vector< vector<int> > b{
		{1, 2},
		{3, 4},
		{5, 6}
	};

	cout << "Print Matrix A:\n";
	printMatrix(a);

	cout << "Print Matrix B:\n";
	printMatrix(b);

	vector< vector<int> > result = matrixMultiplication(a, b);
	cout << "Resultant Matrix:\n";
	printMatrix(result);

	return 0;
}