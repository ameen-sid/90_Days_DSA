#include<iostream>
using namespace std;

// Time Complexity : O(1)
char upperChar(char ch) {
	return (ch - 'A') + 'a';
}

// Time Complexity : O(N)
void upper(string& str) {

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = upperChar(str[i]);
	}
}

int main() {
	string str;

	cout << "Enter your string: ";
	getline(cin, str);

	cout << "Print string before converting to lowercase: " << str << endl;
	upper(str);
	cout << "Print string after converting to lowercase: " << str << endl;

	return 0;
}