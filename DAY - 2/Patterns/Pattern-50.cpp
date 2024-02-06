/*
Hollow Rhombus Pattern
			* * * * *
		  *       *
		*       *
	  *       *
	* * * * *
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

		// Print Stars
		for (int k = 1; k <= rows; k++) {

			if (i == 1 || i == rows || k == 1 || k == rows)
				cout << "* ";
			else
				cout << "  ";
		}

		cout << endl;
	}

	return 0;
}