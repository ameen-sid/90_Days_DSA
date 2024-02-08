#include<iostream>
using namespace std;

int createNoUsingDigits(int n) {

	int num = 0;
	for (int i = 1; i <= n; i++) {

		int digit;
		cout << "\nEnter the Digit: ";
		cin >> digit;

		num = (num * 10) + digit;
	}

	return num;
}

int main() {
	int numberOfDigits;

	cout << "Enter the no of digits: ";
	cin >> numberOfDigits;

	cout << "The Number is " << createNoUsingDigits(numberOfDigits) << endl;

	return 0;
}