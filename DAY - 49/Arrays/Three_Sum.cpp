// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

// Two Pointer Approach
// Time Complexity :O(N logN)
bool threeSum(vector<int> arr, int target) {

	sort(arr.begin(), arr.end());

	for (int i = 0; i < arr.size(); i++) {

		int low = i + 1;
		int high = arr.size() - 1;
		while (low < high) {

			if (arr[i] + arr[low] + arr[high] == target)
				return true;
			else if (arr[i] + arr[low] + arr[high] < target)
				low++;
			else
				high--;
		}
	}
	return false;
}

// Brute Force
// Time Complexity : O(N^3)
bool threeSumB(vector<int> arr, int target) {

	int n = arr.size();
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (arr[i] + arr[j] + arr[k] == target)
					return true;
			}
		}
	}
	return false;
}

int main() {
	vector<int> arr{ 12, 3, 7, 1, 6, 9 };
	int target = 5;

	if (threeSum(arr, target))
		cout << "True";
	else
		cout << "False";

	return 0;
}