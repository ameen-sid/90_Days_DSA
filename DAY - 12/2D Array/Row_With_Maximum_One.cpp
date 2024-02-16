#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(rows * cols)
int rowAndMaxOnes(vector< vector<int> > mat) {

	int rows = mat.size();

	int row = -1;
	int maxOnes = 0;
	for (int i = 0; i < rows; i++) {

		int ones = 0;
		for (int j = 0; j < mat[i].size(); j++) {

			if (mat[i][j] == 1)
				ones++;
		}

		if (ones > maxOnes) {
			maxOnes = ones;
			row = i;
		}
	}
	return row;
}

int main() {
	vector< vector<int> > mat = {
		{1, 0, 0, 0},
		{0, 1, 1, 0},
		{0, 1, 1, 0},
		{1, 1, 1, 0},
		{0, 0, 1, 0}
	};

	cout << "The " << rowAndMaxOnes(mat) << " contains the maximum 1's in the matrix.";

	return 0;
}