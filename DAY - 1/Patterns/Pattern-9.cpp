/*
Fancy Pattern - 1
	* * * *   * * * *
	* * *       * * *
	* *           * *
	*               *
	*               *
	* *           * *
	* * *       * * *
	* * * *   * * * *
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	// First Half
	for (int i = 1; i <= rows / 2; i++) {

		// Print Stars
		for (int j = 1; j <= (rows / 2) - i + 1; j++) {
			cout << "* ";
		}

		// Print Spaces
		for (int k = 1; k <= 2 + (2 * i) - 2; k++) {
			cout << "  ";
		}

		// Print Stars
		for (int l = 1; l <= (rows / 2) - i + 1; l++) {
			cout << "* ";
		}

		cout << endl;

	}

	// Second Half
	for (int i = 1; i <= rows / 2; i++) {

		// Print Stars
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}

		// Print Spaces
		for (int k = 1; k <= rows - (2 * i) + 2; k++) {
			cout << "  ";
		}

		// Print Stars
		for (int l = 1; l <= i; l++) {
			cout << "* ";
		}

		cout << endl;
	}

	return 0;
}