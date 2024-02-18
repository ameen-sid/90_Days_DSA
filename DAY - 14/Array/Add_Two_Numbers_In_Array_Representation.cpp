// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

// Optimized Solution
// Time Complexity : O(max(N1, N2))
// Space Complexity : O(max(N1, N2))
vector<int> addTwoNo(vector<int> a, vector<int> b) {

	vector<int> ans;

	int i = a.size() - 1;
	int j = b.size() - 1;

	int carry = 0;

	while (i >= 0 && j >= 0) {

		int addition = a[i--] + b[j--] + carry;
		int digit = addition % 10;
		ans.push_back(digit);
		carry = addition / 10;
	}

	while (i >= 0) {

		int addition = a[i--] + 0 + carry;
		int digit = addition % 10;
		ans.push_back(digit);
		carry = addition / 10;
	}

	while (j >= 0) {

		int addition = 0 + b[j--] + carry;
		int digit = addition % 10;
		ans.push_back(digit);
		carry = addition / 10;
	}

	if (carry)
		ans.push_back(carry);

	while (ans[ans.size() - 1] == 0)
		ans.pop_back();

	reverse(ans.begin(), ans.end());

	return ans;
}

// Brute Force Solution
// Time Complexity : O(max(N1, N2))
// Space Complexity: O(max(N1, N2))
vector<int> addTwoNoB(vector<int> a, vector<int> b) {

	int n1 = a.size();
	int n2 = b.size();

	int ansSize = (n1 < n2) ? n2 : n1;
	vector<int> ans(ansSize, 0);

	int i = n1 - 1;
	int j = n2 - 1;
	int k = ans.size() - 1;

	bool isCarry = false;

	while (k >= 0) {

		int addition = a[i--] + ((j < 0) ? 0 : b[j--]);
		if (addition <= 9) {

			if (isCarry) {
				ans[k--] += addition;
				isCarry = false;
			}
			else {
				ans[k--] = addition;
			}
		}
		else {

			if (isCarry) {

				int rem = addition % 10;
				ans[k--] += rem;
				ans[k] = addition / 10;
				isCarry = true;
			}
			else {

				int rem = addition % 10;
				ans[k--] = rem;
				ans[k] = addition / 10;
				isCarry = true;
			}
		}
	}
	return ans;
}

// Time Complexity : O(N)
void printArray(vector<int> arr) {
	for (int val : arr)
		cout << val << " ";
	cout << endl;
}

int main() {
	vector<int> A = { 9, 5, 4, 9 };
	vector<int> B = { 2, 1, 4 };

	vector<int> result = addTwoNo(A, B);

	printArray(result);

	return 0;
}