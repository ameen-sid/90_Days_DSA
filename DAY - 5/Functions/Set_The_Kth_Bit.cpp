#include<iostream>
using namespace std;

int setKthBit(int num, int k) {

	int mask = 1 << k;
	return  (num | mask); //set the K-th bit to 1
}

int main() {
	int num, k;

	cout << "Enter the number: ";
	cin >> num;

	cout << "Enter the kth value: ";
	cin >> k;

	cout << "The  new number after setting the " << k << "th bit is : " << setKthBit(num, k);

	return 0;
}