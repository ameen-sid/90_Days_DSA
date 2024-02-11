#include<iostream>
using namespace std;

long long int power(int a, int n) {

	long long int ans = 1;
	for (int i = 1; i <= n; i++) {

		ans *= a;
	}
	return ans;
}

int hexaToDecimal(string hex) {

	int len = hex.length();
	int result = 0, j = 0;
	for (int i = len - 1; i >= 0; i--) {

		if (hex[i] == 'A' || hex[i] == 'a')
			result = result + (10 * power(16, j++));
		else if (hex[i] == 'B' || hex[i] == 'b')
			result = result + (11 * power(16, j++));
		else if (hex[i] == 'C' || hex[i] == 'c')
			result = result + (12 * power(16, j++));
		else if (hex[i] == 'D' || hex[i] == 'd')
			result = result + (13 * power(16, j++));
		else if (hex[i] == 'E' || hex[i] == 'e')
			result = result + (14 * power(16, j++));
		else if (hex[i] == 'F' || hex[i] == 'f')
			result = result + (15 * power(16, j++));
		else {
			int char_int = hex[i] - '0';
			result = result + (char_int * power(16, j++));
		}
	}
	return result;
}

int main() {
	string hexa;

	cout << "Enter the hexa-decimal no: ";
	cin >> hexa;

	cout << "The Decimal equivalent of Hexa-Decimaal No " << hexa << " is :" << hexaToDecimal(hexa);

	return 0;
}