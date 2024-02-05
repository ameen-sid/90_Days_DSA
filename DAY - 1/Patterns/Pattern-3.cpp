/*
Hollow Inverted Half Piramid
	* * * * *
	*     *
	*   *
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
		for (int j = rows - i + 1; j >= 1; j--) {
			if (i == 1 || j == 1 || j == rows - i + 1)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}

	return 0;
}