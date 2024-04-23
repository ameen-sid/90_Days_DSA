#include<iostream>
using namespace std;

// Time Complexity : O(N)
int expand(string s, int i, int j) {

	int count = 0;
	while (i >= 0 && j < s.length() && s[i] == s[j]) {

		count++;
		i--;
		j++;
	}
	return count;
}

// Time Complexity : O(N^2)
int countSubstring(string s) {

	int totalCount = 0;
	for (int center = 0; center < s.length(); center++) {

		int oddAns = expand(s, center, center);
		int evenAns = expand(s, center, center + 1);

		totalCount += oddAns + evenAns;
	}
	return totalCount;
}

int main() {
	string str = "abc";

	cout << "Palindromic Substrings are: " << countSubstring(str) << endl;

	return 0;
}