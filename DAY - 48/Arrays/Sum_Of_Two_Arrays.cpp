// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(max(n,m)) 
vector<int> findArraySum(vector<int>& arr1, vector<int>& arr2) {

	int i = arr1.size() - 1;
	int j = arr2.size() - 1;
	int carry = 0;

	vector<int> ans;

	while (i >= 0 && j >= 0) {

		int sum = arr1[i--] + arr2[j--] + carry;

		carry = sum / 10;
		sum = sum % 10;
		ans.push_back(sum);
	}

	while (i >= 0) {
		int sum = arr1[i--] + carry;

		carry = sum / 10;
		sum = sum % 10;
		ans.push_back(sum);
	}

	while (j >= 0) {
		int sum = arr2[j--] + carry;

		carry = sum / 10;
		sum = sum % 10;
		ans.push_back(sum);
	}

	reverse(ans.begin(), ans.end());

	return ans;
}

// Time Complexity : O(N)
void printArray(vector<int> arr) {

	for (int i : arr)
		cout << i << " ";
	cout << endl;
}

int main() {
	vector<int> arr1{ 1, 2, 3, 4 };
	vector<int> arr2{ 6 };

	vector<int> ans = findArraySum(arr1, arr2);
	printArray(ans);

	return 0;
}