#include<iostream>
using namespace std;

// Time Complexity : O()
string removeOccurrences(string s, string part) {

	while (s.length() != 0 && s.find(part) < s.length())
		s.erase(s.find(part), part.length());
	return s;
}

int main() {
	string str = "daabcbaabcbc";
	string part = "abc";

	cout << "Print String before delete occurrence of substring: " << str << endl;
	cout << "Print String after delete occurrence of substring: " << removeOccurrences(str, part) << endl;

	return 0;
}