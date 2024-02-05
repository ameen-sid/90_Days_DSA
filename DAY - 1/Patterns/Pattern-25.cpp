/*
Numeric Solid Square Pattern
	4 3 2 1
	4 3 2 1
	4 3 2 1
	4 3 2 1
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		for (int j = rows; j >= 1; j--) {

			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}