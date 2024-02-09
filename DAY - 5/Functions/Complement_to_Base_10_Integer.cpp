#include<iostream>
#include<math.h>
using namespace std;

int complementToBase10Integer(int n) {

	int result = 0;
	int i = 0;
	while (n > 0) {
		int bit = n & 1;
		result += pow(2, i) * (!bit);
		i++;
		n >>= 1;
	}
	return result;
}

int main() {
	int num;

	cout << "Enter the no: ";
	cin >> num;

	cout << "The  Complement of Base 10 Integer is : " << complementToBase10Integer(num);

	return 0;
}