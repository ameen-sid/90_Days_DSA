#include<iostream>
using namespace std;

long long int power(int a, int n) {

	long long int ans = 1;
	for (int i = 1; i <= n; i++) {

		ans *= a;
	}
	return ans;
}

// Division Method
int decimalToOctal(int num) {

	int octal = 0, i = 0;
	while (num > 0) {

		int rem = num % 8;
		octal = octal + (rem * power(10, i));
		i++;
		num = num / 8;
	}
	return octal;
}

int main() {
	int number;

	cout << "Enter the decimal number: ";
	cin >> number;

	cout << "The Octal representation of " << number << " is: " << decimalToOctal(number);

	return 0;
}