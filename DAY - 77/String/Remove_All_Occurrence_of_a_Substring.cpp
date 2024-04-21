#include<iostream>
using namespace std;

// Time Complexity : O(N)
string removeOccurrences(string s, string part) {

	while (s.find(part) != string::npos) {

		// if inside loop, it means that part exists in s string
		s.erase(s.find(part), part.length());
	}
	return s;
}

int main() {
	string str = "abccbabaddcbaaaee";
	string sbstr = "cba";

	cout << "The String is before removing substring: " << str << endl;
	cout << "The Substring is: " << sbstr << endl;

	cout << "The String is after removing substring: " << removeOccurrences(str, sbstr) << endl;

	return 0;
}