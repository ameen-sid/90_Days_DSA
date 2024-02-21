#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(log N)
int findPeakElement(vector<int>& nums) {

	int start = 0;
	int end = nums.size() - 1;

	while (start < end) {

		int mid = start + (end - start) / 2;

		if (nums[mid] < nums[mid + 1]) {
			// A line
			// peak exist in right
			start = mid + 1;
		}
		else {
			// B line or Peak
			end = mid;
		}
	}
	return nums[start];
}

int main() {
	vector<int> arr{ 10, 20, 50, 40, 30 };

	cout << "The Peak element is: " << findPeakElement(arr) << endl;

	return 0;
}