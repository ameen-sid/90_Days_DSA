/*
Numeric Triangle
	1 2 3 4
	  2 3 4
		3 4
		  4
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		// Print Spaces
		for (int j = 1; j <= i - 1; j++) {

			cout << "  ";
		}

		// Print Numerics
		for (int k = i; k <= rows; k++) {

			cout << k << " ";
		}

		cout << endl;
	}

	return 0;
}