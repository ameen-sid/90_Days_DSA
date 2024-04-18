#include<iostream>
using namespace std;

// Time Complexity : O(N)
bool isPalindrome(string str) {

	int i = 0;
	int j = str.length() - 1;
	while (i <= j) {

		if (str[i] != str[j])
			return false;

		i++;
		j--;
	}
	return true;
}

int main() {
	string str;

	cout << "Enter your string: ";
	cin >> str;

	if (isPalindrome(str))
		cout << "Yes " << str << " is a palindrome";
	else
		cout << "No " << str << " is not a palindrome";

	return 0;
}