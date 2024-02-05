/*
Fancy Pattern - 3
	1
	2*2
	3*3*3
	4*4*4*4
	3*3*3
	2*2
	1
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	// First Half
	for (int i = 1; i <= rows; i++) {

		int numberOfCols = (2 * i) - 1;
		for (int j = 1; j <= numberOfCols; j++) {
			if (j % 2 == 0)
				cout << "*";
			else
				cout << i;
		}
		cout << endl;
	}

	// Second Half
	for (int i = rows - 1; i >= 1; i--) {

		for (int j = 1; j <= (2 * i) - 1; j++) {
			if (j % 2 == 0)
				cout << "*";
			else
				cout << i;
		}

		cout << endl;
	}

	return 0;
}