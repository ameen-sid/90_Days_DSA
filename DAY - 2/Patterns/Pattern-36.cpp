/*
Alphabetic Triangle
	A
	B B
	C C C
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		for (int j = 1; j <= i; j++) {

			char ch = 'A' + i - 1;
			cout << ch << " ";
		}
		cout << endl;
	}

	return 0;
}