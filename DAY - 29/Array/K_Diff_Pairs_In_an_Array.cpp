// #include<iostream>
// #include<vector>
// #include<set>
// #include<pair>
#include<bits/stdc++.h>
using namespace std;

int findPairs(vector<int>& nums, int k) {

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