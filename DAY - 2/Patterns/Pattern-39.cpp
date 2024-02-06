/*
Fancy Alphabetic Triangle
	D
	C D
	B C D
	A B C D
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = rows; i >= 1; i--) {

		char ch = 'A' + i - 1;
		for (int j = 1; j <= rows - i + 1; j++) {

			cout << ch++ << " ";
		}
		cout << endl;
	}

	return 0;
}