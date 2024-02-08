#include<iostream>
using namespace std;

// Normal Solution
bool isEven(int n) {

	int flag = 0;
	if (n % 2 == 0)
		flag = 1;

	return flag;
}

// Bitwise Solution
bool isEvenB(int n) {

	int flag = 0;
	if ((n & 1) == 0)
		flag = 1;

	return flag;
}


int main() {
	int num;

	cout << "Enter the number: ";
	cin >> num;

	if (isEvenB(num))
		cout << "The " << num << " is Even" << endl;
	else
		cout << "The " << num << " is Odd" << endl;

	return 0;
}