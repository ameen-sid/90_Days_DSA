#include<iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) {

	return (celsius * 9 / 5) + 32;
}

int main() {
	float celsius;

	cout << "Enter the temperature in celsius: ";
	cin >> celsius;

	cout << "The " << celsius << " Degree Celsius is equal to " << celsiusToFahrenheit(celsius) << " Degrees in Fahrenheit " << endl;

	return 0;
}