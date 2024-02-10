#include<iostream>
#include<string>
using namespace std;

// Division Method
string decimalToHexa(int num) {

	string hexa(32, ' ');
	int i = 0;
	while (num > 0) {

		int rem = num % 16;
		if (rem == 10)
			hexa[i] = 'A';
		else if (rem == 11)
			hexa[i] = 'B';
		else if (rem == 12)
			hexa[i] = 'C';
		else if (rem == 13)
			hexa[i] = 'D';
		else if (rem == 14)
			hexa[i] = 'E';
		else if (rem == 15)
			hexa[i] = 'F';
		else {
			char ch[1];
			sprintf(ch, "%d", rem);
			hexa[i] = ch[0];
		}
		i++;
		num = num / 16;
	}
	return hexa;
}

int main() {
	int number;

	cout << "Enter the decimal number: ";
	cin >> number;

	cout << "The Hexa-Decimal representation of " << number << " is: ";
	string str = decimalToHexa(number);

	for (int i = 32; i >= 0; i--) {

		if (str[i] == ' ')
			continue;
		cout << str[i];
	}

	return 0;
}