/*
Numeric Solid Square Pattern
	1 2 3 4
	1 2 3 4
	1 2 3 4
	1 2 3 4
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		for (int j = 1; j <= rows; j++) {

			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}