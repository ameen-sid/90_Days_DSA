#include<iostream>
using namespace std;

int subtractTheProductAndSumOfDigits(int n) {

	int product = 1;
	int sum = 0;
	while (n != 0) {
		product *= n % 10;
		sum += n % 10;
		n /= 10;
	}

	return product - sum;
}

int main() {
	int num;

	cout << "Enter the no: ";
	cin >> num;

	cout << "The  difference between the product of digits and the sum of digits is :" << subtractTheProductAndSumOfDigits(num) << endl;

	return 0;
}