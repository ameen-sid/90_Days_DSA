/*
Fancy Pattern - 2
	1
	2*2
	3*3*3
	4*4*4*4
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

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

	return 0;
}