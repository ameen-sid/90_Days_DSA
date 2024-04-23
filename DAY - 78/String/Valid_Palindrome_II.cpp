#include<iostream>
using namespace std;

// Time Complexity : O(N)
bool checkPalindrome(string s, int i, int j) {

	while (i <= j) {

		if (s[i] != s[j]) {
			return false;
		}
		else {
			i++;
			j--;
		}
	}
	return true;
}

// Time Complexity : O(N)
bool ValidPalindrome(string s) {

	int i = 0;
	int j = s.length() - 1;

	while (i < j) {

		if (s[i] == s[j]) {
			i++;
			j--;
		}
		else {
			bool ans1 = checkPalindrome(s, i + 1, j);
			bool ans2 = checkPalindrome(s, i, j - 1);

			return ans1 || ans2;
		}
	}
	return true;
}

int main() {
	string str = "abca";

	if (ValidPalindrome(str))
		cout << "Yes, String is valid palindrome" << endl;
	else
		cout << "No, String is not valid palindrome" << endl;

	return 0;
}