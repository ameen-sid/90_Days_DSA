/*
Fancy Pattern - 6
	1
	2*3
	4*5*6
	7*8*9*10
	7*8*9*10
	4*5*6
	2*3
	1
*/

#include<iostream>
using namespace std;

int main() {
	int rows;

	cout << "Enter the no of rows: ";
	cin >> rows;

	// First Half
	int count = 1;
	for (int i = 1; i <= rows; i++) {

		for (int j = 1; j <= (2 * i) - 1; j++) {

			if (j % 2 == 0)
				cout << "*";
			else
				cout << count++;
		}

		cout << endl;
	}

	// Second Half
	count = count - rows;
	for (int i = rows; i >= 1; i--) {

		int start = count;
		for (int j = 1; j <= (2 * i) - 1; j++) {

			if (j % 2 == 0)
				cout << "*";
			else
				cout << start++;
		}
		count = count - (i - 1);

		cout << endl;
	}

	return 0;
}