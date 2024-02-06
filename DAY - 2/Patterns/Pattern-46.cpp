/*
Floy'd Numeric Triangle
		  1
		2 3
	  4 5 6
	7 8 9 10
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	int count = 1;
	for (int i = 1; i <= rows; i++) {

		// Print Spaces
		for (int j = 1; j <= rows - i; j++) {

			cout << "  ";
		}

		// Print Numerics
		for (int k = 1; k <= i; k++) {

			cout << count++ << " ";
		}

		cout << endl;
	}

	return 0;
}