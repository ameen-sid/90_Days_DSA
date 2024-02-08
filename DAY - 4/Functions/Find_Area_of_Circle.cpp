#include<iostream>
using namespace std;

float areaOfCircle(int radius) {
	const float pi = 3.14;

	return pi * radius * radius;
}

int main() {
	int radius;

	cout << "Enter the value of radius: ";
	cin >> radius;

	cout << "The area of circle is " << areaOfCircle(radius) << endl;

	return 0;
}