/*
Fancy Pattern - 7
	*
	* 1 *
	* 1 2 1 *
	* 1 2 3 2 1 *
	* 1 2 1 *
	* 1 *
	*
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	cout << "*" << endl;
	for (int i = 1; i <= rows; i++) {

		// Print Starting Star
		cout << "* ";

		// Print First Half
		for (int k = 1; k <= i; k++) {

			cout << k << " ";
		}

		// Print Second Half
		int p = i - 1;
		for (int l = 1; l <= i - 1; l++) {

			cout << p-- << " ";
		}

		// Print Ending Star
		cout << "*";
		cout << endl;
	}

	for (int i = 1; i < rows; i++) {

		// Print Starting Star
		cout << "* ";

		// Print First Half
		for (int k = 1; k <= rows - i; k++) {

			cout << k << " ";
		}

		// Print Second Half
		for (int l = rows - 2; l >= i; l--) {

			cout << l << " ";
		}

		// Print Ending Star
		cout << "*";
		cout << endl;
	}
	cout << "*" << endl;

	return 0;
}