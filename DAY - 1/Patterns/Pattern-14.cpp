/*
Numeric Hollow Inverted Half Piramid
	1 2 3 4 5
	2     5
	3   5
	4 5
	5
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		for (int j = i; j <= rows; j++) {

			if (i == 1 || j == rows || j == i)
				cout << j << " ";
			else
				cout << "  ";
		}
		cout << endl;
	}

	return 0;
}