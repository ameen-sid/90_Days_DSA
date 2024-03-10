#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(log N)
int binarySearch(vector<int> nums, int start, int end, int target) {

	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (nums[mid] == target)
			return mid;
		else if (target < nums[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return -1;
}

// Time Complexity : O(log(2^log M/2))
int expSearch(vector<int> nums, int target) {

	if (nums[0] == target)
		return 0;

	int n = nums.size();
	int i = 1;
	while (i < n && nums[i] <= target) {
		i *= 2;
	}
	return binarySearch(nums, i / 2, min(i, n - 1), target);
}

int main() {
	vector<int> arr{ 3, 4, 5, 6, 11, 13, 14, 15, 56, 70 };
	int target = 14;

	cout << "Index is: " << expSearch(arr, target) << endl;

	return 0;
}