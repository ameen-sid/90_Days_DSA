/*
Fancy Pattern - 4
	A
	A B A
	A B C B A
	A B C D C B A
	A B C D E D C B A
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		// First Pattern
		char ch = 65;
		for (int j = 1; j <= i; j++) {

			cout << ch++ << " ";
		}

		// Second Pattern
		ch = 65 + i - 2;
		for (int k = 1; k <= i - 1; k++) {

			cout << ch-- << " ";
		}

		cout << endl;
	}

	return 0;
}