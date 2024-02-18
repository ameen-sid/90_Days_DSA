// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(N * _)
// Space Complexity : O()
vector<int> largeFactorial(int n) {

	vector<int> ans;
	ans.push_back(1);

	int carry = 0;
	for (int i = 2; i <= n; i++) {

		for (int j = 0; j < ans.size(); j++) {

			int prod = (ans[j] * i) + carry;
			ans[j] = prod % 10;
			carry = prod / 10;
		}

		while (carry) {

			ans.push_back(carry % 10);
			carry /= 10;
		}
	}
	reverse(ans.begin(), ans.end());

	return ans;
}

// Time Complexity : O(N)
void printArray(vector<int> arr) {
	for (int val : arr)
		cout << val << " ";
	cout << endl;
}

int main() {
	int n;

	cout << "Enter the value of n: ";
	cin >> n;

	vector<int> result = largeFactorial(n);
	printArray(result);

	return 0;
}