#include<iostream>
using namespace std;

int main() {
	// IMPLICIT CASTING

	// 1. int to float
	int num1 = 10;
	float num2 = 5.5;
	float result = num1 + num2; // Implicit conversion of num1 from int to float
	cout << result << endl;

	// 2. char to int
	char ch = 'A';
	int a = ch + 1; // Implicit converstion from char to int
	cout << a << endl;

	// 3. int to char
	int a = 97;
	char ch = a; // Implicit conversion from int to char
	cout << ch << endl;


	// EXPLICIT CASTING

	// 1. double to int
	double pi = 3.14159265;
	int intPi = (int)pi; // Explicit conversion from double to int
	cout << intPi << endl;

	// 2. float to char
	float floatingNumber = 65.35;
	char charValue = (char)floatingNumber; // Explicit conversion float to char
	cout << charValue << endl;

	// 3. int to float
	int a = 10;
	float b = 3.0;
	float c = a / b; // Explicit conversion from int to float
	cout << c << endl;

	return 0;
}