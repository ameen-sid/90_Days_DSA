/*
Butterfly Pattern
	*             *
	* *         * *
	* * *     * * *
	* * * * * * * *
	* * * * * * * *
	* * *     * * *
	* *         * *
	*             *
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	// First Half
	for (int i = 1; i <= rows; i++) {

		// Left Stars
		for (int j = 1; j <= i; j++) {

			cout << "* ";
		}

		// Middle Spaces
		for (int k = 1; k <= (rows * 2) - (2 * i); k++) {

			cout << "  ";
		}

		// Right Stars
		for (int l = 1; l <= i; l++) {

			cout << "* ";
		}

		cout << endl;
	}

	// Second Half
	for (int i = rows; i >= 1; i--) {

		// Left Stars
		for (int j = i; j >= 1; j--) {

			cout << "* ";
		}

		// Middle Spaces
		for (int k = 1; k <= (rows - i) * 2; k++) {

			cout << "  ";
		}

		// // Right Stars
		for (int l = i; l >= 1; l--) {

			cout << "* ";
		}

		cout << endl;
	}

	return 0;
}