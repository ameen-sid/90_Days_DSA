/*
Numeric Palindromic Pattern
			1
		  2 1 2
		3 2 1 2 3
	  4 3 2 1 2 3 4
	5 4 3 2 1 2 3 4 5
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

		// Print First Half
		int count = i;
		for (int k = 1; k <= i; k++) {

			cout << count-- << " ";
		}

		// Print Second Half
		count = 2;
		for (int l = 1; l <= i - 1; l++) {

			cout << count++ << " ";
		}

		cout << endl;
	}

	return 0;
}