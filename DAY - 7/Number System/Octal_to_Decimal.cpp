#include<iostream>
using namespace std;

long long int power(int a, int n) {

	long long int ans = 1;
	for (int i = 1; i <= n; i++) {

		ans *= a;
	}
	return ans;
}

// Multiplication Method
int octalToDecimal(int octal) {

	int num = 0, i = 0;
	while (octal > 0) {

		int rem = octal % 10;
		num = num + (rem * power(8, i++));
		octal = octal / 10;
	}
	return num;
}

int main() {
	int octal;

	cout << "Enter the octal no: ";
	cin >> octal;

	cout << "The Decimal value of the given Octal is :" << octalToDecimal(octal);

	return 0;
}