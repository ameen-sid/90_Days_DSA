#include<iostream>
using namespace std;

// Time Complexity : O(N)
void replaceWithSpace(string& str) {

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '@')
			str[i] = ' ';
	}
}

int main() {
	string str;

	cout << "Enter your string: ";
	cin >> str;

	replaceWithSpace(str);

	cout << "Print String after replacing @: " << str << endl;

	return 0;
}