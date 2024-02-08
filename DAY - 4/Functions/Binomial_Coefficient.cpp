#include<iostream>
using namespace std;

int factorial(int n) {

	int fact = 1;
	for (int i = 1; i <= n; i++) {

		fact *= i;
	}

	return fact;
}

double nCr(int n, int r) {

	return (double)factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
	int n, r;

	cout << "Enter the value of n: ";
	cin >> n;

	cout << "Enter the value of r: ";
	cin >> r;

	cout << nCr(n, r);

	return 0;
}