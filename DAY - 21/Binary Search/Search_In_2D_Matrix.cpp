#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(log (N * M))
bool searchMatrix(vector< vector<int> >& matrix, int target) {

	int row = matrix.size();
	int col = matrix[0].size();
	int n = row * col;

	int start = 0;
	int end = n - 1;

	while (start <= end) {

		int mid = start + (end - start) / 2;

		int rowIndex = mid / col;
		int colIndex = mid % col;
		int currNumber = matrix[rowIndex][colIndex];

		if (currNumber == target)
			return true;
		else if (currNumber < target)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return false;
}

int main() {
	vector< vector<int> > matrix{
		{1, 3, 5, 7},
		{10, 11, 16, 20},
		{23, 30, 34, 60}
	};

	int target = 5;

	if (searchMatrix(matrix, target))
		cout << "Element is present in the matrix.";
	else
		cout << "Element isn't present in the matrix.";

	return 0;
}