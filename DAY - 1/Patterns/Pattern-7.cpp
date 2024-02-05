/*
Diamond Pattern
			*
		  * * *
		* * * * *
	  * * * * * * *
	* * * * * * * * *
	  * * * * * * *
		* * * * *
		  * * *
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

		// Print Spaces
		for (int j = 1; j <= rows - i; j++) {
			cout << "  ";
		}

		// Print Stars
		for (int k = 1; k <= (2 * i) - 1; k++) {
			cout << "* ";
		}

		cout << endl;
	}

	// Second Half
	for (int i = rows - 1; i >= 1; i--) {

		// Print Spaces
		for (int j = rows - 1; j >= i; j--) {
			cout << "  ";
		}

		// Print Stars
		for (int k = 1; k <= (2 * i) - 1; k++) {
			cout << "* ";
		}

		cout << endl;
	}

	return 0;
}