#include<iostream>
using namespace std;

// Time Complexity : O(N)
string removeDuplicates(string s) {

	string ans = "";
	int index = 0;

	while (index < s.length()) {

		if (ans.length() > 0 && ans[ans.length() - 1] == s[index])
			ans.pop_back();
		else
			ans.push_back(s[index]);

		index++;
	}
	return ans;
}

int main() {
	string str = "abbaca";

	cout << "The String is: " << str << endl;

	cout << "The Answer is: " << removeDuplicates(str) << endl;

	return 0;
}