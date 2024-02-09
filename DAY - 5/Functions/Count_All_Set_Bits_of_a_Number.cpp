#include<iostream>
using namespace std;

// Divide Method
int countAllSetBits(int n) {

	int count = 0;
	while (n > 0) {

		int bit = n % 2;
		if (bit == 1)
			count++;

		n /= 2;
	}
	return count;
}

// Bitwise Method
int countAllSetBitsB(int n) {

	int count = 0;
	while (n > 0) {

		if ((n & 1) == 1)
			count++;

		n = n >> 1;
	}
	return count;
}

int main() {
	int num;

	cout << "Enter the number: ";
	cin >> num;

	cout << "The  Number of set bits in " << num << " is : " << countAllSetBitsB(num);

	return 0;
}