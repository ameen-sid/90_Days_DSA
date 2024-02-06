/*
Floy'd Square
	1 2 3
	4 5 6
	7 8 9
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	int count = 1;
	for (int i = 1; i <= rows; i++) {

		for (int j = 1; j <= rows; j++) {

			cout << count++ << " ";
		}
		cout << endl;
	}

	return 0;
}