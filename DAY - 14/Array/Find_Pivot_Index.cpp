#include<iostream>
#include<vector>
using namespace std;

// Prefix Sum Approach
// Time Complexity = O(N)
// Space Complexity = O(N^2)
int pivotIndex(vector<int>& nums) {

	int n = nums.size();

	vector<int> leftSum(n, 0);
	vector<int> rightSum(n, 0);

	// Calculate Left Sum Array
	for (int i = 1; i < n; i++)
		leftSum[i] = leftSum[i - 1] + nums[i - 1];

	// Calculate Right Sum Array
	for (int i = n - 2; i >= 0; i--)
		rightSum[i] = rightSum[i + 1] + nums[i + 1];

	// Checking the both sum of index
	for (int i = 0; i < n; i++) {
		if (leftSum[i] == rightSum[i])
			return i;
	}
	return -1;
}

// Brute Force
// Time Complexity = O(N^2)
int pivotIndexB(vector<int>& nums) {

	int n = nums.size();

	int leftSumStore = 0;

	for (int i = 0; i < n; i++) {

		int right = 0;
		int left = 0;

		for (int j = i + 1; j < n; j++)
			right += nums[j];

		// Condition for first element
		if (i == 0) {
			left = 0;
		}
		// Condition for last element
		else if (i == n - 1) {
			right = 0;
			left = leftSumStore;
		}
		else {
			left = leftSumStore;
		}

		if (right == left)
			return i;

		leftSumStore += nums[i];
	}
	return -1;
}

int main() {
	vector<int> arr = { 1, 7, 3, 6, 5, 6 };

	cout << "The Pivot Index of the array is: " << pivotIndex(arr);

	return 0;
}