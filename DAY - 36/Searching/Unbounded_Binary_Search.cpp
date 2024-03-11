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

// Time Complexity : O(M)
int unboundedBinarySearch(vector<int> nums, int target) {

	if (nums[0] == target)
		return 0;

	int i = 1;
	while (nums[i] <= target) {

		i *= 2;
	}
	return binarySearch(nums, i / 2, i, target);
}

int main() {
	vector<int> arr{ 3, 4, 5, 6, 11, 13, 14, 15, 56, 70, 81, 84, 88, 99, 110, 134, 144, 145, 150, 161 };
	int target = 70;

	cout << "Index is: " << unboundedBinarySearch(arr, target) << endl;

	return 0;
}