/*
Numeric Hollow Half Piramid
	1
	1 2
	1   3
	1     4
	1 2 3 4 5
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		for (int j = 1; j <= i; j++) {

			if (i == rows || j == 1 || j == i)
				cout << j << " ";
			else
				cout << "  ";
		}

		cout << endl;
	}

	return 0;
}