#include<iostream>
using namespace std;

// Time Complexity : O(N)
// Space Complexity : O(N)
string replaceSpaces(string& str) {

	string temp = "";
	for (int i = 0; i < str.length(); i++) {

		if (str[i] == ' ') {
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else {
			temp.push_back(str[i]);
		}
	}
	return temp;
}

int main() {
	string str;

	cout << "Enter your string: ";
	getline(cin, str);

	cout << "String before replace spaces: " << str << endl;
	cout << "String after replace spaces: " << replaceSpaces(str) << endl;

	return 0;
}