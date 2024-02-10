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

// Multiplication Method
int binaryToOctal(int binary) {

	int octal = 0;
	int temp, i, j = 0;
	while (binary > 0) {

		int times = 3;
		temp = 0;
		i = 0;
		while (times--) {

			int bit = binary % 10;
			temp = temp + (bit * power(10, i++));
			binary /= 10;
		}
		octal += (binaryToDecimal(temp) * power(10, j++));
	}
	return octal;
}

int main() {
	int binary;

	cout << "Enter the binary no: ";
	cin >> binary;

	cout << "The Octal value of the given Binary is :" << binaryToOctal(binary);

	return 0;
}