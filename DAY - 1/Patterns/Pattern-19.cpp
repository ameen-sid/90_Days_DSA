/*
Solid Half Diamond
	*
	* *
	* * *
	* * * *
	* * *
	* *
	*
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	// First Half
	for (int i = 1; i <= rows; i++) {

		for (int j = 1; j <= i; j++) {

			cout << "* ";
		}

		cout << endl;
	}

	// Second Half
	for (int i = rows - 1; i >= 1; i--) {

		for (int j = i; j >= 1; j--) {

			cout << "* ";
		}

		cout << endl;
	}

	return 0;
}