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
int binaryToDecimal(int binary) {

	int num = 0, i = 0;
	while (binary > 0) {

		int rem = binary % 10;
		num = num + (rem * power(2, i++));
		binary = binary / 10;
	}
	return num;
}

int main() {
	int binary;

	cout << "Enter the binary no: ";
	cin >> binary;

	cout << "The Decimal value of the given Binary is :" << binaryToDecimal(binary);

	return 0;
}