#include<iostream>
using namespace std;

long long int power(int a, int n) {

	long long int ans = 1;
	for (int i = 1; i <= n; i++) {

		ans *= a;
	}
	return ans;
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

int main() {
	long long int binary;

	cout << "Enter the binary no: ";
	cin >> binary;

	cout << "The Hexa-Decimal value of the given Binary is :";

	string hex = binaryToHexa(binary);

	for (int i = 32; i >= 0; i--) {

		if (hex[i] == ' ')
			continue;

		cout << hex[i];
	}

	return 0;
}