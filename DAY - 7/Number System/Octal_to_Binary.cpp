#include<iostream>
using namespace std;

long long int power(int a, int n) {

	long long int ans = 1;
	for (int i = 1; i <= n; i++) {

		ans *= a;
	}
	return ans;
}

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

int octalToBinary(string octal) {

	unsigned long long int binary = 0, i = 3;
	for (int i = 0; i < octal.length(); i++) {

		int int_char = octal[i] - '0';
		int temp = decimalToBinary(int_char);
		binary = (binary * 1000) + temp;
	}
	return binary;
}

int main() {
	string octal;

	cout << "Enter the octal no: ";
	cin >> octal;

	cout << "The Binary representation of the given Octal is :" << octalToBinary(octal);

	return 0;
}