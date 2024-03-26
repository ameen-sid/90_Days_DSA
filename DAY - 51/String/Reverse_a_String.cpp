#include<iostream>
using namespace std;

// Time Complexity : O(N)
void reverseStr(char str[], int n) {

	int start = 0;
	int end = n - 1;
	while (start < end) {
		swap(str[start++], str[end--]);
	}
}

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

	int length = len(str);

	cout << "Printing string before reverse: ";
	cout << str << endl;

	reverseStr(str, length);

	cout << "Printing string after reverse: ";
	cout << str << endl;

	return 0;
}