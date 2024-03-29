#include<iostream>
using namespace std;

// Time Complexity : O(N)
// Space Complexity : O(1)
char getMaxOccChar(string s) {

	int arr[26] = { 0 };
	for (int i = 0; i < s.length(); i++) {

		int number = 0;
		if (s[i] >= 'a' && s[i] <= 'z') {
			number = s[i] - 'a';
		}
		else {
			number = s[i] - 'A';
		}
		arr[number]++;
	}

	int max = -1, ans = 0;
	for (int i = 0; i < 26; i++) {

		if (max < arr[i]) {
			ans = i;
			max = arr[i];
		}
	}

	return 'a' + ans;
}

int main() {
	string s;

	cout << "Enter your string: ";
	cin >> s;

	cout << "The Maximum Occurring Character is: " << getMaxOccChar(s);

	return 0;
}