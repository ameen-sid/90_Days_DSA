#include<iostream>
#include<vector>
using namespace std;

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

int main() {
	vector<int> arr{ 10, 20, 30, 30, 30, 30, 40, 50 };

	int target = 30;

	if (findFirstOccurence(arr, target) == -1)
		cout << "Element is not present in the array.";
	else
		cout << "First Occurence is present at index: " << findFirstOccurence(arr, target);

	return 0;
}