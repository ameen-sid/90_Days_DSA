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

long long int octalToBinary(string octal) {

	unsigned long long int binary = 0, i = 3;
	for (int i = 0; i < octal.length(); i++) {

		int int_char = octal[i] - '0';
		int temp = decimalToBinary(int_char);
		binary = (binary * 1000) + temp;
	}
	return binary;
}

int binaryToDecimal(int binary) {

	int num = 0, i = 0;
	while (binary > 0) {

		int rem = binary % 10;
		num = num + (rem * power(2, i++));
		binary = binary / 10;
	}
	return num;
}

string binaryToHexa(int binary) {

	string hex(32, ' ');
	int temp, i, j = 0;
	while (binary > 0) {

		int times = 4;
		temp = 0;
		i = 0;
		while (times--) {

			int bit = binary % 10;
			temp = temp + (bit * power(10, i++));
			binary /= 10;
		}

		int decimal = binaryToDecimal(temp);
		if (decimal == 10)
			hex[j] = 'A';
		else if (decimal == 11)
			hex[j] = 'B';
		else if (decimal == 12)
			hex[j] = 'C';
		else if (decimal == 13)
			hex[j] = 'D';
		else if (decimal == 14)
			hex[j] = 'E';
		else if (decimal == 15)
			hex[j] = 'F';
		else {
			char ch[1];
			sprintf(ch, "%d", decimal);
			hex[j] = ch[0];
		}
		j++;
	}
	return hex;
}

string octalToHexa(string octal) {

	long long int binary = octalToBinary(octal);
	string hex = binaryToHexa(binary);

	return hex;
}

int main() {
	string octal;

	cout << "Enter the octal no: ";
	cin >> octal;

	cout << "The Hexa-Decimal value of the given Octal is :";

	string hex = octalToHexa(octal);

	for (int i = 32; i >= 0; i--) {

		if (hex[i] == ' ')
			continue;

		cout << hex[i];
	}

	return 0;
}