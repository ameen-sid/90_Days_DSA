#include<iostream>
using namespace std;

// Time Complexity : O(N)
void reverseWord(char str[], int start, int end) {

	while (start <= end) {
		swap(str[start++], str[end--]);
	}
}

// Time Complexity : O(N)
void reverseWords(char str[], int n) {

	int startIndex = 0;
	for (int i = 0; i <= n; i++) {

		if (str[i] == ' ' || str[i] == '\0') {
			reverseWord(str, startIndex, i - 1);
			startIndex = i + 1;
		}
	}
}

int main() {
	char str[50] = { 'T', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e' };
	int n = 15;

	cout << "The Original String: ";
	for (int i = 0; str[i] != '\0'; i++) {
		cout << str[i];
	}
	cout << endl;

	reverseWords(str, n);

	cout << "The Reverse Words String: ";
	for (int i = 0; str[i] != '\0'; i++) {
		cout << str[i];
	}
	cout << endl;

	return 0;
}