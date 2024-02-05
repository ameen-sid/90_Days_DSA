/*
Numeric Palindrom Equilateral Piramid
		  1
		1 2 1
	  1 2 3 2 1
	1 2 3 4 3 2 1
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		// Print Spaces
		for (int j = rows; j >= i; j--) {

			cout << "  ";
		}

		// Print First Half
		for (int k = 1; k <= i; k++) {

			cout << k << " ";
		}

		// Print Second Half
		int p = i - 1;
		for (int l = 1; l <= i - 1; l++) {

			cout << p-- << " ";
		}

		cout << endl;

	}

	return 0;
}