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
int decimalToBinary(int num) {

	int binary = 0, i = 0;
	while (num > 0) {

		int rem = num % 2;
		binary = binary + (rem * power(10, i));
		i++;
		num = num / 2;
	}
	return binary;
}

// Bitwise Method
int decimalToBinaryB(int n) {

	int binary = 0, i = 0;
	while (n > 0) {

		int bit = n & 1;
		binary = bit * power(10, i++) + binary;
		n = n >> 1;
	}
	return binary;
}

int main() {
	int number;

	cout << "Enter the decimal number: ";
	cin >> number;

	cout << "The Binary representation of " << number << " is: " << decimalToBinaryB(number);

	return 0;
}