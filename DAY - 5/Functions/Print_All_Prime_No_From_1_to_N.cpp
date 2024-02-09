#include<iostream>
using namespace std;

bool isPrime(int num) {

	int flag = 1;
	for (int i = 2; i < num; i++) {

		if (num % i == 0)
			flag = 0;
	}
	return flag;
}

void primeOneToN(int n) {

	cout << "1 is Prime number" << endl;
	for (int i = 2; i <= n; i++) {

		if (isPrime(i))
			cout << i << " is Prime number" << endl;
		else
			cout << i << " isn't Prime number" << endl;
	}
}

int main() {
	int num;

	cout << "Enter the positive number: ";
	cin >> num;

	primeOneToN(num);

	return 0;
}