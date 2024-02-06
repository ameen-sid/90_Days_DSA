/*
Alphabetic Square Pattern
	A B C
	A B C
	A B C
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {

		for (int j = 65; j <= 65 + rows - 1; j++) {

			char ch = j;
			cout << ch << " ";
		}
		cout << endl;
	}

	return 0;
}