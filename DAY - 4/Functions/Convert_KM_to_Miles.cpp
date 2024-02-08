#include<iostream>
using namespace std;

double kmToMiles(int km) {

	return km * 0.621371;
}

int main() {
	int km;

	cout << "Enter the no of KM: ";
	cin >> km;

	cout << "The " << km << " is equal to " << kmToMiles(km) << " miles";

	return 0;
}