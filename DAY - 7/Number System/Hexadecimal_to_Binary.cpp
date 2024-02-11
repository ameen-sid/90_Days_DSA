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

int hexaToBinary(string hex) {

	unsigned long long int binary = 0;
	for (int i = 0; i < hex.length(); i++) {

		if (hex[i] == 'A' || hex[i] == 'a')
			binary = (binary * 10000) + decimalToBinary(10);
		else if (hex[i] == 'B' || hex[i] == 'b')
			binary = (binary * 10000) + decimalToBinary(11);
		else if (hex[i] == 'C' || hex[i] == 'c')
			binary = (binary * 10000) + decimalToBinary(12);
		else if (hex[i] == 'D' || hex[i] == 'd')
			binary = (binary * 10000) + decimalToBinary(13);
		else if (hex[i] == 'E' || hex[i] == 'e')
			binary = (binary * 10000) + decimalToBinary(14);
		else if (hex[i] == 'F' || hex[i] == 'f')
			binary = (binary * 10000) + decimalToBinary(15);
		else {
			int int_char = hex[i] - '0';
			int temp = decimalToBinary(int_char);
			binary = (binary * 10000) + temp;
		}
	}
	return binary;
}

int main() {
	string hexa;

	cout << "Enter the hexa-decimal no: ";
	cin >> hexa;

	cout << "The Binary representation of Hexa-Decimaal No " << hexa << " is :" << hexaToBinary(hexa);

	return 0;
}