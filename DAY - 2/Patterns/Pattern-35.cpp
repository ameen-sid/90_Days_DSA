/*
Fancy Alphabetic Square Pattern
	A B C
	B C D
	C D E
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 65; i <= 65 + rows - 1; i++) {

		char ch = i;
		for (int j = 1; j <= rows; j++) {

			cout << ch++ << " ";
		}
		cout << endl;
	}

	return 0;
}