#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(log N)
int findMissingElement(vector<int> nums) {

	int start = 0;
	int end = nums.size() - 1;
	int ans = -1;
	while (start <= end) {

		int mid = start + (end - start) / 2;

		int diff = nums[mid] - mid;
		if (diff == 1) {
			start = mid + 1;
		}
		else {
			ans = mid;
			end = mid - 1;
		}
	}
	return ans + 1;
}

int main() {
	vector<int> arr{ 1, 2, 3, 4, 6, 7, 8, 9 };

	cout << "The Missing element in the array is: " << findMissingElement(arr);

	return 0;
}