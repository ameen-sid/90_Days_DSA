/*
Inverted Half Hollow Piramid
	*				*
	  *			  *
		*       *
		  *   *
			*
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = rows; i >= 1; i--) {

		// Print Spaces
		for (int j = rows; j >= i + 1; j--) {
			cout << "  ";
		}

		// Print Stars
		int numberOfStars = (2 * i) - 1;
		for (int k = 1; k <= numberOfStars; k++) {
			if (i == 1 || k == 1 || k == numberOfStars)
				cout << "* ";
			else
				cout << "  ";
		}

		cout << endl;
	}

	return 0;
}