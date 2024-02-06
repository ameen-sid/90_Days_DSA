/*
Inverted Star Triangle
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

	for (int i = 1; i <= rows; i++) {

		// Print Spaces
		for (int j = 1; j <= i - 1; j++) {

			cout << "  ";
		}

		// Print Stars
		for (int k = 1; k <= rows - i + 1; k++) {

			cout << "* ";
		}

		cout << endl;
	}

	return 0;
}