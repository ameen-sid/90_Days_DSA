#include<iostream>
using namespace std;

// Time Complexity : O(N + M)
string decodeMessage(string key, string message) {

	// create mapping
	char start = 'a';
	char mapping[280] = { 0 };

	for (auto ch : key) {

		if (ch != ' ' && mapping[ch] == 0) {
			mapping[ch] = start;
			start++;
		}
	}

	// use mapping
	string ans;
	for (auto ch : message) {

		if (ch == ' ') {
			ans.push_back(' ');
		}
		else {
			char decodedChar = mapping[ch];
			ans.push_back(decodedChar);
		}
	}
	return ans;
}

int main() {
	string key = "the quick brown fox jumps over the lazy dog";
	string message = "vkbs bs t suepuv";

	cout << "The Key is: " << key << endl;
	cout << "The Message is: " << message << endl;
	cout << "The Decoded Message is: " << decodeMessage(key, message) << endl;

	return 0;
}