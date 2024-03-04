// #include<iostream>
// #include<vector>
// #include<set>
// #include<pair>
#include<bits/stdc++.h>
using namespace std;

// Binary Search
// Time Complexity : (log N)
int binarySearch(vector<int>& nums, int start, int target) {

	int end = nums.size() - 1;
	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (nums[mid] == target)
			return mid;
		else if (target > nums[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	return -1;
}

// Binary Search Approach
// Time Complexity : O(Nlog N)
// Space Complexity : O()
int findPairs(vector<int>& nums, int k) {

	sort(nums.begin(), nums.end());

	set< pair<int, int> > ans;

	for (int i = 0; i < nums.size(); i++) {

		if (binarySearch(nums, i + 1, nums[i] + k) != -1)
			ans.insert({ nums[i], nums[i] + k });
	}
	return ans.size();
}

// Two Pointer Approach
// Time Complexity : O(Nlog N)
// Space Complexity : O()
int findPairsT(vector<int>& nums, int k) {

	sort(nums.begin(), nums.end());

	set< pair<int, int> > ans;

	int i = 0, j = 1;
	while (j < nums.size()) {

		int diff = nums[j] - nums[i];
		if (diff == k) {
			ans.insert({ nums[i], nums[j] });
			i++;
			j++;
		}
		else if (diff > k) {
			i++;
		}
		else {
			j++;
		}

		if (i == j)
			j++;
	}
	return ans.size();
}

int main() {
	vector<int> arr{ 3, 1, 5, 4, 1 };
	int k = 2;

	cout << "The no of K-Diff Pairs are: " << findPairs(arr, k);

	return 0;
}