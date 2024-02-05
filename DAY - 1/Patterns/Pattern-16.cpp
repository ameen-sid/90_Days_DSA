/*
Fancy Pattern - 5
	* * * * * * * * 1 * * * * * * * *
	* * * * * * * 2 * 2 * * * * * * *
	* * * * * * 3 * 3 * 3 * * * * * *
	* * * * * 4 * 4 * 4 * 4 * * * * *
	* * * * 5 * 5 * 5 * 5 * 5 * * * *
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		// Left Padding
		for (int p1 = 1; p1 < rows; p1++) {

			cout << "* ";
		}

		// Print Spacing (Stars)
		for (int j = 1; j <= rows - i; j++) {

			cout << "* ";
		}

		// Print Piramid
		for (int k = 1; k <= (2 * i) - 1; k++) {

			if (k % 2 == 0)
				cout << "* ";
			else
				cout << i << " ";
		}

		// Print Spacing (Stars)
		for (int l = 1; l <= rows - i; l++) {

			cout << "* ";
		}

		// Right Padding
		for (int p2 = 1; p2 < rows; p2++) {

			cout << "* ";
		}

		cout << endl;

	}

	return 0;
}