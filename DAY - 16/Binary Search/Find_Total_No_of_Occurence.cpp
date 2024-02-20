#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(log N)
int findLastOccurence(vector<int> nums, int target) {

	int start = 0;
	int end = nums.size() - 1;
	int ans = -1;

	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (nums[mid] == target) {
			// store the answer
			ans = mid;
			// move to the right
			start = mid + 1;
		}
		else if (target > nums[mid])
			start = mid + 1;
		else if (target < nums[mid])
			end = mid - 1;
	}
	return ans;
}

// Time Complexity : O(log N)
int findFirstOccurence(vector<int> nums, int target) {

	int start = 0;
	int end = nums.size() - 1;
	int ans = -1;

	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (nums[mid] == target) {
			// store the answer
			ans = mid;
			// move to the left
			end = mid - 1;
		}
		else if (target > nums[mid])
			start = mid + 1;
		else if (target < nums[mid])
			end = mid - 1;
	}
	return ans;
}

// Time Complexity : O(log N)
int findTotalOccurence(vector<int> nums, int target) {

	int firstOcc = findFirstOccurence(nums, target);
	int lastOcc = findLastOccurence(nums, target);

	return lastOcc - firstOcc + 1;
}

int main() {
	vector<int> arr{ 10, 20, 30, 30, 30, 30, 40, 50 };

	int target = 30;

	if (findTotalOccurence(arr, target) == -1)
		cout << "Element is not present in the array.";
	else
		cout << "Total No of Occurence is: " << findTotalOccurence(arr, target);

	return 0;
}