/*
Alphabetic Square Pattern
	A A A
	B B B
	C C C
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 65; i <= 65 + rows - 1; i++) {

		for (int j = 1; j <= rows; j++) {

			char ch = i;
			cout << ch << " ";
		}
		cout << endl;
	}

	return 0;
}