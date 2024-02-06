/*
Fancy Alphabetic Trianle
	A
	B C
	C D E
	D E F G
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		char ch = 'A' + i - 1;
		for (int j = 1; j <= i; j++) {

			cout << ch++ << " ";
		}
		cout << endl;
	}

	return 0;
}