#include<iostream>
using namespace std;

int reverseInt(int num) {

	int temp = num;
	int reverse = 0;
	while (temp != 0) {

		int remainder = temp % 10;
		reverse = (reverse * 10) + remainder;
		temp = temp / 10;
	}

	return reverse;
}

int main() {
	int integer;

	cout << "Enter the integer: ";
	cin >> integer;

	cout << "The " << integer << " in reverse format is " << reverseInt(integer) << endl;

	return 0;
}
