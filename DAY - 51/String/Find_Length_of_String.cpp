#include<iostream>
using namespace std;

// Time Complexity : O(N)
int len(char str[]) {

	int len = 0;
	for (int i = 0; str[i] != '\0'; i++)
		len++;

	return len;
}

int main() {
	char str[20];

	cout << "Enter the string: ";
	cin >> str;

	cout << "The length of string is: " << len(str);

	return 0;
}