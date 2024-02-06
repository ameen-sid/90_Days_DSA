/*
Fancy Numeric Triangle
	1
	2 1
	3 2 1
	4 3 2 1
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		int c = i;
		for (int j = 1; j <= i; j++) {

			cout << c-- << " ";
		}
		cout << endl;
	}

	return 0;
}