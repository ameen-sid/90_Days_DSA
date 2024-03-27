#include<iostream>
using namespace std;

// Time Complexity : O(N)
bool checkPalindrome(char str[], int n) {

	int start = 0;
	int end = n - 1;
	while (start <= end) {

		if (str[start] != str[end]) {
			return false;
		}
		else {
			start++;
			end--;
		}
	}
	return true;
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

	int n = len(str);

	if (checkPalindrome(str, n))
		cout << "String is Palindrome.";
	else
		cout << "String is not Palindrome.";

	return 0;
}