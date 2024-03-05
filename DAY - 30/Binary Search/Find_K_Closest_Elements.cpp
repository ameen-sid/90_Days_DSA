// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(log N)
int lowerBound(vector<int>& nums, int X) {

	int start = 0;
	int end = nums.size() - 1;

	int ans = end;
	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (nums[mid] >= X) {
			ans = mid;
			end = mid - 1;
		}
		else if (X > nums[mid]) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	return ans;
}

// Binary Search Approach
// Time Complexity : O(log N + K)
vector<int> findKClosestElements(vector<int>& nums, int X, int K) {

	// lower bound
	int high = lowerBound(nums, X);
	int low = high - 1;

	while (K--) {

		if (low < 0)
			high++;
		else if (high >= nums.size())
			low--;
		else if (X - nums[low] > nums[high] - X)
			high++;
		else
			low--;
	}

	return vector<int>(nums.begin() + low + 1, nums.begin() + high);
}

// Two Pointer Approach
// Time Complexity : O(N - K)
vector<int> findKClosestElementsT(vector<int>& nums, int X, int K) {

	int low = 0;
	int high = nums.size() - 1;

	while (high - low >= K) {

		if (X - nums[low] > nums[high] - X)
			low++;
		else
			high--;
	}

	return vector<int>(nums.begin() + low, nums.begin() + high + 1);
}

// Incomplete
// Time Complexity : O(Nlog N)
// Space Complexity : O(N)
vector<int> findKClosestElementsH(vector<int>& nums, int X, int K) {

	int n = nums.size();
	vector<int> differences(n);
	vector<int> ans(K);

	for (int i = 0; i < n; i++)
		differences[i] = abs(X - nums[i]);

	sort(differences.begin(), differences.end());

	for (int i = 0; i < K; i++)
		ans[i] = differences[i];

	return ans;
}

// Time Complexity : O(N)
void printArray(vector<int> arr) {
	for (int val : arr)
		cout << val << " ";
	cout << endl;
}

int main() {
	vector<int> arr{ 12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56 };
	int X = 35, K = 4;

	vector<int> k_closest_elements = findKClosestElements(arr, X, K);

	cout << "The K-Closest Elements are:\n";
	printArray(k_closest_elements);

	return 0;
}