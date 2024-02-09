#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num) {

	bool flag = 1;
	for (int i = 2; i < num; i++) {

		if (num % i == 0)
			flag = 0;
	}
	return flag;
}

// Optimised Solution
bool isPrimeO(int num) {

	bool flag = 1;
	for (int i = 2; i < sqrt(num); i++) {

		if (num % i == 0)
			flag = 0;
	}
	return flag;
}

int main() {
	int num;

	cout << "Enter the positive no: ";
	cin >> num;

	if (isPrimeO(num))
		cout << "The number is Prime" << endl;
	else
		cout << "The number isn't Prime" << endl;

	return 0;
}