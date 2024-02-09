#include<iostream>
#include<math.h>
using namespace std;

int countAllSetBitsB(int n) {

	int count = 0;
	while (n > 0) {

		if ((n & 1) == 1)
			count++;

		n = n >> 1;
	}
	return count;
}

// Count No of Bits Approach
bool powerOfTwoB(int n) {

	int setBits = countAllSetBitsB(n);

	if (setBits == 1)
		return true;
	else
		return false;
}

bool powerOfTwo(int n) {

	if (n == 0)
		return true;

	for (int i = 1; i <= 31; i++) {

		if (n == pow(2, i))
			return true;
	}
	return false;
}

int main() {
	int num;

	cout << "Enter the no: ";
	cin >> num;

	if (powerOfTwo(num))
		cout << "True";
	else
		cout << "False";

	return 0;
}