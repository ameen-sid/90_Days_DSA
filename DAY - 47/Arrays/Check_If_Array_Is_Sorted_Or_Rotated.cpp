#include<iostream>
#include<vector>
using namespace std;

// Time Complexity : O(N)
bool checkArray(vector<int> nums) {

	int n = nums.size();
	int count = 0;
	for (int i = 1; i < n; i++) {

		if (nums[i - 1] > nums[i])
			count++;
	}

	if (nums[n - 1] > nums[0])
		count++;

	return count <= 1;
}

int main() {
	vector<int> arr{ 3, 4, 5, 1, 2 };

	if (checkArray(arr))
		cout << "Array is sorted or rotated.";
	else
		cout << "Array is not sorted or rotated.";

	return 0;
}