#include<iostream>
using namespace std;

void printAllDigits(int n) {

	if (n == 0)
		cout << "Digit: 0" << endl;

	while (n > 0) {

		int digit = n % 10;
		cout << "Digit: " << digit << endl;
		n /= 10;
	}
}

int main() {
	int num;

	cout << "Enter the no: ";
	cin >> num;

	printAllDigits(num);

	return 0;
}