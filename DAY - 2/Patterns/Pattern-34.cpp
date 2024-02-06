/*
Floy'd Alphabetic Square Pattern
	A B C
	D E F
	G H I
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	char ch = 'A';
	for (int i = 1; i <= rows; i++) {

		for (int j = 1; j <= rows; j++) {

			cout << ch++ << " ";
		}
		cout << endl;
	}

	return 0;
}