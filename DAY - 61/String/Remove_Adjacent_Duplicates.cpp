#include<iostream>
using namespace std;

// Time Complexity : O(1)
char top(string s) {
	return s[s.length() - 1];
}

// Time Complexity : O(N)
// Space Complexity : O()
string removeDuplicates(string s) {

	string ans;

	int n = s.length();
	int i = 0;
	while (i < n) {

		if (ans.empty() || top(ans) != s[i]) {
			ans.push_back(s[i]);
		}
		else {
			ans.pop_back();
		}
		i++;
	}
	return ans;
}

int main() {
	string str;

	cout << "Enter the String: ";
	cin >> str;

	cout << "Print String before removing adjacent duplicates:" << endl;
	cout << str << endl;

	cout << "Print String after removing adjacent duplicates:" << endl;
	cout << removeDuplicates(str);

	return 0;
}