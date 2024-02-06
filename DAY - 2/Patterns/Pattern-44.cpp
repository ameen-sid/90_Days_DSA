/*
Numeric Triangle
		  1
		2 2
	  3 3 3
	4 4 4 4
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		// Print Spaces
		for (int j = 1; j <= rows - i; j++) {

			cout << "  ";
		}

		// Print Numerics
		for (int k = 1; k <= i; k++) {

			cout << i << " ";
		}

		cout << endl;
	}

	return 0;
}