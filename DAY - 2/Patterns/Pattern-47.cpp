/*
Dabangg Pattern
	1 2 3 4 5 5 4 3 2 1
	1 2 3 4 * * 4 3 2 1
	1 2 3 * * * * 3 2 1
	1 2 * * * * * * 2 1
	1 * * * * * * * * 1
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		// Print First Numeric Padding
		for (int j = 1; j <= rows - i + 1; j++) {

			cout << j << " ";
		}

		// Print Middle Stars
		for (int k = 1; k <= (i - 1) * 2; k++) {

			cout << "* ";
		}

		// Print Last Padding
		for (int l = rows - i + 1; l >= 1; l--) {

			cout << l << " ";
		}

		cout << endl;
	}

	return 0;
}