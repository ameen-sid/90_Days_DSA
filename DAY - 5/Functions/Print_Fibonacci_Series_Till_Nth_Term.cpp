#include<iostream>
using namespace std;

void fibonacciTillNthTerm(int n) {

	int zeroth = 0;
	int first = 1;
	int next = zeroth + first;

	cout << zeroth << ", " << first << ", ";
	for (int i = 1; i < n; i++) {

		cout << next << ", ";
		zeroth = first;
		first = next;
		next = zeroth + first;
	}
}

int main() {
	int nth;

	cout << "Enter the nth term: ";
	cin >> nth;

	fibonacciTillNthTerm(nth);

	return 0;
}