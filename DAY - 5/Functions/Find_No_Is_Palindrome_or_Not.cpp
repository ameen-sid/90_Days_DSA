#include<iostream>
using namespace std;

bool isPalindrome(int n) {

	int temp = n;
	int rev = 0;
	while (temp > 0) {

		int rem = temp % 10;
		rev = (rev * 10) + rem;
		temp /= 10;
	}
	return rev == n;
}

int main() {
	int num;

	cout << "Enter the no: ";
	cin >> num;

	if (isPalindrome(num))
		cout << "The number is a palindrome.";
	else
		cout << "The number is not a palindrome.";

	return 0;
}