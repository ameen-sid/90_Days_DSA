/*
Numeric Piramid Pattern
		1
	   2 2
	  3 3 3
	 4 4 4 4
	5 5 5 5 5
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

			cout << " ";
		}

		// Print Numerics
		for (int k = 1; k <= (2 * i) - 1; k++) {

			if (k % 2 == 0)
				cout << " ";
			else
				cout << i;
		}

		cout << endl;
	}

	return 0;
}