/*
Numeric Triangle
	1
	2 2
	3 3 3
	4 4 4 4
	5 5 5 5 5
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		for (int j = 1; j <= i; j++) {

			cout << i << " ";
		}
		cout << endl;
	}

	return 0;
}